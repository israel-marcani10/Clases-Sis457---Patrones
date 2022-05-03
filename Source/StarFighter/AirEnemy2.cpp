// Fill out your copyright notice in the Description page of Project Settings.


#include "AirEnemy2.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAirEnemy2::AAirEnemy2()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MoveAirShip->InitialSpeed = 70.0f; // velocida cambiado
	MoveAirShip->MaxSpeed = 70.0f; // mac vel cambiada
}

void AAirEnemy2::Fire()
{

}

void AAirEnemy2::destroyEnemyAirShip()
{
	Super::destroyEnemyAirShip();
}

void AAirEnemy2::BeginPlay()
{
	Super::BeginPlay();
	life = 20.0f; // inicializando vida
}

void AAirEnemy2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
