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

// System.ComponentModel.ComponentResourceManager
struct ComponentResourceManager_t1797694556;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"

// System.Void System.ComponentModel.ComponentResourceManager::.ctor()
extern "C"  void ComponentResourceManager__ctor_m1104943489 (ComponentResourceManager_t1797694556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::.ctor(System.Type)
extern "C"  void ComponentResourceManager__ctor_m2325259344 (ComponentResourceManager_t1797694556 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::ApplyResources(System.Object,System.String)
extern "C"  void ComponentResourceManager_ApplyResources_m3961688446 (ComponentResourceManager_t1797694556 * __this, Il2CppObject * ___value0, String_t* ___objectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::ApplyResources(System.Object,System.String,System.Globalization.CultureInfo)
extern "C"  void ComponentResourceManager_ApplyResources_m4247170458 (ComponentResourceManager_t1797694556 * __this, Il2CppObject * ___value0, String_t* ___objectName1, CultureInfo_t3500843524 * ___culture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentResourceManager::BuildResources(System.Globalization.CultureInfo,System.Collections.Hashtable)
extern "C"  void ComponentResourceManager_BuildResources_m2647852450 (ComponentResourceManager_t1797694556 * __this, CultureInfo_t3500843524 * ___culture0, Hashtable_t909839986 * ___resources1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
