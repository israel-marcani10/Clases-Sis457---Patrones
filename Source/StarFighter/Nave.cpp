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
	//CreateProjectile = CreateDefaultSubobject<USceneComponent>(TEXT("Create Projectile"));
	ShipCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Ship Collision"));
	ShipExplosion = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ship Explosion"));
	DeathExplosionSound = CreateDefaultSubobject<UAudioComponent>(TEXT("DeadtExplosionSound"));

	// atachando las propiedades al componente ruta
	ShipMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipParticle->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//CreateProjectile->SetupAttachment(RootComponent);
	ShipCollision->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ShipExplosion->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	DeathExplosionSound->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();

	ShipExplosion->Deactivate(); // explision desactivado
	DeathExplosionSound->Deactivate(); // desactivamos el sonido de explosion al iniciar
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

