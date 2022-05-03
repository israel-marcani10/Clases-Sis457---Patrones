// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Lightning.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ALightning : public AProyectil
{
	GENERATED_BODY()

public:
	ALightning();

	// propiedades de bala
	UPROPERTY(EditAnywhere)
		float Damage; // daño de la bala
	UPROPERTY(EditAnywhere)
		float Color;

};
