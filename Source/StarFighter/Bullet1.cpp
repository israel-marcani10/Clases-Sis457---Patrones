// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet1.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Enemy1.h"
#include "Enemy2.h"

ABullet1::ABullet1()
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
	InitialLifeSpan = 3.0f;
}

void ABullet1::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	UE_LOG(LogTemp, Warning, TEXT("collect with %s"), *OtherActor->GetFName().ToString());
	AEnemyShip* Ememy = Cast<AEnemyShip>(OtherActor);
	if (Ememy)
	{
		Ememy->ExplodeAndDestroy();
		this->Destroy();
	}
}
