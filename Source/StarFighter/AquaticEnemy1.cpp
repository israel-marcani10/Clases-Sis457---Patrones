// Fill out your copyright notice in the Description page of Project Settings.


#include "AquaticEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAquaticEnemy1::AAquaticEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Controlamos algunas de las propiedades del objeto
	MoveAquaticShip = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MoveAquaticShip"));
	MoveAquaticShip->InitialSpeed = 100.0f;
	MoveAquaticShip->MaxSpeed = 100.0f;
	MoveAquaticShip->bRotationFollowsVelocity = true;
	MoveAquaticShip->bShouldBounce = false;
	MoveAquaticShip->ProjectileGravityScale = 0.f; // No gravedad
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
	life = 40.0f; // inicializando vida
}

void AAquaticEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
