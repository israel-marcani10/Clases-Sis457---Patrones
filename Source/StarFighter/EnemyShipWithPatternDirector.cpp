// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyShipWithPatternDirector.h"
#include "EnemyShipWithPatternBuilder.h"
#include "EnemyShipWithPattern.h"

// Sets default values
AEnemyShipWithPatternDirector::AEnemyShipWithPatternDirector()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyShipWithPatternDirector::BeginPlay()
{
	Super::BeginPlay();
	
	EnemyShipPattern = GetWorld()->SpawnActor<AEnemyShipWithPattern>(AEnemyShipWithPattern::StaticClass());
	EnemyShipPattern->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AEnemyShipWithPatternDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyShipWithPatternDirector::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyShipWithPatternDirector::buildDefenseSystem()
{
	if (!EnemyShipPattern) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	EnemyShipPattern->setDefenseSystem("Sistema de defensa del enemigo ACTIVADO!!!");
}

void AEnemyShipWithPatternDirector::buildAttackSystem()
{
	if (!EnemyShipPattern) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	EnemyShipPattern->setAttackSystem("Sistema de ataque del enemigo ACTIVADO!!!");
}

void AEnemyShipWithPatternDirector::buildDisplacementSystem()
{
	if (!EnemyShipPattern) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	EnemyShipPattern->setDisplacementSystem("Sistema de desplazamiento solo en eje horizontal.!");
}

void AEnemyShipWithPatternDirector::buildCamouflageSystem()
{
	if (!EnemyShipPattern) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	EnemyShipPattern->setCamouflageSystem("Sistema de camuflaje del enemigo ACTIVADO!!!");
}

AEnemyShipWithPattern* AEnemyShipWithPatternDirector::getEnemyShipPattern()
{
	return EnemyShipPattern;
}

