// Fill out your copyright notice in the Description page of Project Settings.


#include "VariableFunctionLibrary.h"

bool UVariableFunctionLibrary::GetFloatByName(UObject* Target, FName VarName, float& OutFloat)
{
	if (Target)
	{
		float FoundFloat;
		UFloatProperty* FloatProp = FindField<UFloatProperty>(Target->GetClass(), VarName);
		if (FloatProp)
		{
			FoundFloat = FloatProp->GetPropertyValue_InContainer(Target);
			OutFloat = FoundFloat;
			return true;
		}
	}
	return false;
}

bool UVariableFunctionLibrary::GetBoolByName(UObject* Target, FName VarName, bool& OutBool)
{
	if (Target)
	{
		bool FoundBool;
		UBoolProperty* BoolProp = FindField<UBoolProperty>(Target->GetClass(), VarName);
		if (BoolProp)
		{
			FoundBool = BoolProp->GetPropertyValue_InContainer(Target);
			OutBool = FoundBool;
			return true;
		}
	}
	return false;
}

bool UVariableFunctionLibrary::GetMonsterVariables(UObject* Target, bool& IsDormant, bool& IsKilling, bool& IsStunned, float& NeckRotation, float& DormantNeckRotation)
{
	if (Target)
	{
		GetBoolByName(Target, "Dormant", IsDormant);
		GetBoolByName(Target, "AttackingHuman", IsKilling);
		GetBoolByName(Target, "Stunned", IsStunned);
		GetFloatByName(Target, "NeckRotation", NeckRotation);
		GetFloatByName(Target, "DormantHeadRotation", DormantNeckRotation);
		return true;
	}
	return false;
}