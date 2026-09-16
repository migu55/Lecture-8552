// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Lecture8552GameMode.h"

#include "Character/BaseCharacter.h"

ALecture8552GameMode::ALecture8552GameMode()
{
	DefaultPawnClass = ABaseCharacter::StaticClass();
}
