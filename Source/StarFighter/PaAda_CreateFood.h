// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PaAda_CreateFood.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPaAda_CreateFood : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STARFIGHTER_API IPaAda_CreateFood
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Crear() = 0;
};
