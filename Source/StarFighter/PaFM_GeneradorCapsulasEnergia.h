// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaFM_GeneradorCapsulas.h"
//#include "PaFM_CapsulaEnergia.h"
#include "PaFM_GeneradorCapsulasEnergia.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API APaFM_GeneradorCapsulasEnergia : public APaFM_GeneradorCapsulas
{
	GENERATED_BODY()
	
public:
	virtual bool FabricarCapsula(FString NombreTipoCapsula) override;

	UPROPERTY(EditAnywhere, Category = "Tipo Capsulas")
		TSubclassOf<AMyCapsule> CapsulaEnergia1;
};
