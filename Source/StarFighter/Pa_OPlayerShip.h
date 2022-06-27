// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pa_OPublisher.h"
#include "Pa_OPlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API APa_OPlayerShip : public APa_OPublisher
{
	GENERATED_BODY()
	
public:
	APa_OPlayerShip();
	
	UPROPERTY(EditAnywhere, Category = "Nave Jugador")
		UStaticMeshComponent* ShipMesh; // la malla o cascara
		// tamaño del campo de juego
	UPROPERTY(EditAnywhere)
		float Field_Width; // ancho del campo
	UPROPERTY(EditAnywhere)
		float Field_Height; // altura del campo
	// variables tipo vector para la nave 
	FVector Current_Location; // para la ubicacion actual
	FVector New_Location; // para la nueva ubicacion

	// velocidad actual en X y Y de la nave
	float Current_X_Velocity = 0.0f;
	float Current_Y_Velocity = 0.0f;
	// propiedad velocidad maxima de la nave
	UPROPERTY(EditAnywhere)
		float MaxVelocity;
	
	bool ValueMovement;
	float ValueShoot;

	// Nombres estáticos para enlaces de ejes y disparo
	static const FName MoveHorizontalBinding;
	static const FName MoveVerticalBinding;
	static const FName FireBinding1;

	// metodos para el movimiento de la nave jugador
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);

	FVector GunOffset;
	void FireShoot1();

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//La hora actual de esta Torre del Reloj
	FString Time;

public:
	//Llamado cuando la hora de esta Torre del Reloj ha cambiado
	void CambiarAccion();

	//Establecer la hora de esta Torre del Reloj
	void setCambiarAccion(FString miAccion);

	//Devuelve la hora de esta Torre del Reloj
	FORCEINLINE FString GetTime() { return Time; };
};
