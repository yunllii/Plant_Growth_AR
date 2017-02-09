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

// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t1720788626;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t962731901;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3053042509;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"

// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern "C"  void CustomTypeDescriptor__ctor_m1465663759 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
extern "C"  void CustomTypeDescriptor__ctor_m2427014515 (CustomTypeDescriptor_t1720788626 * __this, Il2CppObject * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern "C"  AttributeCollection_t1925812292 * CustomTypeDescriptor_GetAttributes_m2992835346 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetClassName()
extern "C"  String_t* CustomTypeDescriptor_GetClassName_m4066446993 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetComponentName()
extern "C"  String_t* CustomTypeDescriptor_GetComponentName_m3878958578 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern "C"  TypeConverter_t745995970 * CustomTypeDescriptor_GetConverter_m1131351227 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultEvent()
extern "C"  EventDescriptor_t962731901 * CustomTypeDescriptor_GetDefaultEvent_m2852770795 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultProperty()
extern "C"  PropertyDescriptor_t4250402154 * CustomTypeDescriptor_GetDefaultProperty_m2562666651 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetEditor(System.Type)
extern "C"  Il2CppObject * CustomTypeDescriptor_GetEditor_m4063663148 (CustomTypeDescriptor_t1720788626 * __this, Type_t * ___editorBaseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents()
extern "C"  EventDescriptorCollection_t3053042509 * CustomTypeDescriptor_GetEvents_m1441541 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents(System.Attribute[])
extern "C"  EventDescriptorCollection_t3053042509 * CustomTypeDescriptor_GetEvents_m2741878838 (CustomTypeDescriptor_t1720788626 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties()
extern "C"  PropertyDescriptorCollection_t3166009492 * CustomTypeDescriptor_GetProperties_m2842388092 (CustomTypeDescriptor_t1720788626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * CustomTypeDescriptor_GetProperties_m3998461713 (CustomTypeDescriptor_t1720788626 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetPropertyOwner(System.ComponentModel.PropertyDescriptor)
extern "C"  Il2CppObject * CustomTypeDescriptor_GetPropertyOwner_m559413135 (CustomTypeDescriptor_t1720788626 * __this, PropertyDescriptor_t4250402154 * ___pd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
