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

// System.ComponentModel.Container/DefaultSite
struct DefaultSite_t2367623411;
// System.String
struct String_t;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.ComponentModel.Container
struct Container_t3759338679;
// System.ComponentModel.IContainer
struct IContainer_t3025744548;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_ComponentModel_Container3759338679.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.Container/DefaultSite::.ctor(System.String,System.ComponentModel.IComponent,System.ComponentModel.Container)
extern "C"  void DefaultSite__ctor_m2031340586 (DefaultSite_t2367623411 * __this, String_t* ___name0, Il2CppObject * ___component1, Container_t3759338679 * ___container2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.Container/DefaultSite::get_Component()
extern "C"  Il2CppObject * DefaultSite_get_Component_m1021638141 (DefaultSite_t2367623411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IContainer System.ComponentModel.Container/DefaultSite::get_Container()
extern "C"  Il2CppObject * DefaultSite_get_Container_m3878079453 (DefaultSite_t2367623411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Container/DefaultSite::get_DesignMode()
extern "C"  bool DefaultSite_get_DesignMode_m3231266575 (DefaultSite_t2367623411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Container/DefaultSite::get_Name()
extern "C"  String_t* DefaultSite_get_Name_m326963886 (DefaultSite_t2367623411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container/DefaultSite::set_Name(System.String)
extern "C"  void DefaultSite_set_Name_m527603103 (DefaultSite_t2367623411 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Container/DefaultSite::GetService(System.Type)
extern "C"  Il2CppObject * DefaultSite_GetService_m1397976762 (DefaultSite_t2367623411 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
