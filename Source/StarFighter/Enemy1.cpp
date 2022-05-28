// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy1.h"
#include "BulletEnemy.h"
#include "Engine/Engine.h"

AEnemy1::AEnemy1()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DistanceShoot = FVector(210.f, 0.f, 0.f);
	TimeToSpawnShoot = 2.f;
	ShootTime = 0;

	ContadorBalas = 0;
	Tiempo = 0;

	ValueIf = true;
}

void AEnemy1::Tick(float DeltaTime)
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
	//round(Tiempo);
	if (Tiempo >= 60.f && ValueIf==true) {
		//system("clc");
		FString Mensaje = FString::Printf(TEXT("Balas NEnemy1: %d"), ContadorBalas);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Mensaje);
		ValueIf = false;
	}
}
