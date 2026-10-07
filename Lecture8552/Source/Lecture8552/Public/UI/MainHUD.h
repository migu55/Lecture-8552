// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainHUD.generated.h"

class UInventoryComponent;
class UItemSlot;
/**
 * 
 */
UCLASS()
class LECTURE8552_API UMainHUD : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	
	virtual void NativeConstruct() override;
	
	UFUNCTION(BlueprintCallable, Category = "UI")
	void RefreshSlotQuantities();
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UItemSlot> Slot0;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UItemSlot> Slot1;
	
private:
	UPROPERTY()
	TObjectPtr<UInventoryComponent> InventoryComponent;
	
};
