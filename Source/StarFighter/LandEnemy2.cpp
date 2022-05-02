// Fill out your copyright notice in the Description page of Project Settings.


#include "LandEnemy2.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ALandEnemy2::ALandEnemy2()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveLandShip->InitialSpeed = 60.0f;
	MoveLandShip->MaxSpeed = 60.0f;
}

void ALandEnemy2::Fire()
{
}

void ALandEnemy2::destroyEnemyAirShip()
{
	if (life <= 0.0f) {
		this->Destroy();
	}
}

void ALandEnemy2::BeginPlay()
{
	Super::BeginPlay();
	life = 30.0f;
}
