// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_CApsulaVida1.h"

APaFM_CApsulaVida1::APaFM_CApsulaVida1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Vida1.Vida1'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	// nombre de la capsula
	NameCapsule = "Vida1";
}
