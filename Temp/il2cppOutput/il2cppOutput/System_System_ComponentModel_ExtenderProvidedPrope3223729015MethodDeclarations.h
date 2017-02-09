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

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct ExtenderProvidedPropertyAttribute_t3223729015;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t791831889;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.ExtenderProvidedPropertyAttribute::.ctor()
extern "C"  void ExtenderProvidedPropertyAttribute__ctor_m3824108456 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ExtenderProvidedPropertyAttribute System.ComponentModel.ExtenderProvidedPropertyAttribute::CreateAttribute(System.ComponentModel.PropertyDescriptor,System.ComponentModel.IExtenderProvider,System.Type)
extern "C"  ExtenderProvidedPropertyAttribute_t3223729015 * ExtenderProvidedPropertyAttribute_CreateAttribute_m800649811 (Il2CppObject * __this /* static, unused */, PropertyDescriptor_t4250402154 * ___extenderProperty0, Il2CppObject * ___provider1, Type_t * ___receiverType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::get_ExtenderProperty()
extern "C"  PropertyDescriptor_t4250402154 * ExtenderProvidedPropertyAttribute_get_ExtenderProperty_m1313611827 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::get_Provider()
extern "C"  Il2CppObject * ExtenderProvidedPropertyAttribute_get_Provider_m636329361 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::get_ReceiverType()
extern "C"  Type_t * ExtenderProvidedPropertyAttribute_get_ReceiverType_m2899934136 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExtenderProvidedPropertyAttribute::IsDefaultAttribute()
extern "C"  bool ExtenderProvidedPropertyAttribute_IsDefaultAttribute_m1613285867 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExtenderProvidedPropertyAttribute::Equals(System.Object)
extern "C"  bool ExtenderProvidedPropertyAttribute_Equals_m245393507 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ExtenderProvidedPropertyAttribute::GetHashCode()
extern "C"  int32_t ExtenderProvidedPropertyAttribute_GetHashCode_m1224127109 (ExtenderProvidedPropertyAttribute_t3223729015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
