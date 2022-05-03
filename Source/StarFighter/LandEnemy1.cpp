// Fill out your copyright notice in the Description page of Project Settings.


#include "LandEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ALandEnemy1::ALandEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Controlamos algunas de las propiedades del objeto
	MoveLandShip = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Move Air Ship"));
	MoveLandShip->InitialSpeed = 50.0f;
	MoveLandShip->MaxSpeed = 50.0f;
	MoveLandShip->bRotationFollowsVelocity = true;
	MoveLandShip->bShouldBounce = false;
	MoveLandShip->ProjectileGravityScale = 0.f; // No gravity
}

void ALandEnemy1::destroyLandEnemy()
{
	if (life <= 0.0f) {
		this->Destroy();
	}
}

void ALandEnemy1::BeginPlay()
{
	Super::BeginPlay();
	life = 20.0f; // inicializando vida
}

void ALandEnemy1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
