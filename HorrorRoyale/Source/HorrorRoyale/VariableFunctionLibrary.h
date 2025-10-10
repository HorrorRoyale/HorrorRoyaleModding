// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VariableFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class HORRORROYALE_API UVariableFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "VariableFunctionLibrary")
		static bool GetFloatByName(UObject* Target, FName VarName, float& OutFloat);

	UFUNCTION(BlueprintCallable, Category = "VariableFunctionLibrary")
		static bool GetBoolByName(UObject* Target, FName VarName, bool& OutBool);

	UFUNCTION(BlueprintCallable, Category = "VariableFunctionLibrary")
		static bool GetMonsterVariables(UObject* Target, bool& IsDormant, bool& IsKilling, bool& IsStunned, float& NeckRotation, float& DormantNeckRotation);
};
