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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t2570125387;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.String
struct String_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t3321498491;
// System.Object
struct Il2CppObject;
// System.ComponentModel.Design.DesignerTransaction
struct DesignerTransaction_t3880697857;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Object2689449295.h"
#include "System_System_ComponentModel_Design_DesignerTransa3880697857.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C"  void ReflectionPropertyDescriptor__ctor_m3470958955 (ReflectionPropertyDescriptor_t2570125387 * __this, Type_t * ___componentType0, PropertyDescriptor_t4250402154 * ___oldPropertyDescriptor1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  void ReflectionPropertyDescriptor__ctor_m1333575103 (ReflectionPropertyDescriptor_t2570125387 * __this, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4255796347* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C"  void ReflectionPropertyDescriptor__ctor_m1753053247 (ReflectionPropertyDescriptor_t2570125387 * __this, PropertyInfo_t * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C"  PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m3038226927 (ReflectionPropertyDescriptor_t2570125387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_ComponentType_m1437835440 (ReflectionPropertyDescriptor_t2570125387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::get_IsReadOnly()
extern "C"  bool ReflectionPropertyDescriptor_get_IsReadOnly_m781577505 (ReflectionPropertyDescriptor_t2570125387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_PropertyType_m2835777682 (ReflectionPropertyDescriptor_t2570125387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void ReflectionPropertyDescriptor_FillAttributes_m2152568531 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReflectionPropertyDescriptor::GetValue(System.Object)
extern "C"  Il2CppObject * ReflectionPropertyDescriptor_GetValue_m3820506650 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.DesignerTransaction System.ComponentModel.ReflectionPropertyDescriptor::CreateTransaction(System.Object,System.String)
extern "C"  DesignerTransaction_t3880697857 * ReflectionPropertyDescriptor_CreateTransaction_m2579388831 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___obj0, String_t* ___description1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::EndTransaction(System.Object,System.ComponentModel.Design.DesignerTransaction,System.Object,System.Object,System.Boolean)
extern "C"  void ReflectionPropertyDescriptor_EndTransaction_m3208319666 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___obj0, DesignerTransaction_t3880697857 * ___tran1, Il2CppObject * ___oldValue2, Il2CppObject * ___newValue3, bool ___commit4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::InitAccessors()
extern "C"  void ReflectionPropertyDescriptor_InitAccessors_m3049337280 (ReflectionPropertyDescriptor_t2570125387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C"  void ReflectionPropertyDescriptor_SetValue_m1950517657 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___component0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.ReflectionPropertyDescriptor::FindPropertyMethod(System.Object,System.String)
extern "C"  MethodInfo_t * ReflectionPropertyDescriptor_FindPropertyMethod_m1893044057 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___o0, String_t* ___method_name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::ResetValue(System.Object)
extern "C"  void ReflectionPropertyDescriptor_ResetValue_m848871484 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::CanResetValue(System.Object)
extern "C"  bool ReflectionPropertyDescriptor_CanResetValue_m2940039876 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C"  bool ReflectionPropertyDescriptor_ShouldSerializeValue_m278103856 (ReflectionPropertyDescriptor_t2570125387 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
