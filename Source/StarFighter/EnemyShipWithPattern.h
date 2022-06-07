// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "EnemyShipWithPattern.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AEnemyShipWithPattern : public ANave
{
	GENERATED_BODY()
	
private:
	FString DefenseSystem;
	FString AttackSystem;
	FString DisplacementSystem;
	FString CamouflageSystem;

public:

	AEnemyShipWithPattern();

	void setDefenseSystem(FString _DefenseSystem) { DefenseSystem = _DefenseSystem; }
	void setAttackSystem(FString _AttackSystem) { AttackSystem = _AttackSystem; }
	void setDisplacementSystem(FString _DisplacementSystem) { DisplacementSystem = _DisplacementSystem; }
	void setCamouflageSystem(FString _CamouflageSystem) { CamouflageSystem = _CamouflageSystem; }
	void CharacteristicsEnemyShip();

protected:
	virtual void BeginPlay() override;

public:
	void Tick(float DeltaTime) override;
};
