// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyShipWithPatternBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyShipWithPatternBuilder : public UInterface
{
	GENERATED_BODY()
};

class STARFIGHTER_API IEnemyShipWithPatternBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void buildDefenseSystem() = 0;
	virtual void buildAttackSystem() = 0;
	virtual void buildDisplacementSystem() = 0;
	virtual void buildCamouflageSystem() = 0;
	virtual class AEnemyShipWithPattern* getEnemyShipPattern() = 0;
};
