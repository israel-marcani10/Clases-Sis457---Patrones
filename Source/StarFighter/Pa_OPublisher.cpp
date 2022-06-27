// Fill out your copyright notice in the Description page of Project Settings.


#include "Pa_OPublisher.h"

// Sets default values
APa_OPublisher::APa_OPublisher()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APa_OPublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APa_OPublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APa_OPublisher::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APa_OPublisher::Subscribe(APawn* Subscriber)
{
	//Agregar el Suscriptor aprobado
	Subscribers.Add(Subscriber);
}

void APa_OPublisher::UnSubscribe(APawn* SubscriberToRemove)
{
	//Eliminar el Suscriptor aprobado
	Subscribers.Remove(SubscriberToRemove);
}

void APa_OPublisher::NotifySubscribers()
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

