// Fill out your copyright notice in the Description page of Project Settings.

#include "PaAda_FoodAdapter.h"
#include "PaAdaGeneradorFood.h"

// Sets default values
APaAda_FoodAdapter::APaAda_FoodAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaAda_FoodAdapter::BeginPlay()
{
	Super::BeginPlay();
	
	FoodView = GetWorld()->SpawnActor<APaAdaGeneradorFood>(APaAdaGeneradorFood::StaticClass());
}

// Called every frame
void APaAda_FoodAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaAda_FoodAdapter::Crear()
{
	if (!FoodView) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): FoodView es NULL, asegúrese de que esté inicializado."));
		return;
	}
	FoodView->GenerarFood();
}

