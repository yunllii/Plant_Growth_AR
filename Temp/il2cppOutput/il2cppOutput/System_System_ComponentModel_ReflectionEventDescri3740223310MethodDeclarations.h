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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t3740223310;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t962731901;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3022476291;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_EventInfo4258285342.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_EventDescriptor962731901.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Delegate3022476291.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C"  void ReflectionEventDescriptor__ctor_m1150164323 (ReflectionEventDescriptor_t3740223310 * __this, EventInfo_t * ___eventInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m1094263751 (ReflectionEventDescriptor_t3740223310 * __this, Type_t * ___componentType0, EventDescriptor_t962731901 * ___oldEventDescriptor1, AttributeU5BU5D_t4255796347* ___attrs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void ReflectionEventDescriptor__ctor_m973505270 (ReflectionEventDescriptor_t3740223310 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4255796347* ___attrs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::GetEventInfo()
extern "C"  EventInfo_t * ReflectionEventDescriptor_GetEventInfo_m2419119754 (ReflectionEventDescriptor_t3740223310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::AddEventHandler(System.Object,System.Delegate)
extern "C"  void ReflectionEventDescriptor_AddEventHandler_m3888418726 (ReflectionEventDescriptor_t3740223310 * __this, Il2CppObject * ___component0, Delegate_t3022476291 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::RemoveEventHandler(System.Object,System.Delegate)
extern "C"  void ReflectionEventDescriptor_RemoveEventHandler_m1661394587 (ReflectionEventDescriptor_t3740223310 * __this, Il2CppObject * ___component0, Delegate_t3022476291 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionEventDescriptor_get_ComponentType_m2575382201 (ReflectionEventDescriptor_t3740223310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C"  Type_t * ReflectionEventDescriptor_get_EventType_m167161170 (ReflectionEventDescriptor_t3740223310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionEventDescriptor::get_IsMulticast()
extern "C"  bool ReflectionEventDescriptor_get_IsMulticast_m27545838 (ReflectionEventDescriptor_t3740223310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
