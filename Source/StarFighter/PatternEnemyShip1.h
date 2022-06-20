// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyShipWithPatternBuilder.h"
#include "PatternEnemyShip1.generated.h"

UCLASS()
class STARFIGHTER_API APatternEnemyShip1 : public APawn, public IEnemyShipWithPatternBuilder
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APatternEnemyShip1();

	UPROPERTY(EditAnywhere, Category = "Componentes")
		UStaticMeshComponent* MeshShipE;
	UPROPERTY(EditAnywhere, Category = "Componentes")
		USceneComponent* BulletSpawnPoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Nave Enemiga con patron 1")
		AEnemyShipWithPattern* PatternEnemyShip1;

	float TimeToSpawnShoot;
	float ShootTime;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void buildMeshShipEnemy() override;
	virtual void buildVelocityShip() override;
	virtual void buildBulletSpawnPoint() override;
	virtual void buildDefenseSystem() override;
	virtual void buildDisplacementSystem() override;
	virtual class AEnemyShipWithPattern* getEnemyShipPattern() override;
};
