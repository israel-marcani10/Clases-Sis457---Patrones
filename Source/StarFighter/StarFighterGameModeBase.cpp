// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "PlayerShip.h"

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	/*
	auto NaveNuevaAerea = SpawnNave<AAirEnemy1>();
	auto NaveNuevaTerreste = SpawnNave<ALandEnemy1>();
	auto NaveNuevaAquativa = SpawnNave<AAquaticEnemy1>();
	*/
	/*
	const FVector ShipLocation = FVector(-600.f, 0.f, 0.f);
	const FRotator ShipRotator = FRotator(90.f, 0.f, 90.f);

	//GetWorld()->SpawnActor(SpawnCapsules[Index], &Location, &Rotation);
	GetWorld()->SpawnActor(&ShipLocation, &ShipRotator);*/
}
