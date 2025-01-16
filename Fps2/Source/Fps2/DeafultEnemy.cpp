// Fill out your copyright notice in the Description page of Project Settings.


#include "DeafultEnemy.h"

// Sets default values
ADeafultEnemy::ADeafultEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	health = 1.0f;
	hasTakenDamage = false;
	isDead = false;
}

// Called when the game starts or when spawned
void ADeafultEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeafultEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeafultEnemy::TakeDamage(float _damage)
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

