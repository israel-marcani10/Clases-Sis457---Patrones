// Fill out your copyright notice in the Description page of Project Settings.


#include "PatternEnemyShip1.h"
#include "EnemyShipWithPatternBuilder.h"
#include "EnemyShipWithPattern.h"
#include "BulletEnemy.h"

// Sets default values
APatternEnemyShip1::APatternEnemyShip1()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshShipEnemy(TEXT("StaticMesh'/Game/Meshes/TwinStickUFO.TwinStickUFO'"));
	MeshShipE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshShip"));
	//CapsuleMesh->SetStaticMesh(MeshCapsule.Object);*/

	MeshShipE = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshShipEnemy"));
	BulletSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPoint"));
	BulletSpawnPoint->AttachToComponent(MeshShipE, FAttachmentTransformRules::KeepRelativeTransform);
	ShootTime = 0.0f;
	TimeToSpawnShoot = 2.f;
}

// Called when the game starts or when spawned
void APatternEnemyShip1::BeginPlay()
{
	Super::BeginPlay();

	PatternEnemyShip1 = GetWorld()->SpawnActor<AEnemyShipWithPattern>(AEnemyShipWithPattern::StaticClass());
	PatternEnemyShip1->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void APatternEnemyShip1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//MaxVelocity = 18.f;

	const FVector MoveDirection = FVector(-1.0f, 0.f, 0.0f);
	const FVector Movement = MoveDirection * 100.f * DeltaTime;

	if (Movement.SizeSquared() > 0.0f) {
		const FRotator NewRotation = FRotator(180.0f, 0.0f, 180.0f);

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	if (this->GetActorLocation().X < -700.f) {
		this->Destroy();
	}

	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
		//const FRotator FireRotation = MoveDirectionBullet.Rotation();
		//const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(DistanceShoot);

		const FVector SpawnLocation = BulletSpawnPoint->GetComponentLocation();
		const FRotator FireRotation = MoveDirectionBullet.Rotation();

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<ABulletEnemy>(SpawnLocation, FireRotation);
		}
	}
}

// Called to bind functionality to input
void APatternEnemyShip1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APatternEnemyShip1::buildMeshShipEnemy()
{
	if (!PatternEnemyShip1) {
		UE_LOG(LogTemp, Error, TEXT("buildMeshShipEnemy(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}

	PatternEnemyShip1->setMeshShipEnemy(MeshShipE);
}

void APatternEnemyShip1::buildVelocityShip()
{
	if (!PatternEnemyShip1) {
		UE_LOG(LogTemp, Error, TEXT("buildVelocityShip(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	const float velocity = 100.0f;
	PatternEnemyShip1->setVelocityShip(velocity);
}

void APatternEnemyShip1::buildBulletSpawnPoint()
{
	if (!PatternEnemyShip1) {
		UE_LOG(LogTemp, Error, TEXT("buildMeshProjectile(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	
	PatternEnemyShip1->setBulletSpawnPoint(BulletSpawnPoint);
}

void APatternEnemyShip1::buildDefenseSystem()
{
	if (!PatternEnemyShip1) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	PatternEnemyShip1->setDefenseSystem("Sistema de defensa del enemigo ACTIVADO!!!");
}

void APatternEnemyShip1::buildDisplacementSystem()
{
	if (!PatternEnemyShip1) {
		UE_LOG(LogTemp, Error, TEXT("BuildSistemaDefensa(): NaveEnemiga is NULL, asegurese de inicializar correctamente esta clase."));
		return;
	}
	PatternEnemyShip1->setDisplacementSystem("Sistema de desplazamiento solo en eje horizontal.!");
}

AEnemyShipWithPattern* APatternEnemyShip1::getEnemyShipPattern()
{
	return PatternEnemyShip1;
}

