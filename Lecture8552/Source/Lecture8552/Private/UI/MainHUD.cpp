// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/MainHUD.h"

#include "Components/InventoryComponent.h"
#include "GameFramework/Pawn.h"
#include "UI/ItemSlot.h"

void UMainHUD::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (APlayerController* PC = GetOwningPlayer())
	{
		if (APawn* Pawn = PC->GetPawn())
		{
			InventoryComponent = Pawn->FindComponentByClass<UInventoryComponent>();
		}
	}
	
	if (InventoryComponent)
	{
		InventoryComponent->OnInventoryUpdated.AddDynamic(this, &UMainHUD::RefreshSlotQuantities);
		RefreshSlotQuantities();
	}
	
}

void UMainHUD::RefreshSlotQuantities()
{
	if (!InventoryComponent) return;
	
	if (Slot0)
	{
		int32 Count = InventoryComponent->GetQuantity(Slot0->Item);
		Slot0->SetupSlot(Slot0->Item, Count);
	}
	
	if (Slot1)
	{
		int32 Count = InventoryComponent->GetQuantity(Slot1->Item);
		Slot1->SetupSlot(Slot1->Item, Count);
	}
}
