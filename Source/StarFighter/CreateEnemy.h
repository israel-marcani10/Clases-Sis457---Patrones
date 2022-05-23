// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreateEnemy.generated.h"

UCLASS()
class STARFIGHTER_API ACreateEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreateEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Spawing")
		class UBoxComponent* WhereToSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TArray<TSubclassOf<AActor>> SpawnClasses;
private:
	const float MinSpawnCoolDown = 2.0f;
	const float MaxSpawnCollDown = 4.0f;
	float NextSpawnCoolDown = 5.0f;
	float SpawnCoolDown = 0.0f;
};
