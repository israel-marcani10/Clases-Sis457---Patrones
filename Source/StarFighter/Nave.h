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
		USceneComponent* DefaulSceneRoot; // 
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* ParticleSystems; // para el propulsor
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* ExplosionFX; // para la explosion
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ShipMesh; // la malla o cascara
	UPROPERTY(EditAnywhere)
		UCapsuleComponent* CollisionComponent; // para colisiones 
	UPROPERTY(EditAnywhere)
		UAudioComponent* DeathExplosionSound; // sonido de muerte
	UPROPERTY(EditAnywhere)
		USceneComponent* BulletSpawnPoint;

	// variables tipo vector para la nave jugador
	FVector Current_Location; // para la ubicacion actual
	FRotator Current_Rotation; // para la rotacion de la nave
	FVector New_Location; // para la nueva ubicacion

	// propiedades de las balas
	bool bIsFiring; // esta disparando (true or false)
	float WeaponFireRate; // velocidad de disparo
	float TimeSceneLastShot; // tiempo de la duracion del disparo

	bool bHit; // chocar
	bool bDead; // muerto

	// velocidad actual en X y Y de la nave
	float Current_X_Velocity;
	float Current_Y_Velocity;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
