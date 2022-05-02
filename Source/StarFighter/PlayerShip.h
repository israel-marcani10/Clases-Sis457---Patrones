// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "Cola.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API APlayerShip : public ANave
{
	GENERATED_BODY()

public:
	APlayerShip();

	// propiedades propias de la nave jugador
	UPROPERTY(BlueprintReadOnly)
		float Max_Health;  // salud maxima
	UPROPERTY(BlueprintReadOnly)
		float Current_Health; // salud actual
	UPROPERTY(BlueprintReadOnly)
		float Max_Armor; // armadura maxima
	UPROPERTY(BlueprintReadOnly)
		float Current_Armor; // armadura actual

	// tamaño del campo de juego
	UPROPERTY(EditAnywhere)
		float Field_Width; // ancho del campo
	UPROPERTY(EditAnywhere)
		float Field_Height; // altura del campo

	// propiedad velocidad maxima de la nave jugador
	UPROPERTY(EditAnywhere)
		float MaxVelocity;

	// metodos para el movimiento de la nave jugador
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);

	// propiedad para saber la puntuacion del jugador
	UPROPERTY(BlueprintReadOnly)
		float PlayerScore;

	UFUNCTION()
		void OnBeginOverlap(AActor* PlayerActor, AActor* OtherActor);

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
