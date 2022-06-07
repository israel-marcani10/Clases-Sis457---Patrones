// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyShipWithPattern.h"

AEnemyShipWithPattern::AEnemyShipWithPattern()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyShipWithPattern::CharacteristicsEnemyShip()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *DefenseSystem));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *AttackSystem));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *DisplacementSystem));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *CamouflageSystem));
}

void AEnemyShipWithPattern::BeginPlay()
{
	Super::BeginPlay();

}

void AEnemyShipWithPattern::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MaxVelocity = 18.f;

	const FVector MoveDirection = FVector(-1.0f, 0.f, 0.0f);
	const FVector Movement = MoveDirection * MaxVelocity * DeltaTime;

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(180.0f, 0.0f, 180.0f);

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	if (this->GetActorLocation().X < -Field_Width) {
		this->Destroy();
	}
}
