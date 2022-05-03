// Fill out your copyright notice in the Description page of Project Settings.


#include "AirEnemy1.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AAirEnemy1::AAirEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Controlamos algunas de las propiedades del objeto
	MoveAirShip = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Move Air Ship"));
	MoveAirShip->InitialSpeed = 150.0f;
	MoveAirShip->MaxSpeed = 150.0f; 
	MoveAirShip->bRotationFollowsVelocity = true; 
	MoveAirShip->bShouldBounce = false;
	MoveAirShip->ProjectileGravityScale = 0.f; // No gravedad
}

// metodo para la destruccion de la nave aerea enemiga
void AAirEnemy1::destroyEnemyAirShip()
{
	if (ExplosionParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle, GetActorTransform());
	}

	Destroy();
}

void AAirEnemy1::BeginPlay()
{
	Super::BeginPlay();
	life = 10.0f; // inicializando vida
}

void AAirEnemy1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
