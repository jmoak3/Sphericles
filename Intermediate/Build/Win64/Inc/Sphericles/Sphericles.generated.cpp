// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Public/Sphericles.h"
#include "Sphericles.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeSphericles() {}
	void ASphericlesGameMode::StaticRegisterNativesASphericlesGameMode()
	{
	}
	IMPLEMENT_CLASS(ASphericlesGameMode, 471333871);
	void ASphericlesPawn::StaticRegisterNativesASphericlesPawn()
	{
	}
	IMPLEMENT_CLASS(ASphericlesPawn, 3123451489);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();

	SPHERICLES_API class UClass* Z_Construct_UClass_ASphericlesGameMode_NoRegister();
	SPHERICLES_API class UClass* Z_Construct_UClass_ASphericlesGameMode();
	SPHERICLES_API class UClass* Z_Construct_UClass_ASphericlesPawn_NoRegister();
	SPHERICLES_API class UClass* Z_Construct_UClass_ASphericlesPawn();
	SPHERICLES_API class UPackage* Z_Construct_UPackage_Sphericles();
	UClass* Z_Construct_UClass_ASphericlesGameMode_NoRegister()
	{
		return ASphericlesGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASphericlesGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_Sphericles();
			OuterClass = ASphericlesGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x208802AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SphericlesGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SphericlesGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphericlesGameMode(Z_Construct_UClass_ASphericlesGameMode, TEXT("ASphericlesGameMode"));
	UClass* Z_Construct_UClass_ASphericlesPawn_NoRegister()
	{
		return ASphericlesPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ASphericlesPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage_Sphericles();
			OuterClass = ASphericlesPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


				UProperty* NewProp_Camera = new(OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(Camera, ASphericlesPawn), 0x00000000000b001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation AI|Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SphericlesPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SphericlesPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("Public/SphericlesPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("ToolTip"), TEXT("Camera component that will be our viewpoint"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphericlesPawn(Z_Construct_UClass_ASphericlesPawn, TEXT("ASphericlesPawn"));
	UPackage* Z_Construct_UPackage_Sphericles()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Sphericles")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xCDB933F3;
			Guid.B = 0x05E1A280;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif

