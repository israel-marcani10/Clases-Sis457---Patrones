// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_CapsulaArma1.h"

APaFM_CapsulaArma1::APaFM_CapsulaArma1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Arma1.Arma1'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);
	// nombre de la capsula
	NameCapsule = "Arma1";
}
