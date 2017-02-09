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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3749827553;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Object
struct Il2CppObject;
// System.EventHandler
struct EventHandler_t277755526;
// System.Collections.IList
struct IList_t3321498491;
// System.Type
struct Type_t;
// System.EventArgs
struct EventArgs_t3289624707;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_MemberDescriptor3749827553.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_DesignerSerialization3751360903.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C"  void PropertyDescriptor__ctor_m1123223921 (PropertyDescriptor_t4250402154 * __this, MemberDescriptor_t3749827553 * ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m2132918966 (PropertyDescriptor_t4250402154 * __this, MemberDescriptor_t3749827553 * ___reference0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m3663832484 (PropertyDescriptor_t4250402154 * __this, String_t* ___name0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::get_Converter()
extern "C"  TypeConverter_t745995970 * PropertyDescriptor_get_Converter_m4108251290 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_IsLocalizable()
extern "C"  bool PropertyDescriptor_get_IsLocalizable_m652311662 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_SupportsChangeEvents()
extern "C"  bool PropertyDescriptor_get_SupportsChangeEvents_m1973178527 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.PropertyDescriptor::get_SerializationVisibility()
extern "C"  int32_t PropertyDescriptor_get_SerializationVisibility_m1692726081 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::AddValueChanged(System.Object,System.EventHandler)
extern "C"  void PropertyDescriptor_AddValueChanged_m2927522944 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___component0, EventHandler_t277755526 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::RemoveValueChanged(System.Object,System.EventHandler)
extern "C"  void PropertyDescriptor_RemoveValueChanged_m933814077 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___component0, EventHandler_t277755526 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void PropertyDescriptor_FillAttributes_m3024986576 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C"  Il2CppObject * PropertyDescriptor_GetInvocationTarget_m397250922 (PropertyDescriptor_t4250402154 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.ComponentModel.PropertyDescriptor::GetValueChangedHandler(System.Object)
extern "C"  EventHandler_t277755526 * PropertyDescriptor_GetValueChangedHandler_m2204012694 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::OnValueChanged(System.Object,System.EventArgs)
extern "C"  void PropertyDescriptor_OnValueChanged_m4195180065 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___component0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::CreateInstance(System.Type)
extern "C"  Il2CppObject * PropertyDescriptor_CreateInstance_m649518206 (PropertyDescriptor_t4250402154 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C"  bool PropertyDescriptor_Equals_m4086017300 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties()
extern "C"  PropertyDescriptorCollection_t3166009492 * PropertyDescriptor_GetChildProperties_m3665779456 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3166009492 * PropertyDescriptor_GetChildProperties_m2907048464 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * PropertyDescriptor_GetChildProperties_m1558570863 (PropertyDescriptor_t4250402154 * __this, AttributeU5BU5D_t4255796347* ___filter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C"  int32_t PropertyDescriptor_GetHashCode_m3169280040 (PropertyDescriptor_t4250402154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * PropertyDescriptor_GetChildProperties_m2421426401 (PropertyDescriptor_t4250402154 * __this, Il2CppObject * ___instance0, AttributeU5BU5D_t4255796347* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetEditor(System.Type)
extern "C"  Il2CppObject * PropertyDescriptor_GetEditor_m853766962 (PropertyDescriptor_t4250402154 * __this, Type_t * ___editorBaseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyDescriptor::GetTypeFromName(System.String)
extern "C"  Type_t * PropertyDescriptor_GetTypeFromName_m2067954802 (PropertyDescriptor_t4250402154 * __this, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
