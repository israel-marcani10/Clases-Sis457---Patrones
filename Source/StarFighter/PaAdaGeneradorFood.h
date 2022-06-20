// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaAdaGeneradorFood.generated.h"

UCLASS()
class STARFIGHTER_API APaAdaGeneradorFood : public AActor
{
	GENERATED_BODY()
	
	//IPaAda_CreateFood* CreateFood;
public:	
	// Sets default values for this actor's properties
	APaAdaGeneradorFood();

	void GenerarFood();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// metodos para spawnear el food
	//void SetCreateFood(AActor* CreateFoodObj);
	//void Crear();
};
