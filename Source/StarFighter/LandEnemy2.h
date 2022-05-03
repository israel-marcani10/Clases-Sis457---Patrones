// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LandEnemy1.h"
#include "LandEnemy2.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ALandEnemy2 : public ALandEnemy1
{
	GENERATED_BODY()
	
public:
	ALandEnemy2();

	// propiedad unicas de nave terrestre enemiga 2 
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bala;
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bomba;

	// metodo para disparar
	virtual void Fire();

	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;
};
