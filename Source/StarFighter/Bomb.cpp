// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABomb::ABomb()
{
	// creando la malla de bomba
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/bomb.Bomb'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// modificando velocidad de bomba
	ProjectileMovement->InitialSpeed = 500.0f;
	ProjectileMovement->MaxSpeed = 500.0f;
	
	// tiempo de vidad de bomba
	InitialLifeSpan = 10.0f;
}


