// Fill out your copyright notice in the Description page of Project Settings.


#include "AirEnemy3.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAirEnemy3::AAirEnemy3()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveAirShip->InitialSpeed = 200.0f; // velocidad inicial cambiada
	MoveAirShip->MaxSpeed = 200.0f; // max vel cambiada
}

void AAirEnemy3::FireMisil()
{
}

void AAirEnemy3::FireBomba()
{
}

void AAirEnemy3::destroyEnemyAirShip()
{
	Super::destroyEnemyAirShip();
}

void AAirEnemy3::BeginPlay()
{
	Super::BeginPlay();
	life = 30.0f; // inicializando vida
}

void AAirEnemy3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
