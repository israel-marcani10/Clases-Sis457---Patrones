// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AirEnemy1.h"
#include "AirEnemy2.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AAirEnemy2 : public AAirEnemy1
{
	GENERATED_BODY()

public:
	AAirEnemy2();

	// propiedad bala unica de la nave enemiga aerea
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bala;

	// metodo para disparar
	virtual void Fire();

	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;
	
public:
	void Tick(float DeltaTime) override;
};
