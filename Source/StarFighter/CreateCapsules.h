// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCapsule.h"
#include "CreateCapsules.generated.h"

UCLASS()
class STARFIGHTER_API ACreateCapsules : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreateCapsules();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Spawing")
		class UBoxComponent* WhereToSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TArray<TSubclassOf<AActor>> SpawnCapsules;
private:
	float NextSpawnCoolDown = 5.0f;
	float SpawnCoolDown = 0.0f;
};
