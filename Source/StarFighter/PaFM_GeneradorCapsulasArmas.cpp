// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_GeneradorCapsulasArmas.h"
#include "PaFM_CapsulaArma1.h"
#include "Pa_FMCapsulaEscudo1.h"

bool APaFM_GeneradorCapsulasArmas::FabricarCapsula(FString NombreTipoCapsula)
{
	float LuagarAparicion = FMath::RandRange(-300, 600);
	const FVector SpawnLocation = FVector(LuagarAparicion, -360.f, 0.f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	if (NombreTipoCapsula.Equals("Arma1")) {
		GetWorld()->SpawnActor<APaFM_CapsulaArma1>(SpawnLocation, Rotation);
		return true;
	}
	
	if (NombreTipoCapsula.Equals("Escudo1")) {
		GetWorld()->SpawnActor<APa_FMCapsulaEscudo1>(SpawnLocation, Rotation);
		return true;
	}

	return false;
}
