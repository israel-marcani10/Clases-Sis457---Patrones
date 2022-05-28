// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyShip.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BulletEnemy.h"
#include "time.h"

AEnemyShip::AEnemyShip()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxVelocity = 10.f;
}

// metodo para la destruccion de la nave aerea enemiga
void AEnemyShip::ExplodeAndDestroy()
{
	if (ShipExplosionEnemy)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionEnemy, GetActorTransform());
	}

	Destroy();
}

void AEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	life = 10.0f; // inicializando vida
}

void AEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	srand(time(NULL));
	MovementY = rand() % 5 - 1;
	MaxVelocity = 10.f;

	if (aux) {
		if (this->GetActorLocation().Y < Field_Height) {
			MoveDirection = FVector(-1.0f, MovementY, 0.0f);
			Movement = MoveDirection * MaxVelocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y > Field_Height) { aux = false; }
		}
	}
	else {
		if (this->GetActorLocation().Y > -Field_Height) {
			MoveDirection = FVector(-1.0f, -MovementY, 0.0f);
			Movement = MoveDirection * MaxVelocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y < -Field_Height) { aux = true; }
		}
	}

	if (this->GetActorLocation().X < -Field_Width) {
		this->Destroy();
	}

}