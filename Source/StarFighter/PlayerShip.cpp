// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"


APlayerShip::APlayerShip()
{
	// nave jugador posee automaticamente la camara al empezar el nivel
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

void APlayerShip::BeginPlay()
{
	Super::BeginPlay();

	// tomamos la ubicacion actual de la nave jugador
	Current_Location = this->GetActorLocation();
	Current_Rotation = this->GetActorRotation();

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

	// rotar la nave jugador al subir y bajar
	if (Current_Y_Velocity > 0.1f) {
		this->SetActorRotation(FRotator(Current_Rotation.Pitch + 45.0f, Current_Rotation.Yaw,
			Current_Rotation.Roll));
	}
	else if (Current_Y_Velocity < -0.1f) {
		this->SetActorRotation(FRotator(Current_Rotation.Pitch - 45.0f, Current_Rotation.Yaw,
			Current_Rotation.Roll));
	}
	else {
		this->SetActorRotation(FRotator(Current_Rotation));
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
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// conectando al unreal con estos dos metodos
	PlayerInputComponent->BindAxis(FName("MoveHorizontal"), this, &APlayerShip::MoveHorizontal);
	PlayerInputComponent->BindAxis(FName("MoveVertical"), this, &APlayerShip::MoveVertical);
	//PlayerInputComponent->BindAction(FName("Fire"), IE_Pressed, this, &APlayerShip::Fire);
}

void APlayerShip::MoveHorizontal(float AxisValue)
{
	Current_X_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::MoveVertical(float AxisValue)
{
	Current_Y_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::OnBeginOverlap(AActor* PlayerActor, AActor* OtherActor)
{
}





