// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCapsule.h"
#include "UObject/ConstructorHelpers.h"
#include "time.h"

// Constructor
AMyCapsule::AMyCapsule()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCapsule(TEXT("StaticMesh'/Game/Meshes/defaultpickup.defaultpickup'"));
	CapsuleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapsuleMesh"));
	CapsuleMesh->SetStaticMesh(MeshCapsule.Object);

}

// Called when the game starts or when spawned
void AMyCapsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Metodo para comer o recoger capsulas
void AMyCapsule::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AMyCapsule::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}

// Called every frame
void AMyCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	srand(time(NULL));
	MovementX = rand() % 15 - 5;
	VelocidadCapsula = 20.f;

	if (aux) {
		if (this->GetActorLocation().X < 700.f) {
			MoveDirection = FVector(MovementX, 1.f, 0.f);
			Movement = MoveDirection * VelocidadCapsula * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(0.0f, 0.0f, 0.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().X > 700.f) { aux = false; }
		}
	}
	else {
		if (this->GetActorLocation().X > -700.f) {
			MoveDirection = FVector(-MovementX, 1.f, 0.f);
			Movement = MoveDirection * VelocidadCapsula * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(0.0f, 0.0f, 0.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().X < -700.f) { aux = true; }
		}
	}

	if (this->GetActorLocation().Y > 400.f) {
		this->Destroy();
	}
}

// Called to bind functionality to input
void AMyCapsule::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}