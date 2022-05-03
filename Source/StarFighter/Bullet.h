// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Proyectil.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ABullet : public AProyectil
{
	GENERATED_BODY()
	
public:
	ABullet();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
};
