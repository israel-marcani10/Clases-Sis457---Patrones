// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_GeneradorCapsulas.h"
#include "PaFM_CapsulaEnergia.h"

// Sets default values
APaFM_GeneradorCapsulas::APaFM_GeneradorCapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaFM_GeneradorCapsulas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaFM_GeneradorCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APaFM_GeneradorCapsulas::ConstruirCapsula(FString TipoCapsula)
{
	bool Value = FabricarCapsula(TipoCapsula);
	if (Value == true)
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Se genero capsula.")));
	else
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("NO se genero capsula.")));

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Fabricando capsula: %s"), *capsula->GetNombre()));
	//capsula->Generar();
}
