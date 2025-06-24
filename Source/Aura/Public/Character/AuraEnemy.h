// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	AAuraEnemy();

protected:
	virtual void BeginPlay() override;

private:
	GENERATED_BODY()
	
public:
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

};
