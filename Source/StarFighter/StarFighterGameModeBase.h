// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MotherShipEnemy.h"
#include "PatternEnemyShip1.h"
#include "PatternEnemyShipDirector.h"
#include "PaAda_CreateFood.h"
#include "StarFighterGameModeBase.generated.h"

UCLASS()
class STARFIGHTER_API AStarFighterGameModeBase : public AGameModeBase, public IPaAda_CreateFood
{
	GENERATED_BODY()

private:
	static AMotherShipEnemy* Instance;

public:
	AStarFighterGameModeBase();

	// patron singleton
	AMotherShipEnemy* GetInstance();

	// TSubclassOf es una clase de plantilla que proporciona seguridad de tipo UClass.
	UPROPERTY(EditAnywhere, Category = "Spawn Nodriza")
		TSubclassOf<AMotherShipEnemy> MotherShip;

	float TiempoNodriza;

	// patron builder
private:
	// propiedades para el patron builder
	UPROPERTY(EditAnywhere, Category = "Implementacion Builder")
		class APatternEnemyShipDirector* PatternEnemyShipDirector;
	UPROPERTY(EditAnywhere, Category = "Implementacion Builder")
		class APatternEnemyShip1* PatternEnemyShip1;
	UPROPERTY(EditAnywhere, Category = "Implementacion Builder")
		TSubclassOf<APatternEnemyShip1> EnemyShip1;

	// patron adapter
	IPaAda_CreateFood* CreateFood;
	void SetCrearFood(AActor* CrearFoodObj);
	void Crear();
	float TiempoFood;
	
	//template <typename T>
	//T SpawnNave();
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	// variables para el patron factory method
	float InicioSpawn;
	float TopSpawn;
	
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