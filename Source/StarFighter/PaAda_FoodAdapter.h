// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaAda_CreateFood.h"
#include "PaAda_FoodAdapter.generated.h"

class APaAdaGeneradorFood;

UCLASS()
class STARFIGHTER_API APaAda_FoodAdapter : public AActor, public IPaAda_CreateFood
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaAda_FoodAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// metodo para crear la clase food
	void Crear() override;

private:
	// el actor de la clase food
	UPROPERTY()
		APaAdaGeneradorFood* FoodView;
};
