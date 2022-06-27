// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaFM_GeneradorCapsulas.generated.h"

UCLASS()
class STARFIGHTER_API APaFM_GeneradorCapsulas : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APaFM_GeneradorCapsulas();

	void ConstruirCapsula(FString TipoCapsula);

	virtual bool FabricarCapsula(FString NombreTipoCapsula) PURE_VIRTUAL(APaFM_GeneradorCapsulas::FabricarCapsula, return false;);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
