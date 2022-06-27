// Fill out your copyright notice in the Description page of Project Settings.


#include "PaFM_CapsulaEnergia.h"

APaFM_CapsulaEnergia::APaFM_CapsulaEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AssetCapsula(TEXT("StaticMesh'/Game/Meshes/Energia1.Energia1'"));
	CapsuleMesh->SetStaticMesh(AssetCapsula.Object);

	//CapsuleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapsuleMesh"));
	NameCapsule = "Energia1";
}
