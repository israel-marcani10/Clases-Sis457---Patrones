// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "AirEnemy1.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AAirEnemy1 : public ANave
{
	GENERATED_BODY()
	
public:
	AAirEnemy1();

	// propiedad para la nave aerea enemigo
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* MoveAirShip; // movimiento de la nave
	UPROPERTY(EditAnywhere)
		float life; // vida de la nave
	UPROPERTY(EditAnywhere, Category = "Particle")
		class UParticleSystem* ExplosionParticle;

	// metodo para destruir o explosion
	virtual void destroyEnemyAirShip();

protected:
	virtual void BeginPlay() override;

public:
	void Tick(float DeltaTime) override;

};
