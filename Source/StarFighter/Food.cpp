// Fill out your copyright notice in the Description page of Project Settings.


#include "Food.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AFood::AFood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MeshFood = CreateDefaultSubobject<UStaticMeshComponent>("Food Mesh");
    RootComponent = MeshFood;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> FoodAsset(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
    if (FoodAsset.Succeeded())
    {
        MeshFood->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        MeshFood->SetStaticMesh(FoodAsset.Object);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("can not load food asset from file"));
    }
}

// Called when the game starts or when spawned
void AFood::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}