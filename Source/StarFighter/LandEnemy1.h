// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "LandEnemy1.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ALandEnemy1 : public ANave
{
	GENERATED_BODY()

public:
	ALandEnemy1();
	
	// propiedad para hacer mover la nave terrestre enemiga
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* MoveLandShip;
	UPROPERTY(EditAnywhere)
		float life; // Vida

	// metodo para destruir la nave
	virtual void  destroyLandEnemy();

protected:
	virtual void BeginPlay() override;
public:
	void Tick(float DeltaTime) override;

};
