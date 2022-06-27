// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Pa_OSubscriber.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPa_OSubscriber : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STARFIGHTER_API IPa_OSubscriber
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Funcion virtual pura del Suscriptor
	virtual void Update(class APa_OPublisher* Publisher) = 0;
};
