#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.Object
struct Il2CppObject;
// System.IServiceProvider
struct IServiceProvider_t2397848447;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C"  void TypeDescriptionProvider__ctor_m960440148 (TypeDescriptionProvider_t2438624375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void TypeDescriptionProvider__ctor_m1628468586 (TypeDescriptionProvider_t2438624375 * __this, TypeDescriptionProvider_t2438624375 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * TypeDescriptionProvider_CreateInstance_m451412922 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t1664964607* ___argTypes2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetCache_m381731988 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetExtendedTypeDescriptor_m1212176151 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C"  String_t* TypeDescriptionProvider_GetFullComponentName_m2997824998 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Object)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m3022122195 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m2751304960 (TypeDescriptionProvider_t2438624375 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m1092464790 (TypeDescriptionProvider_t2438624375 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m2213129854 (TypeDescriptionProvider_t2438624375 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m492304829 (TypeDescriptionProvider_t2438624375 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m4015807399 (TypeDescriptionProvider_t2438624375 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
