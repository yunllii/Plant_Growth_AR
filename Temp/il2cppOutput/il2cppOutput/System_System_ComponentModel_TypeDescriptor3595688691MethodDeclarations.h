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

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t3595688691;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t456069287;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.IServiceProvider
struct IServiceProvider_t2397848447;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.ComponentModel.Design.IDesigner
struct IDesigner_t587069890;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t962731901;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3053042509;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t2743332604;
// System.Collections.IList
struct IList_t3321498491;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t630243512;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.Module
struct Module_t4282841206;
// System.EventArgs
struct EventArgs_t3289624707;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t2742875487;
// System.ComponentModel.TypeInfo
struct TypeInfo_t1029530608;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_RefreshEventHandler456069287.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "System_System_ComponentModel_TypeDescriptionProvid2438624375.h"
#include "mscorlib_System_Collections_Hashtable909839986.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_EventDescriptor962731901.h"
#include "System_System_ComponentModel_PropertyDescriptor4250402154.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_Module4282841206.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.ComponentModel.TypeDescriptor::.ctor()
extern "C"  void TypeDescriptor__ctor_m2442194586 (TypeDescriptor_t3595688691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m203489455 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::add_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C"  void TypeDescriptor_add_Refreshed_m678752622 (Il2CppObject * __this /* static, unused */, RefreshEventHandler_t456069287 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::remove_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C"  void TypeDescriptor_remove_Refreshed_m917891765 (Il2CppObject * __this /* static, unused */, RefreshEventHandler_t456069287 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern "C"  Type_t * TypeDescriptor_get_ComObjectType_m2976006721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Object,System.Attribute[])
extern "C"  TypeDescriptionProvider_t2438624375 * TypeDescriptor_AddAttributes_m1220706292 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Type,System.Attribute[])
extern "C"  TypeDescriptionProvider_t2438624375 * TypeDescriptor_AddAttributes_m1046245017 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C"  void TypeDescriptor_AddProvider_m3177922324 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t2438624375 * ___provider0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C"  void TypeDescriptor_AddProvider_m962586281 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t2438624375 * ___provider0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * TypeDescriptor_CreateInstance_m3295689922 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t1664964607* ___argTypes2, ObjectU5BU5D_t3614634134* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
extern "C"  void TypeDescriptor_AddEditorTable_m2075765613 (Il2CppObject * __this /* static, unused */, Type_t * ___editorBaseType0, Hashtable_t909839986 * ___table1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.IDesigner System.ComponentModel.TypeDescriptor::CreateDesigner(System.ComponentModel.IComponent,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_CreateDesigner_m2527995287 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___designerBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  EventDescriptor_t962731901 * TypeDescriptor_CreateEvent_m522135990 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4255796347* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C"  EventDescriptor_t962731901 * TypeDescriptor_CreateEvent_m2638287605 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, EventDescriptor_t962731901 * ___oldEventDescriptor1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.String,System.Type,System.Attribute[])
extern "C"  PropertyDescriptor_t4250402154 * TypeDescriptor_CreateProperty_m475907134 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, String_t* ___name1, Type_t * ___type2, AttributeU5BU5D_t4255796347* ___attributes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C"  PropertyDescriptor_t4250402154 * TypeDescriptor_CreateProperty_m6377708 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, PropertyDescriptor_t4250402154 * ___oldPropertyDescriptor1, AttributeU5BU5D_t4255796347* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t1925812292 * TypeDescriptor_GetAttributes_m164131000 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern "C"  AttributeCollection_t1925812292 * TypeDescriptor_GetAttributes_m4119245071 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern "C"  AttributeCollection_t1925812292 * TypeDescriptor_GetAttributes_m3427146896 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object)
extern "C"  String_t* TypeDescriptor_GetClassName_m1305164486 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object,System.Boolean)
extern "C"  String_t* TypeDescriptor_GetClassName_m1390072619 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object)
extern "C"  String_t* TypeDescriptor_GetComponentName_m92764133 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object,System.Boolean)
extern "C"  String_t* TypeDescriptor_GetComponentName_m3156783114 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetFullComponentName(System.Object)
extern "C"  String_t* TypeDescriptor_GetFullComponentName_m4231261826 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Type)
extern "C"  String_t* TypeDescriptor_GetClassName_m2692108253 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object)
extern "C"  TypeConverter_t745995970 * TypeDescriptor_GetConverter_m1302924816 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object,System.Boolean)
extern "C"  TypeConverter_t745995970 * TypeDescriptor_GetConverter_m2779430453 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t4252133567 * TypeDescriptor_get_DefaultConverters_m3008219029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t745995970 * TypeDescriptor_GetConverter_m1788154595 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1939082393 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Type)
extern "C"  EventDescriptor_t962731901 * TypeDescriptor_GetDefaultEvent_m1693368423 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object)
extern "C"  EventDescriptor_t962731901 * TypeDescriptor_GetDefaultEvent_m472929496 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object,System.Boolean)
extern "C"  EventDescriptor_t962731901 * TypeDescriptor_GetDefaultEvent_m828882457 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Type)
extern "C"  PropertyDescriptor_t4250402154 * TypeDescriptor_GetDefaultProperty_m1762081283 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object)
extern "C"  PropertyDescriptor_t4250402154 * TypeDescriptor_GetDefaultProperty_m536792450 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object,System.Boolean)
extern "C"  PropertyDescriptor_t4250402154 * TypeDescriptor_GetDefaultProperty_m1809345697 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateEditor(System.Type,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_CreateEditor_m63300832 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, Type_t * ___componentType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::FindEditorInTable(System.Type,System.Type,System.Collections.Hashtable)
extern "C"  Il2CppObject * TypeDescriptor_FindEditorInTable_m3240358244 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, Type_t * ___editorBaseType1, Hashtable_t909839986 * ___table2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Type,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m234699360 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, Type_t * ___editorBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m373912063 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___editorBaseType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type,System.Boolean)
extern "C"  Il2CppObject * TypeDescriptor_GetEditor_m1970038528 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, Type_t * ___editorBaseType1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object)
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m2337457302 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type)
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m3664649889 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[])
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m3439686245 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Boolean)
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m3860693779 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type,System.Attribute[])
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m3396583082 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[],System.Boolean)
extern "C"  EventDescriptorCollection_t3053042509 * TypeDescriptor_GetEvents_m914058784 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4255796347* ___attributes1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m4107809873 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m183619874 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m210621774 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m1462251275 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, AttributeU5BU5D_t4255796347* ___attributes1, bool ___noCustomTypeDesc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Boolean)
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m750902626 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, bool ___noCustomTypeDesc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeDescriptor_GetProperties_m1395858925 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, AttributeU5BU5D_t4255796347* ___attributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Object)
extern "C"  TypeDescriptionProvider_t2438624375 * TypeDescriptor_GetProvider_m2821922268 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
extern "C"  TypeDescriptionProvider_t2438624375 * TypeDescriptor_GetProvider_m274602785 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Object)
extern "C"  Type_t * TypeDescriptor_GetReflectionType_m3215174135 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern "C"  Type_t * TypeDescriptor_GetReflectionType_m1738748238 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::CreateAssociation(System.Object,System.Object)
extern "C"  void TypeDescriptor_CreateAssociation_m3571968413 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, Il2CppObject * ___secondary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetAssociation(System.Type,System.Object)
extern "C"  Il2CppObject * TypeDescriptor_GetAssociation_m307532215 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___primary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociation(System.Object,System.Object)
extern "C"  void TypeDescriptor_RemoveAssociation_m3677145491 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, Il2CppObject * ___secondary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociations(System.Object)
extern "C"  void TypeDescriptor_RemoveAssociations_m1842690968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___primary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C"  void TypeDescriptor_RemoveProvider_m3045930023 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t2438624375 * ___provider0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C"  void TypeDescriptor_RemoveProvider_m2837797626 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t2438624375 * ___provider0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>)
extern "C"  void TypeDescriptor_RemoveProvider_m2601761504 (Il2CppObject * __this /* static, unused */, TypeDescriptionProvider_t2438624375 * ___provider0, LinkedList_1_t2743332604 * ___plist1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern "C"  void TypeDescriptor_SortDescriptorArray_m3365993463 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___infos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::get_ComNativeDescriptorHandler()
extern "C"  Il2CppObject * TypeDescriptor_get_ComNativeDescriptorHandler_m371982138 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::set_ComNativeDescriptorHandler(System.ComponentModel.IComNativeDescriptorHandler)
extern "C"  void TypeDescriptor_set_ComNativeDescriptorHandler_m3106961645 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Assembly)
extern "C"  void TypeDescriptor_Refresh_m2828259501 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Module)
extern "C"  void TypeDescriptor_Refresh_m3292527813 (Il2CppObject * __this /* static, unused */, Module_t4282841206 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C"  void TypeDescriptor_Refresh_m1287836919 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern "C"  void TypeDescriptor_Refresh_m3055138534 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m2108589539 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t2742875487 * TypeDescriptor_GetComponentInfo_m296047307 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___com0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t1029530608 * TypeDescriptor_GetTypeInfo_m2320573979 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m3955750754 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
