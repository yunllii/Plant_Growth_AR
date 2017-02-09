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

// System.ComponentModel.Info
struct Info_t42715200;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3053042509;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t962731901;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C"  void Info__ctor_m2144258930 (Info_t42715200 * __this, Type_t * ___infoType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C"  Type_t * Info_get_InfoType_m47041598 (Info_t42715200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.Info::GetEvents(System.Attribute[])
extern "C"  EventDescriptorCollection_t3053042509 * Info_GetEvents_m2394525404 (Info_t42715200 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * Info_GetProperties_m11615775 (Info_t42715200 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.Info::GetDefaultEvent()
extern "C"  EventDescriptor_t962731901 * Info_GetDefaultEvent_m2843892993 (Info_t42715200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::GetDefaultProperty()
extern "C"  PropertyDescriptor_t4250402154 * Info_GetDefaultProperty_m3797314389 (Info_t42715200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C"  AttributeCollection_t1925812292 * Info_GetAttributes_m911936323 (Info_t42715200 * __this, Il2CppObject * ___comp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
