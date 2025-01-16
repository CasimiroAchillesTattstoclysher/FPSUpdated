// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEnemy.h"

// Sets default values
AMyEnemy::AMyEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	health = 1.0f;
	hasTakenDamage = false;
	isDead = false;
}

// Called when the game starts or when spawned
void AMyEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyEnemy::TakeDamage(float _damage)
{
	health -= _damage;

	if (health <= 0.0)
	{
		isDead = true;
	}
	else
	{
		hasTakenDamage = true;
	}
}

// Called to bind functionality to input
void AMyEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


