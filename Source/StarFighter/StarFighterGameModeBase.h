// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StarFighterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AStarFighterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	//template <typename T>
	//T SpawnNave();

protected:
	virtual void BeginPlay() override;
	
};

/*
template<typename T>
inline T AStarFighterGameModeBase::SpawnNave()
{
	
	FVector GunOff = FVector(90.f, 0.f, 0.f);

	const FVector MoveDirection = FVector(-1.f, 0.f, 0.f);
	const FRotator SpawnRotation = MoveDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOff);
	T NaveX = GetWorld->SpawnActor<T>(SpawnLocation, SpawnRotation);

	return T();
}
*/