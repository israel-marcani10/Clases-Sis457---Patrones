// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
AProyectil::AProyectil()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemy.BulletEnemy'"));
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// creando el mesh del proyectil
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	RootComponent = ProjectileMesh;

	// Controlando el movimiento del proyectil
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 0.f; // velocidad por defecto
	ProjectileMovement->MaxSpeed = 0.f; // max velocidad por defecto
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Muere después de 3 segundos por defecto
	InitialLifeSpan = 3.f;
}

void AProyectil::BeginPlay()
{
	Super::BeginPlay();
}

void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

