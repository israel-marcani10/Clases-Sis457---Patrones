// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Bullet.h"
#include "Lightning.h"
#include "Missile.h"
#include "Bomb.h"
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

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/SFX/laser.laser'"));
	FireSound = FireAudio.Object;

	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = false;

	Ammunition = 0.0f;

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

	// llamando a mi funcion para sobreponerse mi nave jugador
	OnActorBeginOverlap.AddDynamic(this, &APlayerShip::OnBeginOverlap);
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
	
	const float AmmunitionValue1 = GetInputAxisValue(FireBinding1);
	const float AmmunitionValue2 = GetInputAxisValue(FireBinding2);
	const float AmmunitionValue3 = GetInputAxisValue(FireBinding3);
	const float AmmunitionValue4 = GetInputAxisValue(FireBinding4);

	if (AmmunitionValue1 != 0.0 || AmmunitionValue2 != 0.0 || AmmunitionValue3 != 0.0 || AmmunitionValue4 != 0.0) {
		if (AmmunitionValue1 != Ammunition)
			Ammunition = AmmunitionValue1;
		if (AmmunitionValue2 != Ammunition)
			Ammunition = AmmunitionValue2;
		if (AmmunitionValue3 != Ammunition)
			Ammunition = AmmunitionValue3;
		if (AmmunitionValue4 != Ammunition)
			Ammunition = AmmunitionValue4;
	}
}

void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveHorizontalBinding, this, &APlayerShip::MoveHorizontal);
	PlayerInputComponent->BindAxis(MoveVerticalBinding, this, &APlayerShip::MoveVertical);
	InputComponent->BindAction(FireBinding1, IE_Pressed, this, &APlayerShip::Fire);
	InputComponent->BindAction(FireBinding2, IE_Pressed, this, &APlayerShip::Fire);
	InputComponent->BindAction(FireBinding3, IE_Pressed, this, &APlayerShip::Fire);
	InputComponent->BindAction(FireBinding4, IE_Pressed, this, &APlayerShip::Fire);
}

void APlayerShip::MoveHorizontal(float AxisValue)
{
	Current_X_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::MoveVertical(float AxisValue)
{
	Current_Y_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::Fire()
{
	bCanFire = true;

	UE_LOG(LogTemp, Warning, TEXT("FireForwardValue: %f FireRightValue: %f"));
	const FVector FireDirection = FVector(1.0, 0.0, 0.f).GetClampedToMaxSize(1.0f);
	
	FireWeapon(FireDirection);
}

void APlayerShip::FireWeapon(FVector FireDirection)
{
	if (bCanFire == true) {
		const FRotator FireRotation = FireDirection.Rotation();
		// Spawn projectile at an offset from this pawn
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			// spawn the projectile
			World->SpawnActor<ABullet>(SpawnLocation, FireRotation);
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

void APlayerShip::OnBeginOverlap(AActor* PlayerActor, AActor* OtherActor)
{
}





