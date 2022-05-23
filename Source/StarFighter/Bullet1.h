// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Bullet1.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ABullet1 : public AProyectil
{
	GENERATED_BODY()
	
public:
	ABullet1();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
