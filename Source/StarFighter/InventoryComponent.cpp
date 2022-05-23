// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

// Constructor
UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

int32 UInventoryComponent::AddToInventory(AMyCapsule* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UInventoryComponent::RemoveFromInventory(AMyCapsule* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

