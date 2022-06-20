// Fill out your copyright notice in the Description page of Project Settings.


#include "PaAdaGeneradorFood.h"
#include "Food.h"
#include "PaAda_FoodAdapter.h"

// Sets default values
APaAdaGeneradorFood::APaAdaGeneradorFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APaAdaGeneradorFood::GenerarFood()
{
	float EjeX = FMath::RandRange(-350.f, 650.f);
	float EjeY = FMath::RandRange(-350.f, 350.f);
	const FVector Location = FVector(EjeX, EjeY, 0.f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);
	GetWorld()->SpawnActor<AFood>(Location, Rotation);
}

// Called when the game starts or when spawned
void APaAdaGeneradorFood::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APaAdaGeneradorFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
