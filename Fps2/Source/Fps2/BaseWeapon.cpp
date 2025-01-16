// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	maxTotalAmmo = 200;
	totalAmmo = 150;
	maxClipAmmo = 30;
	clipAmmo = 30;
	reloadTime = 2.0f;
}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

