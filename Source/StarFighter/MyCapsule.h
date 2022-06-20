// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyCapsule.generated.h"

UCLASS()
class STARFIGHTER_API AMyCapsule : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyCapsule();
	
	// Malla de la clase Mi capsula
	UPROPERTY(EditAnywhere, Category = "Componentes Capsula")
		class UStaticMeshComponent* CapsuleMesh;
	UPROPERTY(EditAnywhere, Category = "Componentes Capsula")
		FString NameCapsule;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Generar();
	//void Destruir();


	//virtual void PickUp();
	//virtual void PutDown(FTransform TargetLocation);
	FORCEINLINE FString GetNombre() const { return NameCapsule; }
	//FORCEINLINE void SetNombre(const FString _Nombre) { NameCapsule = _Nombre; }

};
