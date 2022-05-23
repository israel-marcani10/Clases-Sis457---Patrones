// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "BulletEnemy.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ABulletEnemy : public AProyectil
{
	GENERATED_BODY()
	
public:
	ABulletEnemy();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
