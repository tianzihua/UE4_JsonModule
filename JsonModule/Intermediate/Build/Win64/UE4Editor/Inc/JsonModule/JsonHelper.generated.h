// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJsonStruct;
enum class EJsonType : uint8;
#ifdef JSONMODULE_JsonHelper_generated_h
#error "JsonHelper.generated.h already included, missing '#pragma once' in JsonHelper.h"
#endif
#define JSONMODULE_JsonHelper_generated_h

#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_25_GENERATED_BODY \
	friend JSONMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FJsonStruct(); \
	JSONMODULE_API static class UScriptStruct* StaticStruct();


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJsonObjectToKeyValuePairs) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::JsonObjectToKeyValuePairs(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonArrayByValue) \
	{ \
		P_GET_TARRAY(FJsonStruct,Z_Param_arrays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonArrayByValue(Z_Param_arrays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonObjectByValue) \
	{ \
		P_GET_TARRAY(FJsonStruct,Z_Param_arrays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonObjectByValue(Z_Param_arrays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonBoolValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonBoolValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonNumberValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonNumberValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonStringValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonStringValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddJsonObjectValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_GET_UBOOL(Z_Param_isRepleace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::AddJsonObjectValue(Z_Param_json,Z_Param_value,Z_Param_Out_isSuccess,Z_Param_isRepleace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddJsonArrayValue) \
	{ \
		P_GET_STRUCT_REF(FJsonStruct,Z_Param_Out_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::AddJsonArrayValue(Z_Param_Out_json,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveJsonObjectValueByKey) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::RemoveJsonObjectValueByKey(Z_Param_json,Z_Param_key,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveJsonArrayValueByValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::RemoveJsonArrayValueByValue(Z_Param_json,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeJsonObjectValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::ChangeJsonObjectValue(Z_Param_json,Z_Param_key,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeJsonArrayValue) \
	{ \
		P_GET_STRUCT_REF(FJsonStruct,Z_Param_Out_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_from); \
		P_GET_STRUCT(FJsonStruct,Z_Param_to); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::ChangeJsonArrayValue(Z_Param_Out_json,Z_Param_from,Z_Param_to,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJsonKey) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::SetJsonKey(Z_Param_json,Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindJsonFromObject) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_ENUM(EJsonType,Z_Param_type); \
		P_GET_UBOOL_REF(Z_Param_Out_isFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::FindJsonFromObject(Z_Param_json,Z_Param_key,EJsonType(Z_Param_type),Z_Param_Out_isFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllValueFromJson) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FJsonStruct>*)Z_Param__Result=UJsonHelper::GetAllValueFromJson(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetBaseValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::TryGetBaseValue(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJsonType) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EJsonType*)Z_Param__Result=UJsonHelper::JsonType(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::ToString(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::ParseJson(Z_Param_str); \
		P_NATIVE_END; \
	}


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJsonObjectToKeyValuePairs) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::JsonObjectToKeyValuePairs(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonArrayByValue) \
	{ \
		P_GET_TARRAY(FJsonStruct,Z_Param_arrays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonArrayByValue(Z_Param_arrays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonObjectByValue) \
	{ \
		P_GET_TARRAY(FJsonStruct,Z_Param_arrays); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonObjectByValue(Z_Param_arrays); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonBoolValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonBoolValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonNumberValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonNumberValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateJsonStringValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::CreateJsonStringValue(Z_Param_key,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddJsonObjectValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_GET_UBOOL(Z_Param_isRepleace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::AddJsonObjectValue(Z_Param_json,Z_Param_value,Z_Param_Out_isSuccess,Z_Param_isRepleace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddJsonArrayValue) \
	{ \
		P_GET_STRUCT_REF(FJsonStruct,Z_Param_Out_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::AddJsonArrayValue(Z_Param_Out_json,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveJsonObjectValueByKey) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::RemoveJsonObjectValueByKey(Z_Param_json,Z_Param_key,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveJsonArrayValueByValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::RemoveJsonArrayValueByValue(Z_Param_json,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeJsonObjectValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_STRUCT(FJsonStruct,Z_Param_value); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::ChangeJsonObjectValue(Z_Param_json,Z_Param_key,Z_Param_value,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeJsonArrayValue) \
	{ \
		P_GET_STRUCT_REF(FJsonStruct,Z_Param_Out_json); \
		P_GET_STRUCT(FJsonStruct,Z_Param_from); \
		P_GET_STRUCT(FJsonStruct,Z_Param_to); \
		P_GET_UBOOL_REF(Z_Param_Out_isSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UJsonHelper::ChangeJsonArrayValue(Z_Param_Out_json,Z_Param_from,Z_Param_to,Z_Param_Out_isSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJsonKey) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::SetJsonKey(Z_Param_json,Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindJsonFromObject) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_GET_ENUM(EJsonType,Z_Param_type); \
		P_GET_UBOOL_REF(Z_Param_Out_isFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::FindJsonFromObject(Z_Param_json,Z_Param_key,EJsonType(Z_Param_type),Z_Param_Out_isFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllValueFromJson) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FJsonStruct>*)Z_Param__Result=UJsonHelper::GetAllValueFromJson(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetBaseValue) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::TryGetBaseValue(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJsonType) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EJsonType*)Z_Param__Result=UJsonHelper::JsonType(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_GET_STRUCT(FJsonStruct,Z_Param_json); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UJsonHelper::ToString(Z_Param_json); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseJson) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FJsonStruct*)Z_Param__Result=UJsonHelper::ParseJson(Z_Param_str); \
		P_NATIVE_END; \
	}


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonHelper(); \
	friend JSONMODULE_API class UClass* Z_Construct_UClass_UJsonHelper(); \
public: \
	DECLARE_CLASS(UJsonHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JsonModule"), NO_API) \
	DECLARE_SERIALIZER(UJsonHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUJsonHelper(); \
	friend JSONMODULE_API class UClass* Z_Construct_UClass_UJsonHelper(); \
public: \
	DECLARE_CLASS(UJsonHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JsonModule"), NO_API) \
	DECLARE_SERIALIZER(UJsonHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonHelper(UJsonHelper&&); \
	NO_API UJsonHelper(const UJsonHelper&); \
public:


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonHelper(UJsonHelper&&); \
	NO_API UJsonHelper(const UJsonHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonHelper)


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_PRIVATE_PROPERTY_OFFSET
#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_31_PROLOG
#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_PRIVATE_PROPERTY_OFFSET \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_RPC_WRAPPERS \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_INCLASS \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_PRIVATE_PROPERTY_OFFSET \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_INCLASS_NO_PURE_DECLS \
	MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyPackageProject_Plugins_JsonModule_Source_JsonModule_Public_JsonHelper_h


#define FOREACH_ENUM_EJSONTYPE(op) \
	op(EJsonType::None) \
	op(EJsonType::Null) \
	op(EJsonType::String) \
	op(EJsonType::Number) \
	op(EJsonType::Boolean) \
	op(EJsonType::Array) \
	op(EJsonType::Object) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
