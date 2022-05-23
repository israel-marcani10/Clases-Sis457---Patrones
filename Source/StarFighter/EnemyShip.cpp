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

	MaxVelocity = 50.f;

	GunOffset = FVector(90.f, 0.f, 0.f);
}

// metodo para la destruccion de la nave aerea enemiga
void AEnemyShip::ExplodeAndDestroy()
{
	if (ExplosionParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle, GetActorTransform());
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
	MaxVelocity = 50;

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


	ShootCoolDown += DeltaTime;
	if (ShootCoolDown >= MaxShootCoolDown)
	{
		ShootCoolDown = 0.0f;
		const FVector FireDirection = FVector(-1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();

		FVector Location = BulletSpawnPoint->GetComponentLocation();
		FRotator Rotation = BulletSpawnPoint->GetComponentRotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// generando el proyectil
			World->SpawnActor<ABulletEnemy>(SpawnLocation, FireRotation);
		}
	}
}