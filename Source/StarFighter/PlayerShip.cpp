// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Bullet.h"
#include "Lightning.h"
#include "Missile.h"
#include "Bomb.h"
#include "Cola.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"

const FName APlayerShip::MoveHorizontalBinding("MoveHorizontal");
const FName APlayerShip::MoveVerticalBinding("MoveVertical");
const FName APlayerShip::FireBinding1("Bullet");
const FName APlayerShip::FireBinding2("Lightning");
const FName APlayerShip::FireBinding3("Missile");
const FName APlayerShip::FireBinding4("Bomb");

APlayerShip::APlayerShip()
{
	// nave jugador posee automaticamente la camara al empezar el nivel
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Efecto del sonido
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/SFX/laser.laser'"));
	FireSound = FireAudio.Object;

	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f; // la velocidad del disparo
	bCanFire = false; // bandera si o no disparar

	// creando el objeto para meter a nuestra colita
	const FVector MoveDirection = FVector(1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = MoveDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// metiendo objetos de tipo misil a la cola
		ColaMissiles.Push(World->SpawnActor<AMissile>(SpawnLocation, FireRotation));
		ColaMissiles.Push(World->SpawnActor<AMissile>(SpawnLocation, FireRotation));
		ColaMissiles.Push(World->SpawnActor<AMissile>(SpawnLocation, FireRotation));
		ColaMissiles.Push(World->SpawnActor<AMissile>(SpawnLocation, FireRotation));
		ColaMissiles.Push(World->SpawnActor<AMissile>(SpawnLocation, FireRotation));
	}

}

void APlayerShip::BeginPlay()
{
	Super::BeginPlay();

	// tomamos la ubicacion actual de la nave jugador
	Current_Location = this->GetActorLocation();

	MaxVelocity = 300.0f; // velocidad maxima
	Max_Health = 100.0f; // salud maxima
	Current_Health = 100.0f; // salud actual
	Max_Armor = 100.0f; // armadura maxima
	Current_Armor = 100.0f; // armadura actual
}

void APlayerShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// condicion para hacer mover la nave jugador 
	if (Current_X_Velocity != 0.0f || Current_Y_Velocity != 0.0f) {
		New_Location = FVector(Current_Location.X + (Current_X_Velocity * DeltaTime),
			Current_Location.Y + (Current_Y_Velocity * DeltaTime), 0);

		this->SetActorLocation(New_Location);

		Current_Location = New_Location;
	}

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

void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// conectando con el unreal para el manejo de las teclas
	PlayerInputComponent->BindAxis(MoveHorizontalBinding, this, &APlayerShip::MoveHorizontal);
	PlayerInputComponent->BindAxis(MoveVerticalBinding, this, &APlayerShip::MoveVertical);
	InputComponent->BindAction(FireBinding1, IE_Pressed, this, &APlayerShip::Fire1);
	InputComponent->BindAction(FireBinding2, IE_Pressed, this, &APlayerShip::Fire2);
	InputComponent->BindAction(FireBinding3, IE_Pressed, this, &APlayerShip::Fire3);
	InputComponent->BindAction(FireBinding4, IE_Pressed, this, &APlayerShip::Fire4);
}

void APlayerShip::MoveHorizontal(float AxisValue)
{
	Current_X_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::MoveVertical(float AxisValue)
{
	Current_Y_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::Fire1()
{
	bCanFire = true;
	const FVector FireDirection = FVector(1.0, 0.0, 0.f).GetClampedToMaxSize(1.0f);

	FireWeapon1(FireDirection);
}
void APlayerShip::Fire2()
{
	bCanFire = true;
	const FVector FireDirection = FVector(1.0, 0.0, 0.f).GetClampedToMaxSize(1.0f);

	FireWeapon2(FireDirection);
}
void APlayerShip::Fire3()
{
	bCanFire = true;
	const FVector FireDirection = FVector(1.0, 0.0, 0.f).GetClampedToMaxSize(1.0f);

	FireWeapon3(FireDirection);
}
void APlayerShip::Fire4()
{
	bCanFire = true;
	const FVector FireDirection = FVector(1.0, 0.0, 0.f).GetClampedToMaxSize(1.0f);

	FireWeapon4(FireDirection);
}
void APlayerShip::FireWeapon1(FVector FireDirection)
{
	if (bCanFire == true) {
		const FRotator FireRotation = FireDirection.Rotation();
		// Spawn projectile at an offset from this pawn
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// generando el proyectil
			World->SpawnActor<ABullet>(SpawnLocation, FireRotation);
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);

		if (FireSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		
		bCanFire = false;
	}
}
void APlayerShip::FireWeapon2(FVector FireDirection)
{
	if (bCanFire == true) {
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// generando el proyectil
			World->SpawnActor<ALightning>(SpawnLocation, FireRotation);
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);

		if (FireSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

		bCanFire = false;
	}
}
void APlayerShip::FireWeapon3(FVector FireDirection)
{
	if (bCanFire == true) {
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// generando el proyectil
			World->SpawnActor<AMissile>(SpawnLocation, FireRotation);
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);

		if (FireSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

		bCanFire = false;
	}
}
void APlayerShip::FireWeapon4(FVector FireDirection)
{
	if (bCanFire == true) {
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// generando el proyectil
			World->SpawnActor<ABomb>(SpawnLocation, FireRotation);
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);

		if (FireSound != nullptr)
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());

		bCanFire = false;
	}
}

void APlayerShip::ShotTimerExpired()
{
	bCanFire = true;
}