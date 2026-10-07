// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDataAsset.generated.h"


UENUM(BlueprintType)
enum class EItemType : uint8
{
	Relic UMETA(DisplayName = "Relic"),
	Potion UMETA(DisplayName = "Potion"),
};

USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ItemID;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText DisplayName;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText Description;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemType ItemType;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RestoreAmount = 0.0f;
	
};

UCLASS()
class LECTURE8552_API UItemDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Item")
	FItemData ItemData;
};
