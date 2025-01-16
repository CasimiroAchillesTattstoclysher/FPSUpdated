// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fps2Character.h"
#include "Fps2Projectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AFps2Character

AFps2Character::AFps2Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

	isSprinting = false;
	isZoomedIn = false;
	isSlowed = false;
	
	hasUsedAbility1 = false;
	hasUsedAbility2 = false;
	
	ability1Duration = 10.0f;
	ability2Duration = 20.0f;
	
	ability1CooldownTime = 30.0f;
	ability2CooldownTime = 50.0f;

	weapon = nullptr;
	health = 1.0f;

	respawnLocation = FVector(-351.0f, -99.0f, 375.0f);
}

void AFps2Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFps2Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Sprinting
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AFps2Character::Sprint);
	PlayerInputComponent->BindAction("sprint", IE_Released, this, &AFps2Character::StopSprint);

	//abilities and debuffs
	PlayerInputComponent->BindAction("Ability1", IE_Pressed, this, &AFps2Character::ability1used);
	PlayerInputComponent->BindAction("Ability2", IE_Pressed, this, &AFps2Character::ability2used);

	//Reload
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AFps2Character::Reload);

	//zoom
	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &AFps2Character::ZoomIn);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &AFps2Character::stopZoom);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFps2Character::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AFps2Character::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFps2Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFps2Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFps2Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFps2Character::LookUpAtRate);
}

void AFps2Character::TakeDamage(float _damageAmount)
{
	health -= _damageAmount;
	if (health <= 0.0f)
	{
		health = 0.0f;
		Die();
	}
}

void AFps2Character::Die()
{
	Respawn();
}

void AFps2Character::Respawn()
{
	health = 1.0f;
	SetActorLocation(respawnLocation);
}

void AFps2Character::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			if (weapon)
			{
				if (weapon->clipAmmo > 0)
				{
					if (bUsingMotionControllers)
					{
						const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
						const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
						World->SpawnActor<AFps2Projectile>(ProjectileClass, SpawnLocation, SpawnRotation);
					}
					else
					{
						const FRotator SpawnRotation = GetControlRotation();
						// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
						const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

						//Set Spawn Collision Handling Override
						FActorSpawnParameters ActorSpawnParams;
						ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

						// spawn the projectile at the muzzle
						World->SpawnActor<AFps2Projectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
					}
					weapon->clipAmmo -= 1;
				}
				else if (weapon->clipAmmo == 0 && weapon->totalAmmo > 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Reload"));
					Reload();
				}
				else
				{
					TriggerOutOfAmmoPopUp();
				}
			}
			
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AFps2Character::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AFps2Character::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AFps2Character::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AFps2Character::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AFps2Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AFps2Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AFps2Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFps2Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
 
void AFps2Character::Sprint()
{
	if (isSlowed == true)
	{
		return;
	}
	
	if (auto characterMovement = GetCharacterMovement())
		characterMovement->MaxWalkSpeed = 1000.0f;
	isSprinting = true;

}

void AFps2Character::StopSprint()
{
	if (isSlowed == true)
	{
		return;
	}

	if (auto characterMovement = GetCharacterMovement())
		characterMovement->MaxWalkSpeed = 600.0f;
	isSprinting = false;
}

void AFps2Character::ZoomIn()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
		firstPersonCamera->SetFieldOfView(70.0f);
		isZoomedIn = true;
	}
}

void AFps2Character::stopZoom()
{
	if (auto firstPersonCamera = GetFirstPersonCameraComponent()) {
		firstPersonCamera->SetFieldOfView(90.0f);
		isZoomedIn = false;
	}
}

void AFps2Character::Reload()
{
	if (weapon)
	{
		
		if (weapon->clipAmmo != weapon->maxClipAmmo)
		{
			if (weapon->totalAmmo - (weapon->maxClipAmmo - weapon->clipAmmo) >=0)

			{
				weapon->totalAmmo -= (weapon->maxClipAmmo - weapon->clipAmmo);
				weapon->clipAmmo = weapon->maxClipAmmo;
			}
			else
			{
				weapon->clipAmmo += weapon->totalAmmo;
				weapon->totalAmmo = 0;
			}
		}
		
	}
}

void AFps2Character::ability1used()
{
	if (!hasUsedAbility1)
	{
		hasUsedAbility1 = true;
		
	if (auto characterMovement = GetCharacterMovement())
			characterMovement->MaxWalkSpeed = 2000.0f;

		GetWorld()->GetTimerManager().SetTimer(ability1Timer, this, &AFps2Character::ability1Reset, ability1Duration, false);
	}
}

void AFps2Character::ability2used()
{
	if (!hasUsedAbility2)
	{
		srand((unsigned)time(0));
		int i;
		i = (rand() % 3) + 1;
		

		hasUsedAbility2 = true;
		switch (i)
		{
		case 1:
			weapon->totalAmmo = 10;
			
			break;
		
		case 2:
			if (auto characterMovement = GetCharacterMovement())
				characterMovement->MaxWalkSpeed = 100.0f;
			isSlowed = true;
			
			break;
		
		case 3:
			hasUsedAbility1 = true;
			weapon->maxClipAmmo = INT_MAX;
			weapon->clipAmmo = weapon->maxClipAmmo;
			
			break;


		}
		
	

		GetWorld()->GetTimerManager().SetTimer(ability2Timer, this, &AFps2Character::ability2Reset, ability2Duration, false);
		
	}
}

void AFps2Character::ability1Reset()
{
	
	if (auto characterMovement = GetCharacterMovement())
	{
		characterMovement->MaxWalkSpeed = 600.0f;
	}
	GetWorld()->GetTimerManager().SetTimer(ability1Timer, this, &AFps2Character::ability1ResetComplete, ability1CooldownTime, false);

}

void AFps2Character::ability2Reset()
{
	weapon->maxClipAmmo = 30;
	weapon->clipAmmo = weapon->maxClipAmmo;
	isSlowed = false;
	GetWorld()->GetTimerManager().SetTimer(ability2Timer, this, &AFps2Character::ability2ResetComplete, ability2CooldownTime, false);

}

void AFps2Character::ability1ResetComplete()
{
	hasUsedAbility1 = false;
}

void AFps2Character::ability2ResetComplete()
{
	hasUsedAbility2 = false;
}

bool AFps2Character::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AFps2Character::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AFps2Character::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AFps2Character::TouchUpdate);
		return true;
	}
	
	return false;
}
