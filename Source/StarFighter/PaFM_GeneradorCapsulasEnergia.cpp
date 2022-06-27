// Fill out your copyright notice in the Description page of Project Settings.

#include "PaFM_GeneradorCapsulasEnergia.h"
#include "PaFM_CapsulaEnergia.h"
#include "PaFM_CApsulaVida1.h"

bool APaFM_GeneradorCapsulasEnergia::FabricarCapsula(FString NombreTipoCapsula)
{
	float LuagarAparicion = FMath::RandRange(-300, 600);
	const FVector SpawnLocation = FVector(LuagarAparicion, -360.f, 0.f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (NombreTipoCapsula.Equals("Energia1")) {
		
		GetWorld()->SpawnActor<APaFM_CapsulaEnergia>(SpawnLocation, Rotation);
		return true;
	}

	if (NombreTipoCapsula.Equals("Vida1")) {
		GetWorld()->SpawnActor<APaFM_CApsulaVida1>(SpawnLocation, Rotation);
		return true;
	}
	
	return false;
}
