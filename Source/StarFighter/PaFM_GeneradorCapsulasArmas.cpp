// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_GeneradorCapsulasArmas.h"

bool APaFM_GeneradorCapsulasArmas::FabricarCapsula(FString NombreTipoCapsula)
{
	if (NombreTipoCapsula.Equals("Arma1")) {
		GetWorld()->SpawnActor<AMyCapsule>(AMyCapsule::StaticClass());
		return true;
	}
	
	if (NombreTipoCapsula.Equals("Escudo1")) {
		GetWorld()->SpawnActor<AMyCapsule>(AMyCapsule::StaticClass());
		return true;
	}

	return false;
}
