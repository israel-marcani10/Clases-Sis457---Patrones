// Fill out your copyright notice in the Description page of Project Settings.


#include "AirEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAirEnemy1::AAirEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	MoveAirShip = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Move Air Ship"));
	MoveAirShip->InitialSpeed = 150.0f;
	MoveAirShip->MaxSpeed = 150.0f;
	MoveAirShip->bRotationFollowsVelocity = true;
	MoveAirShip->bShouldBounce = false;
	MoveAirShip->ProjectileGravityScale = 0.f; // No gravity
}

// metodo para la destruccion de la nave aerea enemiga
void AAirEnemy1::destroyEnemyAirShip()
{
	if (life <= 0.0f) {
		this->Destroy();
	}
}

void AAirEnemy1::BeginPlay()
{
	Super::BeginPlay();
	life = 10.0f;
}

void AAirEnemy1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
