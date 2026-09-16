// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

struct FInputActionValue;
class UInputAction;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class LECTURE8552_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
	
	UPROPERTY(EditAnywhere, Category = "Input Actions")
	TObjectPtr<UInputAction> LookAction;
	
	UPROPERTY(EditAnywhere, Category = "Input Actions")
	TObjectPtr<UInputAction> MoveAction;
	
	UPROPERTY(EditAnywhere, Category = "Input Actions")
	TObjectPtr<UInputAction> JumpAction;
	
	UPROPERTY(EditAnywhere, Category = "Input Actions")
	TObjectPtr<UInputAction> FlyAction;
	
	UPROPERTY(EditAnywhere, Category = "Input Actions")
	TObjectPtr<UInputAction> LandAction;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void Look(const FInputActionValue& Value);
	
	void Move(const FInputActionValue& Value);
	
	void OnJumpStart();
	void OnJumpOngoing();
	void OnJumpCancelled();
	void OnJumpCompleted();
	
	void Fly(const FInputActionValue& Value);
	
	void Land();

};
