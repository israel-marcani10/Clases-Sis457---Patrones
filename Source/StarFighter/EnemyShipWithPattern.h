// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "EnemyShipWithPattern.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AEnemyShipWithPattern : public ANave
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Nave enemiga con Patron")
		UStaticMeshComponent* MeshShipEnemy;
	UPROPERTY(EditAnywhere, Category = "Nave enemiga con Patron")
		float VelocityShip;
	UPROPERTY(EditAnywhere, Category = "Nave enemiga con Patron")
		USceneComponent* BulletSpawnPoint;
	UPROPERTY(EditAnywhere, Category = "Nave enemiga con Patron")
		FString DefenseSystem;
	UPROPERTY(EditAnywhere, Category = "Nave enemiga con Patron")
		FString DisplacementSystem;

public:

	AEnemyShipWithPattern();

	void setMeshShipEnemy(UStaticMeshComponent* _MeshShipEnemy) { MeshShipEnemy = _MeshShipEnemy; }
	void setVelocityShip(float _VelocityShip) { VelocityShip = _VelocityShip; }
	void setBulletSpawnPoint(USceneComponent* _BulletSpawnPoint) { BulletSpawnPoint = _BulletSpawnPoint; }
	void setDefenseSystem(FString _DefenseSystem) { DefenseSystem = _DefenseSystem; }
	void setDisplacementSystem(FString _DisplacementSystem) { DisplacementSystem = _DisplacementSystem; }
	void CharacteristicsEnemyShip();

};
