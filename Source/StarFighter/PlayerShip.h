// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "InventoryComponent.h"
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

	// propiedad para saber la puntuacion del jugador
	UPROPERTY(BlueprintReadOnly)
		float PlayerScore;


	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	// variable para saber que tan rapido dispara el arma
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;
	// sonido del disparo
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
		class USoundBase* FireSound;
	
	// Nombres estáticos para enlaces de ejes y disparo
	static const FName MoveHorizontalBinding;
	static const FName MoveVerticalBinding;
	static const FName FireBinding1;
	static const FName FireBinding2;

	// metodos para el disparo de las municiones diferentes
	void Fire1();
	void Fire2();
	void FireWeapon1(FVector Fireirection);
	void FireWeapon2(FVector Fireirectio);
	void ShotTimerExpired(); // manejador del temporizador del disparo

	// metodos para el movimiento de la nave jugador
	void MoveHorizontal(float AxisValue);
	void MoveVertical(float AxisValue);

	

	//Inventario
	UPROPERTY()
		UInventoryComponent* ShipInventory;

	UFUNCTION()
		void TakeItem(AMyCapsule* InventoryItem);

	UFUNCTION()
		void DropItem();

	UFUNCTION()
		virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved,
			FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;


protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:

	// bandera para controlar los disparos
	uint32 bCanFire : 1;

	// Variable para una gestión eficiente del temporizador ShotTimerExpired
	FTimerHandle TimerHandle_ShotTimerExpired; 

};
