// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/InventoryComponent.h"

#include "Data/ItemDataAsset.h"
#include "Engine/Engine.h"


// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UInventoryComponent::AddItem(UItemDataAsset* Item)
{
	if (!Item)
	{
		return false;
	}
	
	if (Items.Num() >= Capacity)
	{
		UE_LOG(LogTemp, Warning, TEXT("Inventory is full! Cannot add %s"), *Item->GetName());
		return false;
	}
	
	Items.Add(Item);
	UE_LOG(LogTemp, Warning, TEXT("Inventory updated"));
	
	if (GEngine)
	{
		FString DebugMessage = FString::Printf(TEXT("Found %s"), *Item->ItemData.DisplayName.ToString());
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, DebugMessage);
	}
	
	OnInventoryUpdated.Broadcast();
	
	return true;
}

bool UInventoryComponent::RemoveItem(UItemDataAsset* Item)
{
	if (!Item)
	{
		return false;
	}
	
	int32 RemovedCount = Items.RemoveSingle(Item);
	
	if (RemovedCount > 0)
	{
		OnInventoryUpdated.Broadcast();
		return true;
	}
	
	return false;
}

int32 UInventoryComponent::GetQuantity(UItemDataAsset* TargetItem) const
{
	if (!TargetItem)
	{
		return 0;
	}
	
	int32 TotalCount = 0;
	
	for (const UItemDataAsset* Item : Items)
	{
		if (Item == TargetItem)
		{
			TotalCount++;
		}
	}
	
	return TotalCount;
}

