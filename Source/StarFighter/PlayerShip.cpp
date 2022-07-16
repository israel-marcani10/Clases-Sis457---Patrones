// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Engine/World.h"
#include "Bullet1.h"
#include "Bullet2.h"
#include "MyCapsule.h"
#include "GameFramework/SpringArmComponent.h"

const FName APlayerShip::MoveHorizontalBinding("MoveHorizontal");
const FName APlayerShip::MoveVerticalBinding("MoveVertical");
const FName APlayerShip::FireBinding1("Bullet1");
const FName APlayerShip::FireBinding2("Bullet2");

APlayerShip::APlayerShip()
{
	// nave jugador posee automaticamente la camara al empezar el nivel
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Efecto del sonido
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("SoundWave'/Game/SFX/laser.laser'"));
	FireSound = FireAudio.Object;

	// distancia a spawnear la bala de la nave
	GunOffset = FVector(90.f, 0.f, 0.f);
	GunOffset1 = FVector(90.f, 0.f, 0.f);

	
	Max_Health = 100.0f; // salud maxima
	Max_Armor = 100.0f; // armadura maxima
	BulletNumbers = 0;

	ValueMovement = false;
	ValueShoot = 0.f;
	//ShipInventory = CreateDefaultSubobject<UInventoryComponent>("MyInventory");
}

void APlayerShip::BeginPlay()
{
	Super::BeginPlay();
	MaxVelocity = 200.0f; // velocidad maxima
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

	if (Max_Health <= 0.f) {
		this->ExplodeAndDestroy();
	}

	// mandando las acciones que deben hacer los enemigos
	// jugador no se mueve, enemigo no se mueve
	if (ValueMovement == false)
		setCambiarAccion("Estatico");

	// jugador se mueve pero no disparar, enemigo se mueve
	if (Current_X_Velocity != 0.f) {
		ValueMovement = false;
		setCambiarAccion("Movimiento");
	}
	if (Current_Y_Velocity != 0.f) {
		ValueMovement = false;
		setCambiarAccion("Movimiento");
	}

	// jugador dispara
	if (ValueShoot >= 0.f) {
		ValueShoot -= DeltaTime;
		setCambiarAccion("Atacando");
	}


}

void APlayerShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// conectando con el unreal para el manejo de las teclas
	PlayerInputComponent->BindAxis(MoveHorizontalBinding, this, &APlayerShip::MoveHorizontal);
	PlayerInputComponent->BindAxis(MoveVerticalBinding, this, &APlayerShip::MoveVertical);
	InputComponent->BindAction(FireBinding1, IE_Pressed, this, &APlayerShip::FireShoot1);
	InputComponent->BindAction(FireBinding2, IE_Pressed, this, &APlayerShip::FireShoot2);
}

void APlayerShip::MoveHorizontal(float AxisValue)
{
	Current_X_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::MoveVertical(float AxisValue)
{
	Current_Y_Velocity = MaxVelocity * AxisValue;
}

void APlayerShip::FireShoot1()
{
	const FVector FireDirection = FVector(1.f, 0.f, 0.f);
	const FRotator FireRotation = FireDirection.Rotation();
	

	if (BulletNumbers == 1) {
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		UWorld* const World = GetWorld();
		if (World != nullptr)
			World->SpawnActor<ABullet1>(SpawnLocation, FireRotation);
	}

	if (BulletNumbers == 2) {
		GunOffset = FVector(90.f, -20.f, 0.f);
		GunOffset1 = FVector(90.f, 20.f, 0.f);
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		const FVector SpawnLocation1 = GetActorLocation() + FireRotation.RotateVector(GunOffset1);
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			World->SpawnActor<ABullet1>(SpawnLocation1, FireRotation);
			World->SpawnActor<ABullet1>(SpawnLocation, FireRotation);
		}
	}
	ValueShoot += 1.5f;

	//World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);
	/*
		if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}
		*/
}
void APlayerShip::FireShoot2()
{
	const FVector FireDirection = FVector(1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	//FVector Location = BulletSpawnPoint->GetComponentLocation();
	//FRotator Rotation = FireDirection.Rotation();

	UWorld* const World = GetWorld();
	if (World != nullptr) {
		// spawn the projectile
		World->SpawnActor<ABullet2>(SpawnLocation, FireRotation);
	}

	//World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlayerShip::ShotTimerExpired, FireRate);
	/*
		if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}
		*/
}


// metodo para la destruccion de la nave jugador
void APlayerShip::ExplodeAndDestroy()
{
	if (ShipExplosionPlayer)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShipExplosionPlayer, GetActorTransform());
	}

	Destroy();
}

/*
// metodo para recoger capsulas al inventario del jugador
void APlayerShip::TakeItem(AMyCapsule* InventoryItem)
{
	InventoryItem->PickUp();
	ShipInventory->AddToInventory(InventoryItem);
}
// metodo para eliminar capsulas del inventario del jugador
void APlayerShip::DropItem()
{
	if (ShipInventory->CurrentInventory.Num() == 0)
	{
		return;
	}
	AMyCapsule* Item = ShipInventory->CurrentInventory.Last();
	ShipInventory->RemoveFromInventory(Item);
	//should probably use scaled bounding box
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() + FTransform(RootComponent->GetForwardVector() * ItemBounds.GetMax());
	Item->PutDown(PutDownLocation);
}*/

void APlayerShip::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved,
	FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	AMyCapsule* CapsuleItem = Cast<AMyCapsule>(Other);

	if (CapsuleItem) {
		if (CapsuleItem->GetNombre() == "Vida1") {
			CapsuleItem->Destruir();
			Max_Health += 10.f;
		}
		if (CapsuleItem->GetNombre() == "Energia1") {
			CapsuleItem->Destruir();
			MaxVelocity += 100.f;
		}
		if (CapsuleItem->GetNombre() == "Arma1") {
			CapsuleItem->Destruir();
			BulletNumbers += 1;
		}
		if (CapsuleItem->GetNombre() == "Escudo1") {
			CapsuleItem->Destruir();
		}
	}
	
}

void APlayerShip::CambiarAccion()
{
	//Cuando la hora ha cambiado, esta Torre del Reloj (que es un Plubisher) notifica a todos los Subscriber que la hora ha cambiado
	NotifySubscribers();
}

void APlayerShip::setCambiarAccion(FString miAccion)
{
	//Establezca la hora usando el parámetro pasado y advierta que ha cambiado
	Time = miAccion;
	CambiarAccion();
}


void APlayerShip::Subscribe(APawn* Subscriber)
{
	//Agregar el Suscriptor aprobado
	Subscribers.Add(Subscriber);
}

void APlayerShip::UnSubscribe(APawn* SubscriberToRemove)
{
	//Eliminar el Suscriptor aprobado
	Subscribers.Remove(SubscriberToRemove);
}

void APlayerShip::NotifySubscribers()
{
	//Bucle para cada suscriptor
	for (APawn* Actor : Subscribers)
	{
		//Enviar cada uno de ellos a un Suscriptor concreto
		IPa_OSubscriber* Sub = Cast<IPa_OSubscriber>(Actor);
		if (Sub)
		{
			//Notificar a cada uno de ellos que algo ha cambiado, para que puedan ejecutar su propia rutina.
			Sub->Update(this);
		}
	}
}