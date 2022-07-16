// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Pa_OAcciones.h"
#include "Pa_OSubscriber.h"
#include "Pa_OEnemigo02.generated.h"

class APlayerShip;

UCLASS()
class STARFIGHTER_API APa_OEnemigo02 : public APawn, public IPa_OSubscriber, public IPa_OAcciones
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APa_OEnemigo02();

	// mesh de la nave enemiga
	UPROPERTY(EditAnywhere, Category = "Nave Enemiga")
		UStaticMeshComponent* ShipMeshEnemy; // la malla o cascara

	float MovementY;
	float MaxVelocity;
	FVector DistanceShoot1;
	FVector DistanceShoot2;
	float TimeToSpawnShoot;
	float ShootTime;
	FString AccionesGlobal;

private:
	//La Torre del Reloj de este Suscriptor
	UPROPERTY()
		APlayerShip* TorreDeControl;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Llamado cuando se destruye este Suscriptor, lo cancelará de la Torre del Reloj
	virtual void Destroyed() override;

	//Llamado cuando el Plublisher cambió su estado, ejecutará esta rutina de Suscriptor
	virtual void Update(class APlayerShip* Publisher) override;

	//Ejecutar esta rutina de Suscriptor
	virtual void Acciones();

	//Establecer la torre del reloj de este suscriptor
	void setTorreControl(APlayerShip* MiTorreControl);
};
