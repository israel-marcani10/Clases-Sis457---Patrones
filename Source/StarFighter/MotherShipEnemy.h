// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MotherShipEnemy.generated.h"

UCLASS()
class STARFIGHTER_API AMotherShipEnemy : public APawn
{
	GENERATED_BODY()

private:
	// Constructor privado para evitar instancias.
	AMotherShipEnemy();

public:
	UPROPERTY(EditAnywhere, Category = "Nave Nodriza")
		class UStaticMeshComponent* MotherShipMesh;

	// variables para las balas de la nave nodriza
	float ShootTime;
	float TimeToSpawnShoot;
	FVector DistanceShoot1;
	FVector DistanceShoot2;
	FVector DistanceShoot3;
	FVector DistanceShoot4;
	FVector DistanceShoot5;

	// propiedades para el movimiento de la nave nodriza
	float MaxVelocity;
	float MovementY;
	bool aux = true;
	FVector MoveDirection;
	FVector Movement;
	FRotator NewRotation;

	// campo en donde la nave nodriza puede moverse
	float Field_Height;
	float Field_Width;

public:
	//AMotherShipEnemy* GetInstance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
