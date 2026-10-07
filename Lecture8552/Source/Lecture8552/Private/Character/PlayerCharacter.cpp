// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "TimerManager.h"
#include "Camera/CameraComponent.h"
#include "Components/InventoryComponent.h"
#include "Core/Lecture8552PlayerController.h"
#include "Data/ItemDataAsset.h"
#include "Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interactable/Crate.h"
#include "Interactable/Safe.h"
#include "Interactable/Shrine.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
			
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
	
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Default Actions
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
		
		//Move
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		
		//Interact
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &APlayerCharacter::Interact);
		
		//Jump
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &APlayerCharacter::OnJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Ongoing, this, &APlayerCharacter::OnJumpOngoing);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &APlayerCharacter::OnJumpCompleted);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Canceled, this, &APlayerCharacter::OnJumpCancelled);
		
		//Fly
		EnhancedInputComponent->BindAction(FlyAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Fly);
		
		//Land
		EnhancedInputComponent->BindAction(LandAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Land);
		
		//UsePotion
		EnhancedInputComponent->BindAction(UsePotionAction, ETriggerEvent::Completed, this, &APlayerCharacter::UsePotion);
	}
}

void APlayerCharacter::RestoreEnergy(float Amount)
{
	// if (GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 3.00f, FColor::Green, FString::Printf(TEXT("Restoring %f"), Amount));
	// }
	
	Energy = FMath::Clamp(Energy + Amount, 0.0f, MaxEnergy);
	
	OnEnergyChanged.Broadcast(Energy, MaxEnergy);
	
}

void APlayerCharacter::RemoveEnergy(float Amount)
{
	// if (GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 3.00f, FColor::Green, FString::Printf(TEXT("Restoring %f"), Amount));
	// }
	
	Energy = FMath::Clamp(Energy - Amount, 0.0f, MaxEnergy);
	
	OnEnergyChanged.Broadcast(Energy, MaxEnergy);
	
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (ALecture8552PlayerController* PC = Cast<ALecture8552PlayerController>(GetController()))
	{
		if (PC->HasInputFlyingContext())
		{
			if (!GetWorldTimerManager().IsTimerActive(FlyingTimerHandle))
			{
				GetWorldTimerManager().SetTimer(FlyingTimerHandle, [this]()
				{
					RemoveEnergy(FlyingEnergyCost);
				}, FlyingEnergyInterval, true);
			}

			if (Energy <= 0.0f)
			{
				Land();
			}
		}
		else
		{
			GetWorldTimerManager().ClearTimer(FlyingTimerHandle);
		}
	}
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	if (!GetController()) return;
	
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	if (!GetController()) return;
	
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	AddMovementInput(GetActorForwardVector(), MovementVector.X);
	AddMovementInput(GetActorRightVector(), MovementVector.Y);
}

void APlayerCharacter::Interact()
{
	FVector StartLocation;
	FRotator ViewLocation;
	
	GetActorEyesViewPoint(StartLocation, ViewLocation);
	
	FVector ForwardVector = GetViewRotation().Vector();
	
	FVector EndLocation = StartLocation + (ForwardVector * 200);
	
	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this);
	
	// bool bHit = GetWorld()->LineTraceSingleByChannel(
	// 	HitResult, 
	// 	StartLocation, 
	// 	EndLocation, 
	// 	ECC_Visibility, 
	// 	TraceParams);
	//
	// FColor LineColor = bHit ? FColor::Green : FColor::Red;
	//
	// DrawDebugLine(
	// 	GetWorld(), 
	// 	StartLocation, 
	// 	EndLocation, 
	// 	LineColor, 
	// 	false, 
	// 	2.0f, 
	// 	0, 
	// 	1.5f
	// 	);
	//
	
	FCollisionShape Sphere = FCollisionShape::MakeSphere(130.0f);
	
	bool bHit = GetWorld()->SweepSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		FQuat::Identity,
		ECC_Visibility,
		Sphere,
		TraceParams
		);
	
	DrawDebugSphere(
		GetWorld(),
		HitResult.Location,
		130.0f,
		12,
		FColor::Yellow,
		false,
		2.0f);
	
	if (!bHit) return;
	
	AActor* HitActor = HitResult.GetActor();
	UPrimitiveComponent* HitComponent = HitResult.GetComponent();
	
	if (!HitActor) return;
	
	if (IInteractable* Interactable = Cast<IInteractable>(HitActor))
	{
		Interactable->Interact(this, HitComponent);
	}
	
	// if (AShrine* Shrine = Cast<AShrine>(HitActor))
	// {
	// 	Shrine->Activate();
	// } else if (ACrate* Crate = Cast<ACrate>(HitActor))
	// {
	// 	Crate->Open();
	// } else if (ASafe* Safe = Cast<ASafe>(HitActor))
	// {
	// 	if (HitComponent == Safe->LootMesh)
	// 	{
	// 		Safe->CollectLoot();
	// 	} else
	// 	{
	// 		Safe->Open();
	// 	}
	// }
}

void APlayerCharacter::OnJumpStart()
{
	if (!CanJump())
	{
		return;
	}
	
	Jump();
}

void APlayerCharacter::OnJumpOngoing()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, TEXT("Powering up..."));
	}
}

void APlayerCharacter::OnJumpCancelled()
{
	StopJumping();
}

void APlayerCharacter::OnJumpCompleted()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	
	bUseControllerRotationPitch = true;
	
	if (ALecture8552PlayerController* PC = Cast<ALecture8552PlayerController>(GetController()))
	{
		PC->AddInputFlyingContext();
	}
}

void APlayerCharacter::Fly(const FInputActionValue& Value)
{
	if (!GetController()) return;
	
	float FlyingVector = Value.Get<float>();
	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, TEXT("Moving"));
	AddMovementInput(GetActorUpVector(), FlyingVector);
}

void APlayerCharacter::Land()
{
	GetWorldTimerManager().ClearTimer(FlyingTimerHandle);

	if (!GetController()) return;
	
	if (ALecture8552PlayerController* PC = Cast<ALecture8552PlayerController>(GetController()))
	{
		
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		
		bUseControllerRotationPitch = false;
	
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, TEXT("Landing"));
		PC->RemoveInputFlyingContext();
	}
}

void APlayerCharacter::UsePotion()
{
	if (InventoryComponent->GetItems().Contains(EnergyPotion))
	{
		InventoryComponent->RemoveItem(EnergyPotion);
		RestoreEnergy(EnergyPotion->ItemData.RestoreAmount);
	} else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.00f, FColor::Red, TEXT("No Potions"));
		}
	}
}



