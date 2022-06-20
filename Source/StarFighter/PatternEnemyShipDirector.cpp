// Fill out your copyright notice in the Description page of Project Settings.

#include "PatternEnemyShipDirector.h"

// Sets default values
APatternEnemyShipDirector::APatternEnemyShipDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APatternEnemyShipDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APatternEnemyShipDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APatternEnemyShipDirector::construirNaveEnemiga()
{
	if (!EnemyShipBuilder) {
		UE_LOG(LogTemp, Error, TEXT("construirNaveEnemiga(): NaveEnemigaBuilder is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	EnemyShipBuilder->buildMeshShipEnemy();
	EnemyShipBuilder->buildVelocityShip();
	EnemyShipBuilder->buildBulletSpawnPoint();
	EnemyShipBuilder->buildDefenseSystem();
	EnemyShipBuilder->buildDisplacementSystem();
}

void APatternEnemyShipDirector::setNaveEnemigabuilder(AActor* Builder)
{
	EnemyShipBuilder = Cast<IEnemyShipWithPatternBuilder>(Builder);
	if (!EnemyShipBuilder) {
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("Invalido"));
		UE_LOG(LogTemp, Error, TEXT("construirNaveEnemiga(): NaveEnemigaBuilder is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Red, TEXT("Se creo la nave correctamente..."));
}

AEnemyShipWithPattern* APatternEnemyShipDirector::getNaveEnemiga()
{
	if (EnemyShipBuilder) {
		return EnemyShipBuilder->getEnemyShipPattern();
	}
	UE_LOG(LogTemp, Error, TEXT("getNaveEnemiga(): Retorna NULL."));
	return nullptr;
}

