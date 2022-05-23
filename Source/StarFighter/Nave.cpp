// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "Components/StaticMeshComponent.h"

// Constructor
ANave::ANave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Llamano al componente ruta
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// creando las propiedades
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	ShipParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ship Particle"));
	ShipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Ship Collision"));
	ShipExplosion = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ship Explosion"));
	DeathExplosionSound = CreateDefaultSubobject<UAudioComponent>(TEXT("DeadtExplosionSound"));
	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPoint"));
	

	// atachando las propiedades al componente ruta
	ShipMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipParticle->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipExplosion->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	DeathExplosionSound->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	BulletSpawnPoint->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	Field_Width = 700.f;
	Field_Height = 400.f;
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();

	// tomamos la ubicacion actual de la nave jugador
	Current_Location = this->GetActorLocation();

	ShipExplosion->Deactivate(); // explosion desactivado
	DeathExplosionSound->Deactivate(); // desactivamos el sonido de explosion al iniciar
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// limitando el campo de juego
	if (this->GetActorLocation().X > Field_Width)
		Current_Location = FVector(Field_Width - 1, Current_Location.Y, Current_Location.Z);
	if (this->GetActorLocation().X < -Field_Width)
		Current_Location = FVector(-Field_Width + 1, Current_Location.Y, Current_Location.Z);
	if (this->GetActorLocation().Y > Field_Height)
		Current_Location = FVector(Current_Location.X, Field_Height - 1, Current_Location.Z);
	if (this->GetActorLocation().Y < -Field_Height)
		Current_Location = FVector(Current_Location.X, -Field_Height + 1, Current_Location.Z);
}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

