// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISAFARI_FlockerBase_generated_h
#error "FlockerBase.generated.h already included, missing '#pragma once' in FlockerBase.h"
#endif
#define AISAFARI_FlockerBase_generated_h

#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_RPC_WRAPPERS
#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAFlockerBase(); \
	friend AISAFARI_API class UClass* Z_Construct_UClass_AFlockerBase(); \
	public: \
	DECLARE_CLASS(AFlockerBase, AAutoAgent, COMPILED_IN_FLAGS(0), 0, AISafari, NO_API) \
	DECLARE_SERIALIZER(AFlockerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFlockerBase*>(this); }


#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_INCLASS \
	private: \
	static void StaticRegisterNativesAFlockerBase(); \
	friend AISAFARI_API class UClass* Z_Construct_UClass_AFlockerBase(); \
	public: \
	DECLARE_CLASS(AFlockerBase, AAutoAgent, COMPILED_IN_FLAGS(0), 0, AISafari, NO_API) \
	DECLARE_SERIALIZER(AFlockerBase) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFlockerBase*>(this); }


#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlockerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlockerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockerBase); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFlockerBase(const AFlockerBase& InCopy); \
public:


#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFlockerBase(const AFlockerBase& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlockerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlockerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlockerBase)


#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_10_PROLOG
#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_RPC_WRAPPERS \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_INCLASS \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_INCLASS_NO_PURE_DECLS \
	AISafari_Source_AISafari_BaseClasses_FlockerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AISafari_Source_AISafari_BaseClasses_FlockerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
