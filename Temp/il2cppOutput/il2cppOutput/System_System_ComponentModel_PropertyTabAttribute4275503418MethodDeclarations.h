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

// System.ComponentModel.PropertyTabAttribute
struct PropertyTabAttribute_t4275503418;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.ComponentModel.PropertyTabScope[]
struct PropertyTabScopeU5BU5D_t1926118365;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_PropertyTabScope2485003348.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_PropertyTabAttribute4275503418.h"

// System.Void System.ComponentModel.PropertyTabAttribute::.ctor()
extern "C"  void PropertyTabAttribute__ctor_m3432741623 (PropertyTabAttribute_t4275503418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.String)
extern "C"  void PropertyTabAttribute__ctor_m856509341 (PropertyTabAttribute_t4275503418 * __this, String_t* ___tabClassName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.Type)
extern "C"  void PropertyTabAttribute__ctor_m1282806006 (PropertyTabAttribute_t4275503418 * __this, Type_t * ___tabClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.String,System.ComponentModel.PropertyTabScope)
extern "C"  void PropertyTabAttribute__ctor_m4073823774 (PropertyTabAttribute_t4275503418 * __this, String_t* ___tabClassName0, int32_t ___tabScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::.ctor(System.Type,System.ComponentModel.PropertyTabScope)
extern "C"  void PropertyTabAttribute__ctor_m1379149035 (PropertyTabAttribute_t4275503418 * __this, Type_t * ___tabClass0, int32_t ___tabScope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.ComponentModel.PropertyTabAttribute::get_TabClasses()
extern "C"  TypeU5BU5D_t1664964607* PropertyTabAttribute_get_TabClasses_m893160279 (PropertyTabAttribute_t4275503418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyTabScope[] System.ComponentModel.PropertyTabAttribute::get_TabScopes()
extern "C"  PropertyTabScopeU5BU5D_t1926118365* PropertyTabAttribute_get_TabScopes_m769467526 (PropertyTabAttribute_t4275503418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.ComponentModel.PropertyTabAttribute::get_TabClassNames()
extern "C"  StringU5BU5D_t1642385972* PropertyTabAttribute_get_TabClassNames_m3469700906 (PropertyTabAttribute_t4275503418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyTabAttribute::Equals(System.Object)
extern "C"  bool PropertyTabAttribute_Equals_m2286897740 (PropertyTabAttribute_t4275503418 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyTabAttribute::Equals(System.ComponentModel.PropertyTabAttribute)
extern "C"  bool PropertyTabAttribute_Equals_m2846167053 (PropertyTabAttribute_t4275503418 * __this, PropertyTabAttribute_t4275503418 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyTabAttribute::GetHashCode()
extern "C"  int32_t PropertyTabAttribute_GetHashCode_m2538672392 (PropertyTabAttribute_t4275503418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::InitializeArrays(System.String[],System.ComponentModel.PropertyTabScope[])
extern "C"  void PropertyTabAttribute_InitializeArrays_m1410653690 (PropertyTabAttribute_t4275503418 * __this, StringU5BU5D_t1642385972* ___tabClassNames0, PropertyTabScopeU5BU5D_t1926118365* ___tabScopes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyTabAttribute::InitializeArrays(System.Type[],System.ComponentModel.PropertyTabScope[])
extern "C"  void PropertyTabAttribute_InitializeArrays_m3862771797 (PropertyTabAttribute_t4275503418 * __this, TypeU5BU5D_t1664964607* ___tabClasses0, PropertyTabScopeU5BU5D_t1926118365* ___tabScopes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyTabAttribute::GetTypeFromName(System.String)
extern "C"  Type_t * PropertyTabAttribute_GetTypeFromName_m2429580930 (PropertyTabAttribute_t4275503418 * __this, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
