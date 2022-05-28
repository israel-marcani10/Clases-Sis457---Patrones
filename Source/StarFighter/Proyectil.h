// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Proyectil.generated.h"


UCLASS()
class STARFIGHTER_API AProyectil : public AActor
{
	GENERATED_BODY()
	
public:
	AProyectil();

	// propiedades de proyectil
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		UStaticMeshComponent* ProjectileMesh; // malla

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		UProjectileMovementComponent* ProjectileMovement; // movimiento

	// implementando funciones inline 
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProjectileMesh; }
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
