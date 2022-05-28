// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy2.h"
#include "BulletEnemy.h"

AEnemy2::AEnemy2():Super()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DistanceShoot = FVector(65.f, 0.f, 0.f);
	TimeToSpawnShoot = 4.5f;
	ShootTime = 0;

	ContadorBalas = 0;
	Tiempo = 0;

	ValueIf = true;
}

void AEnemy2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShootTime += DeltaTime;
	Tiempo += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation = MoveDirectionBullet.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(DistanceShoot);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<ABulletEnemy>(SpawnLocation, FireRotation);
			ContadorBalas += 1;
		}
	}

	if (Tiempo >= 60.f && ValueIf == true) {
		//system("clc");
		FString Mensaje = FString::Printf(TEXT("Balas NEnemy2: %d"), ContadorBalas);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Mensaje);
		ValueIf = false;
	}
}
