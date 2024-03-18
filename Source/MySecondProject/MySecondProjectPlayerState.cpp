// Fill out your copyright notice in the Description page of Project Settings.


#include "MySecondProjectPlayerState.h"
#include "AbilitySystemComponent.h"

AMySecondProjectPlayerState::AMySecondProjectPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}