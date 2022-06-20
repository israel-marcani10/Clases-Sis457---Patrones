// Fill out your copyright notice in the Description page of Project Settings.


#include "MotherShipEnemy.h"
#include "BulletEnemy.h"
#include "time.h"

//AMotherShipEnemy* AMotherShipEnemy::Instance = nullptr;

// Sets default values
AMotherShipEnemy::AMotherShipEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/MotherShipEnemy.MotherShipEnemy'"));
	// Crear el componente de malla
	MotherShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MotherShipMesh"));
	RootComponent = MotherShipMesh;
	MotherShipMesh->SetStaticMesh(ShipMesh.Object);

	// inicializando las propiedades para el disparo de la nave nodriza
	ShootTime = 0;
	TimeToSpawnShoot = 2.f;
	DistanceShoot1 = FVector(150.f, 0.f, 0.f);
	DistanceShoot2 = FVector(140.f, 20.f, 0.f);
	DistanceShoot3 = FVector(110.f, 100.f, 0.f);
	DistanceShoot4 = FVector(140.f, -20.f, 0.f);
	DistanceShoot5 = FVector(110.f, -100.f, 0.f);

	// inicializando la amplitud del campo de juego
	Field_Width = 700.f;
	Field_Height = 160.f;
}
 
 // Called when the game starts or when spawned
void AMotherShipEnemy::BeginPlay()
{
	Super::BeginPlay();
	//AMotherShipEnemy* NaveMother
}

// Called every frame
void AMotherShipEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ShootTime += DeltaTime;
	if (ShootTime >= TimeToSpawnShoot)
	{
		ShootTime = 0.0f;
		const FVector MoveDirectionBullet1 = FVector(-1.f, 0.f, 0.f);
		const FRotator FireRotation1 = MoveDirectionBullet1.Rotation();
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation1.RotateVector(DistanceShoot1);

		const FVector MoveDirectionBullet2 = FVector(-1.f, -0.18f, 0.f);
		const FRotator FireRotation2 = MoveDirectionBullet2.Rotation();
		const FVector SpawnLocation2 = GetActorLocation() + FireRotation2.RotateVector(DistanceShoot2);

		const FVector MoveDirectionBullet3 = FVector(-1.f, -0.25f, 0.f);
		const FRotator FireRotation3 = MoveDirectionBullet3.Rotation();
		const FVector SpawnLocation3 = GetActorLocation() + FireRotation3.RotateVector(DistanceShoot3);

		const FVector MoveDirectionBullet4 = FVector(-1.f, 0.18f, 0.f);
		const FRotator FireRotation4 = MoveDirectionBullet4.Rotation();
		const FVector SpawnLocation4 = GetActorLocation() + FireRotation4.RotateVector(DistanceShoot4);

		const FVector MoveDirectionBullet5 = FVector(-1.f, 0.25f, 0.f);
		const FRotator FireRotation5 = MoveDirectionBullet5.Rotation();
		const FVector SpawnLocation5 = GetActorLocation() + FireRotation5.RotateVector(DistanceShoot5);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<ABulletEnemy>(SpawnLocation1, FireRotation1);
			World->SpawnActor<ABulletEnemy>(SpawnLocation2, FireRotation2);
			World->SpawnActor<ABulletEnemy>(SpawnLocation3, FireRotation3);
			World->SpawnActor<ABulletEnemy>(SpawnLocation4, FireRotation4);
			World->SpawnActor<ABulletEnemy>(SpawnLocation5, FireRotation5);
		}
	}

	// para el movimiento de la nave nodriza
	srand(time(NULL));
	MovementY = rand() % 5 - 1;
	MaxVelocity = 10.f;

	if (aux) {
		if (this->GetActorLocation().Y < Field_Height) {
			MoveDirection = FVector(-1.0f, MovementY, 0.0f);
			Movement = MoveDirection * MaxVelocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y > Field_Height) { aux = false; }
		}
	}
	else {
		if (this->GetActorLocation().Y > -Field_Height) {
			MoveDirection = FVector(-1.0f, -MovementY, 0.0f);
			Movement = MoveDirection * MaxVelocity * DeltaTime;

			if (Movement.SizeSquared() > 0.0f) {
				NewRotation = FRotator(180.0f, 0.0f, 180.0f);

				FHitResult Hit(1.0f);
				RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
			}
			if (this->GetActorLocation().Y < -Field_Height) { aux = true; }
		}
	}

	if (this->GetActorLocation().X < -Field_Width) {
		this->Destroy();
	}
}

// Called to bind functionality to input
void AMotherShipEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

