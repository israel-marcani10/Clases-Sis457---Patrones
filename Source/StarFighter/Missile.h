// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Missile.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AMissile : public AProyectil
{
	GENERATED_BODY()
	
public:
	AMissile();

	// propiedades de bala
	UPROPERTY(EditAnywhere)
		float Damage; // da�o de la bala
	UPROPERTY(EditAnywhere)
		float Zise; // tama�o
	UPROPERTY(EditAnywhere)
		float Shape; // forma

};
