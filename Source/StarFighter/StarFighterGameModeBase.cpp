// Copyright Epic Games, Inc. All Rights Reserved.


#include "StarFighterGameModeBase.h"
#include "PlayerShip.h"

AMotherShipEnemy* AStarFighterGameModeBase::Instance = nullptr;

AMotherShipEnemy* AStarFighterGameModeBase::GetInstance()
{
	if (Instance == nullptr)
	{
		const FVector Location = FVector(200.f, 0.f, 0.f);
		const FRotator Rotation = FRotator(0.f, 0.f, 180.f);
		Instance = GetWorld()->SpawnActor<AMotherShipEnemy>(MotherShip, Location, Rotation);
	}
	return Instance;
}

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

	//AEnemyMotherShip* NaveMother = AEnemyMotherShip::GetInstance();
	//const FVector Location = FVector(100.f, 0.f, 0.f);
	//const FRotator Rotation = FRotator(0.f, 0.f, 180.f);
	//GetWorld()->SpawnActor<AMotherShipEnemy>(MotherShip, Location, Rotation);

	AMotherShipEnemy* ob1 = AStarFighterGameModeBase::GetInstance();

	//AMotherShipEnemy* ob2 = new AMotherShipEnemy();
}
