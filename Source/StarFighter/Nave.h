// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Particles/ParticleSystem.h"
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
	UPROPERTY(EditAnywhere, Category = "Component")
		UParticleSystemComponent* ShipParticle; // para el propulsor
	UPROPERTY(EditAnywhere, Category = "Component")
		UStaticMeshComponent* ShipMesh; // la malla o cascara
	UPROPERTY(EditAnywhere, Category = "Component")
		UCapsuleComponent* ShipCollision; // para colisiones 
	UPROPERTY(EditAnywhere, Category = "Component")
		UAudioComponent* DeathExplosionSound; // sonido de muerte
	//UPROPERTY(EditAnywhere, Category = "Component")
		//USceneComponent* BulletSpawnPoint;

		// tamaño del campo de juego
	UPROPERTY(EditAnywhere)
		float Field_Width; // ancho del campo
	UPROPERTY(EditAnywhere)
		float Field_Height; // altura del campo

	// propiedad velocidad maxima de la nave
	UPROPERTY(EditAnywhere)
		float MaxVelocity;


	// variables tipo vector para la nave 
	FVector Current_Location; // para la ubicacion actual
	FVector New_Location; // para la nueva ubicacion

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

	// implementando funciones inline a la clase padre
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMesh; }
	FORCEINLINE class UParticleSystemComponent* GetShipParticleComponent() const { return ShipParticle; }
	FORCEINLINE class UAudioComponent* GetDeatExplosion() const { return DeathExplosionSound; }
};
