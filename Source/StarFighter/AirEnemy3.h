// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AirEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AirEnemy3.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AAirEnemy3 : public AAirEnemy1
{
	GENERATED_BODY()

public:
	AAirEnemy3();

	// propiedades de la nave aerea enemiga 3
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Misil;
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* Bomba;

	// metodos para disparar
	virtual void FireMisil();
	virtual void FireBomba();
	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
};
