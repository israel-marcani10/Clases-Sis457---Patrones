// Fill out your copyright notice in the Description page of Project Settings.


#include "AquaticEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAquaticEnemy1::AAquaticEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	MoveAquaticShip = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MoveAquaticShip"));
	MoveAquaticShip->InitialSpeed = 100.0f;
	MoveAquaticShip->MaxSpeed = 100.0f;
	MoveAquaticShip->bRotationFollowsVelocity = true;
	MoveAquaticShip->bShouldBounce = false;
	MoveAquaticShip->ProjectileGravityScale = 0.f; // No gravity
}

void AAquaticEnemy1::Fire()
{
}

void AAquaticEnemy1::destroyEnemyAirShip()
{
	if (life <= 0.0f) {
		this->Destroy();
	}
}

void AAquaticEnemy1::BeginPlay()
{
	Super::BeginPlay();
	life = 40.0f;
}

void AAquaticEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
