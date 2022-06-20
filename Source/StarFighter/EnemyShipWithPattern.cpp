// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyShipWithPattern.h"

AEnemyShipWithPattern::AEnemyShipWithPattern()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyShipWithPattern::CharacteristicsEnemyShip()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("Con velocidad de: %f"), VelocityShip));
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("%s"), *DefenseSystem));
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("%s"), *DisplacementSystem));
}
