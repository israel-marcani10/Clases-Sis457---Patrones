// Fill out your copyright notice in the Description page of Project Settings.


#include "Pa_OEnemigo02.h"
#include "PlayerShip.h"
#include "BulletEnemy.h"

// Sets default values
APa_OEnemigo02::APa_OEnemigo02()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipEnemyAsset(TEXT("StaticMesh'/Game/Meshes/EnemigoObserver2.EnemigoObserver2'"));
	ShipMeshEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerShipMesh"));
	ShipMeshEnemy->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshEnemy->SetStaticMesh(ShipEnemyAsset.Object);


	AccionesGlobal = "no";
	DistanceShoot1 = FVector(100.f, -20.f, 0.f);
	DistanceShoot2 = FVector(100.f, 20.f, 0.f);
	TimeToSpawnShoot = 2.f;
	ShootTime = 0;
}

// Called when the game starts or when spawned
void APa_OEnemigo02::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APa_OEnemigo02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!AccionesGlobal.Compare("Estatico"))
	{
		// jugador no se mueve
		const FVector MoveDirection = FVector(0.f, 0.f, 0.f);
		const FVector Movement = MoveDirection * 0.f * DeltaTime;;
		const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
	}

	if (!AccionesGlobal.Compare("Movimiento"))
	{
		// jugador se mueve pero no dispara
		srand(time(NULL));
		MovementY = rand() % 3 - 1;
		MaxVelocity = 30.f;

		const FVector MoveDirection = FVector(-1.f, MovementY, 0.f);
		const FVector Movement = MoveDirection * MaxVelocity * DeltaTime;

		if (Movement.SizeSquared() > 0.0f) {
			const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

			FHitResult Hit(1.0f);
			RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		}
	}

	if (!AccionesGlobal.Compare("Atacando"))
	{
		// jugador dispara
		srand(time(NULL));
		MovementY = rand() % 5 - 1;
		MaxVelocity = 30.f;

		const FVector MoveDirection = FVector(-1.f, MovementY, 0.f);
		const FVector Movement = MoveDirection * MaxVelocity * DeltaTime;

		if (Movement.SizeSquared() > 0.0f) {
			const FRotator NewRotation = FRotator(0.0f, 180.0f, 0.0f);

			FHitResult Hit(1.0f);
			RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);
		}

		ShootTime += DeltaTime;
		if (ShootTime >= TimeToSpawnShoot) {
			ShootTime = 0.0f;
			const FVector MoveDirectionBullet = FVector(-1.f, 0.f, 0.f);
			const FRotator FireRotation = MoveDirectionBullet.Rotation();
			const FVector SpawnLocation1 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot1);
			const FVector SpawnLocation2 = GetActorLocation() + FireRotation.RotateVector(DistanceShoot2);

			UWorld* const World = GetWorld();
			if (World != nullptr) {
				World->SpawnActor<ABulletEnemy>(SpawnLocation1, FireRotation);
				World->SpawnActor<ABulletEnemy>(SpawnLocation2, FireRotation);
			}
		}
	}
}

// Called to bind functionality to input
void APa_OEnemigo02::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APa_OEnemigo02::Destroyed()
{
	Super::Destroyed();

	//Log Error si su Clock Tower es NULL
	if (!TorreDeControl) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Darse de baja de la Torre del Reloj si se destruye
	TorreDeControl->UnSubscribe(this);
}

void APa_OEnemigo02::Update(APlayerShip* Publisher)
{
	// ejecutar tareas
	Acciones();
}

void APa_OEnemigo02::Acciones()
{
	//Log Error si su Clock Tower es NULL
	if (!TorreDeControl) {
		UE_LOG(LogTemp, Error, TEXT("Acciones(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Obtener la hora actual de la Torre del Reloj
	AccionesGlobal = TorreDeControl->GetTime();
}

void APa_OEnemigo02::setTorreControl(APlayerShip* MiTorreControl)
{
	//Error de registro si la torre del reloj aprobada es NULL
	if (!MiTorreControl) {
		UE_LOG(LogTemp, Error, TEXT("setTorreControl(): TorreDeControl is NULL, asegúrese de que esté inicializado."));
		return;
	}
	//Configura la torre del reloj y suscríbete a eso
	TorreDeControl = MiTorreControl;
	TorreDeControl->Subscribe(this);
}

