// Fill out your copyright notice in the Description page of Project Settings.


#include "Lightning.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ALightning::ALightning()
{
	// creando la malla de rayo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Lightning.Lightning'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// modificando las velocidad de rayo
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
}

