// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyShipWithPatternBuilder.h"
#include "EnemyShipWithPatternDirector.generated.h"

UCLASS()
class STARFIGHTER_API AEnemyShipWithPatternDirector : public APawn, public IEnemyShipWithPatternBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemyShipWithPatternDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Nave Enemiga con patron")
		AEnemyShipWithPattern* EnemyShipPattern;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void buildDefenseSystem() override;
	virtual void buildAttackSystem() override;
	virtual void buildDisplacementSystem() override;
	virtual void buildCamouflageSystem() override;
	virtual class AEnemyShipWithPattern* getEnemyShipPattern() override;
};
