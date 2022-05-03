// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABullet::ABullet()
{
	// creando la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Bullet.Bullet'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// cambiando la velocidad de bala
	ProjectileMovement->InitialSpeed = 2000.0f;
	ProjectileMovement->MaxSpeed = 2000.0f;

	// tiempo e vida de bala
	InitialLifeSpan = 5.0f;
}
