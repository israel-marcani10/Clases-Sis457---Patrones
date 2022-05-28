// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletEnemy.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PlayerShip.h"

ABulletEnemy::ABulletEnemy()
{
	// creando la malla de bomba
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/BulletEnemy.BulletEnemy'"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// modificando velocidad de bomba
	ProjectileMovement->InitialSpeed = 500.0f;
	ProjectileMovement->MaxSpeed = 500.0f;
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity
	

	// tiempo de vida de la bala enemiga
	InitialLifeSpan = 3.0f;
}

void ABulletEnemy::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	APlayerShip* Player = Cast<APlayerShip>(OtherActor);
	if (Player)
	{
		Player->ExplodeAndDestroy();
		this->Destroy();
	}
}
