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

	// propiedad para hacer mover la nave acuatica enemiga
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* MoveAquaticShip;
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Torpedo;
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bala;
	UPROPERTY(EditAnywhere)
		float life;

	// metodo para disparar
	virtual void Fire();

	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;
public:
	void Tick(float DeltaTime) override;
};
