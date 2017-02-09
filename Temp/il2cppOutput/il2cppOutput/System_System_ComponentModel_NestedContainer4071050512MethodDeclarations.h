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

// System.ComponentModel.NestedContainer
struct NestedContainer_t4071050512;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.String
struct String_t;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.EventArgs
struct EventArgs_t3289624707;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.ComponentModel.NestedContainer::.ctor(System.ComponentModel.IComponent)
extern "C"  void NestedContainer__ctor_m1515802766 (NestedContainer_t4071050512 * __this, Il2CppObject * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.NestedContainer::get_Owner()
extern "C"  Il2CppObject * NestedContainer_get_Owner_m2913418789 (NestedContainer_t4071050512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.NestedContainer::get_OwnerName()
extern "C"  String_t* NestedContainer_get_OwnerName_m3383098783 (NestedContainer_t4071050512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.NestedContainer::CreateSite(System.ComponentModel.IComponent,System.String)
extern "C"  Il2CppObject * NestedContainer_CreateSite_m78763339 (NestedContainer_t4071050512 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NestedContainer::GetService(System.Type)
extern "C"  Il2CppObject * NestedContainer_GetService_m3855275870 (NestedContainer_t4071050512 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NestedContainer::Dispose(System.Boolean)
extern "C"  void NestedContainer_Dispose_m941282117 (NestedContainer_t4071050512 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NestedContainer::OnOwnerDisposed(System.Object,System.EventArgs)
extern "C"  void NestedContainer_OnOwnerDisposed_m1581459312 (NestedContainer_t4071050512 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
