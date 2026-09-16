// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Lecture8552PlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Engine/LocalPlayer.h"



void ALecture8552PlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    
    if (IsLocalController())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        {
            for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
            {
                //walking/ground context will be priority 0
                //Looking around with mouse will be priority 0
                Subsystem->AddMappingContext(CurrentContext, 0);
            }
        }
    }
}

void ALecture8552PlayerController::AddInputFlyingContext()
{
    if (!IsLocalController()) return;
    
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(FlyingMappingContext, 1);
    }
}

void ALecture8552PlayerController::RemoveInputFlyingContext()
{
    if (!IsLocalController()) return;
    
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->RemoveMappingContext(FlyingMappingContext);
    }
}

bool ALecture8552PlayerController::HasInputFlyingContext()
{
    if (!IsLocalController()) return false;
    
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        return Subsystem->HasMappingContext(FlyingMappingContext);
    }
    return false;
}
