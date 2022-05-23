// Fill out your copyright notice in the Description page of Project Settings.

#include "CreateCapsules.h"
#include "Components/BoxComponent.h"

// Sets default values
ACreateCapsules::ACreateCapsules()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;
}

// Called every frame
void ACreateCapsules::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (SpawnCapsules.Num() <= 0) {
        return;
    }
    const int Index = FMath::RandRange(0, SpawnCapsules.Num() - 1);

    SpawnCoolDown += DeltaTime;
    if (SpawnCoolDown >= NextSpawnCoolDown)
    {
        FVector Location = WhereToSpawn->GetComponentLocation();
        float X = WhereToSpawn->GetScaledBoxExtent().X;
        Location.X = FMath::RandRange(Location.X - X, Location.X + X);
        UE_LOG(LogTemp, Warning, TEXT("Should Spawn at: %s"), *Location.ToString());
        SpawnCoolDown = 0.0f;
        FRotator Rotation = GetActorRotation();
        Rotation.Pitch = 0.0;
        GetWorld()->SpawnActor(SpawnCapsules[Index], &Location, &Rotation);
    }
}

