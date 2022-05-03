// Fill out your copyright notice in the Description page of Project Settings.


#include "Missile.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AMissile::AMissile()
{
	// creando la malla de misil
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Missile.Missile'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// modificando la velocidad de misil
	ProjectileMovement->InitialSpeed = 1500.0f;
	ProjectileMovement->MaxSpeed = 1500.0f;

	// tiempo de vida de misil
	InitialLifeSpan = 6.0f;
}

