// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Core/Lecture8552PlayerController.h"
#include "Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

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
		
		//Jump
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &APlayerCharacter::OnJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Ongoing, this, &APlayerCharacter::OnJumpOngoing);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &APlayerCharacter::OnJumpCompleted);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Canceled, this, &APlayerCharacter::OnJumpCancelled);
		
		//Fly
		EnhancedInputComponent->BindAction(FlyAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Fly);
		
		//Land
		EnhancedInputComponent->BindAction(LandAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Land);
	}
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
	if (!GetController()) return;
	
	if (ALecture8552PlayerController* PC = Cast<ALecture8552PlayerController>(GetController()))
	{
		
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		
		bUseControllerRotationPitch = false;
	
		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Green, TEXT("Landing"));
		PC->RemoveInputFlyingContext();
	}
}




