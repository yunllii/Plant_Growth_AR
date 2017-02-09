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

// System.ComponentModel.DerivedPropertyDescriptor
struct DerivedPropertyDescriptor_t1502098785;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.DerivedPropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void DerivedPropertyDescriptor__ctor_m2110950725 (DerivedPropertyDescriptor_t1502098785 * __this, String_t* ___name0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::.ctor(System.String,System.Attribute[],System.Int32)
extern "C"  void DerivedPropertyDescriptor__ctor_m2824738018 (DerivedPropertyDescriptor_t1502098785 * __this, String_t* ___name0, AttributeU5BU5D_t4255796347* ___attrs1, int32_t ___dummy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetReadOnly(System.Boolean)
extern "C"  void DerivedPropertyDescriptor_SetReadOnly_m2421991293 (DerivedPropertyDescriptor_t1502098785 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetComponentType(System.Type)
extern "C"  void DerivedPropertyDescriptor_SetComponentType_m2585498164 (DerivedPropertyDescriptor_t1502098785 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetPropertyType(System.Type)
extern "C"  void DerivedPropertyDescriptor_SetPropertyType_m2129884572 (DerivedPropertyDescriptor_t1502098785 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DerivedPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * DerivedPropertyDescriptor_GetValue_m1599941664 (DerivedPropertyDescriptor_t1502098785 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void DerivedPropertyDescriptor_SetValue_m53676135 (DerivedPropertyDescriptor_t1502098785 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DerivedPropertyDescriptor::ResetValue(System.Object)
extern "C"  void DerivedPropertyDescriptor_ResetValue_m338256304 (DerivedPropertyDescriptor_t1502098785 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool DerivedPropertyDescriptor_CanResetValue_m647090916 (DerivedPropertyDescriptor_t1502098785 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool DerivedPropertyDescriptor_ShouldSerializeValue_m642721416 (DerivedPropertyDescriptor_t1502098785 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.DerivedPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * DerivedPropertyDescriptor_get_ComponentType_m2751210184 (DerivedPropertyDescriptor_t1502098785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DerivedPropertyDescriptor::get_IsReadOnly()
extern "C"  bool DerivedPropertyDescriptor_get_IsReadOnly_m2179182539 (DerivedPropertyDescriptor_t1502098785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.DerivedPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * DerivedPropertyDescriptor_get_PropertyType_m3953177018 (DerivedPropertyDescriptor_t1502098785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
