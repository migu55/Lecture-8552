// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Lecture8552PlayerController.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class LECTURE8552_API ALecture8552PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void AddInputFlyingContext();
	void RemoveInputFlyingContext();
	bool HasInputFlyingContext();
	
protected:
	UPROPERTY(EditAnywhere, Category = "Input")
	TArray<UInputMappingContext*> DefaultMappingContexts;
	
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* FlyingMappingContext;
	
	virtual void SetupInputComponent() override;
};

