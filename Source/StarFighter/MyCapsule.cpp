// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCapsule.h"

// Constructor
AMyCapsule::AMyCapsule()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapsuleMesh"));

}

// Called when the game starts or when spawned
void AMyCapsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector MoveDirection = FVector(0.f, 1.f, 0.f);
	const FVector Movement = MoveDirection * 20.f * DeltaTime;

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}
		
	if (this->GetActorLocation().Y > 390.f) {
		this->Destroy();
	}
}

// Called to bind functionality to input
void AMyCapsule::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCapsule::Generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Capsula Generada")));
}
