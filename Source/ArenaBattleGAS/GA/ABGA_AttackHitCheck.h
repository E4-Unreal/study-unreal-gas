﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ABGA_AttackHitCheck.generated.h"

/**
 *
 */
UCLASS()
class ARENABATTLEGAS_API UABGA_AttackHitCheck : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UABGA_AttackHitCheck();

    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
    UFUNCTION()
    void OnTraceResultCallBack(const FGameplayAbilityTargetDataHandle& TargetDataHandle);
};