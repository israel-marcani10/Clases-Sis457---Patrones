// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AudioComponent.h"
#include "Nave.generated.h"

UCLASS()
class STARFIGHTER_API ANave : public APawn
{
	GENERATED_BODY()

public:
	// Constructor
	ANave();

	// Propiedades de la nave padre
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;
	UPROPERTY(EditAnywhere)
		USceneComponent* CreateProjectile;
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* ShipParticle; // para el propulsor
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* ShipExplosion; // para la explosion
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ShipMesh; // la malla o cascara
	UPROPERTY(EditAnywhere)
		UCapsuleComponent* ShipCollision; // para colisiones 
	UPROPERTY(EditAnywhere)
		UAudioComponent* DeathExplosionSound; // sonido de muerte
	UPROPERTY(EditAnywhere)
		USceneComponent* BulletSpawnPoint;

	// velocidad actual en X y Y de la nave
	float Current_X_Velocity = 0.0f;
	float Current_Y_Velocity = 0.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
