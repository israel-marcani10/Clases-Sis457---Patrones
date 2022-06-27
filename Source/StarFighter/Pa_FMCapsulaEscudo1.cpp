// Fill out your copyright notice in the Description page of Project Settings.


#include "Pa_FMCapsulaEscudo1.h"

APa_FMCapsulaEscudo1::APa_FMCapsulaEscudo1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Escudo1.Escudo1'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// nombre de la capsula
	NameCapsule = "Escudo1";
}
