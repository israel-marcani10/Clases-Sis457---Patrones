// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "AquaticEnemy1.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AAquaticEnemy1 : public ANave
{
	GENERATED_BODY()

public:
	AAquaticEnemy1();

	// propiedad de la nave acuatica enemiga
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* MoveAquaticShip; // mever
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Torpedo; // munision
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bala; // munision
	UPROPERTY(EditAnywhere)
		float life; // vida

	// metodo para disparar
	virtual void Fire();

	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;
public:
	void Tick(float DeltaTime) override;
};
