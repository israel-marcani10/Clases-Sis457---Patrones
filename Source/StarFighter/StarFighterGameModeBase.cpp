// Copyright Epic Games, Inc. All Rights Reserved

#include "StarFighterGameModeBase.h"
#include "PlayerShip.h"
#include "EnemyShipWithPattern.h"
#include "PatternEnemyShip1.h"
#include "PaFM_GeneradorCapsulasArmas.h"
#include "PaFM_GeneradorCapsulasEnergia.h"
#include "PaAda_FoodAdapter.h"

AMotherShipEnemy* AStarFighterGameModeBase::Instance = nullptr;

AStarFighterGameModeBase::AStarFighterGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	// el tiempo para que aparezca la nave nodriza
	TiempoNodriza = 15.f;

	// inicializando variables FM
	InicioSpawn = 0.f;
	TopSpawn = 3.f;

	// patron adapter
	TiempoFood = 0.f;
}

AMotherShipEnemy* AStarFighterGameModeBase::GetInstance()
{
	if (Instance == nullptr)
	{
		const FVector Location = FVector(600.f, 0.f, 0.f);
		const FRotator Rotation = FRotator(0.f, 0.f, 180.f);
		Instance = GetWorld()->SpawnActor<AMotherShipEnemy>(MotherShip, Location, Rotation);
	}
	return Instance;
}

void AStarFighterGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	/*
	auto NaveNuevaAerea = SpawnNave<AAirEnemy1>();
	auto NaveNuevaTerreste = SpawnNave<ALandEnemy1>();
	auto NaveNuevaAquativa = SpawnNave<AAquaticEnemy1>();
	*/
	
	// PATRON BUILDER
	// implementacion el patron builder para construir naves enemigas
	const FVector Location = FVector(400.f, 0.f, 0.f);
	const FRotator Rotation = FRotator(180.f, 0.f, 180.f);
	
	PatternEnemyShip1 = GetWorld()->SpawnActor<APatternEnemyShip1>(EnemyShip1, Location, Rotation);
	PatternEnemyShipDirector = GetWorld()->SpawnActor<APatternEnemyShipDirector>(APatternEnemyShipDirector::StaticClass());

	PatternEnemyShipDirector->setNaveEnemigabuilder(PatternEnemyShip1);
	PatternEnemyShipDirector->construirNaveEnemiga();

	AEnemyShipWithPattern* NaveEnemiga = PatternEnemyShipDirector->getNaveEnemiga();
	NaveEnemiga->CharacteristicsEnemyShip();

	// Patron Adapter
	APaAda_FoodAdapter* FoodAdapter = GetWorld()->SpawnActor<APaAda_FoodAdapter>(APaAda_FoodAdapter::StaticClass());
	SetCrearFood(FoodAdapter);
}

void AStarFighterGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// PATRON SINGLETON
	// nave nodriza despues de 15seg
	TiempoNodriza -= DeltaTime;
	if (TiempoNodriza <= 0.f)
		AMotherShipEnemy* ob1 = AStarFighterGameModeBase::GetInstance();
		//AMotherShipEnemy* ob2 = new AMotherShipEnemy();
	
	// PATRON FACTORY METHOD
	// creacion de capsulas con el patron factory method
	InicioSpawn += DeltaTime;
	if (InicioSpawn >= TopSpawn)
	{
		InicioSpawn = 0.f;
		int ProbalidadAparicion = FMath::RandRange(0, 25);
		APaFM_GeneradorCapsulas* GeneradorCapsulas;
		
		if (ProbalidadAparicion <= 25.f) {
			GeneradorCapsulas = GetWorld()->SpawnActor<APaFM_GeneradorCapsulasEnergia>(APaFM_GeneradorCapsulasEnergia::StaticClass());
			GeneradorCapsulas->ConstruirCapsula("Energia1");
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Capsula Creada")));
		}
		else if (ProbalidadAparicion > 25.f && ProbalidadAparicion <= 50.f) {
			GeneradorCapsulas = GetWorld()->SpawnActor<APaFM_GeneradorCapsulasEnergia>(APaFM_GeneradorCapsulasEnergia::StaticClass());
			GeneradorCapsulas->ConstruirCapsula("Energia1");
		}
		else if (ProbalidadAparicion > 50.f && ProbalidadAparicion <= 75.f) {
			GeneradorCapsulas = GetWorld()->SpawnActor<APaFM_GeneradorCapsulasEnergia>(APaFM_GeneradorCapsulasEnergia::StaticClass());
			GeneradorCapsulas->ConstruirCapsula("Vida1");
		}
		else if (ProbalidadAparicion > 75.f && ProbalidadAparicion <=100.f) {
			GeneradorCapsulas = GetWorld()->SpawnActor<APaFM_GeneradorCapsulasArmas>(APaFM_GeneradorCapsulasArmas::StaticClass());
			GeneradorCapsulas->ConstruirCapsula("Escudo1");
		}
	}

	// patron adapter
	TiempoFood += DeltaTime;
	if (TiempoFood >=5.f)
	{
		TiempoFood = 0.f;
		Crear();
	}
}

void AStarFighterGameModeBase::SetCrearFood(AActor* CrearFoodObj)
{
	CreateFood = Cast<IPaAda_CreateFood>(CrearFoodObj);
	if (!CreateFood) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("¡Cast inválido! Consulte Registro de salida para obtener más detalles."));
		UE_LOG(LogTemp, Error, TEXT("SetCreateFood(): ¡El Actor no es un IPaAda_CreateFood! ¿Estás seguro de que el Actor implementa esa interfaz?"));
	}
}

void AStarFighterGameModeBase::Crear()
{
	if (!CreateFood) {
		UE_LOG(LogTemp, Error, TEXT("Crear(): CreateFood es NULL, asegúrese de que esté inicializado."));
		return;
	}
	CreateFood->Crear();
}
