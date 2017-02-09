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

// System.ComponentModel.Component
struct Component_t2826673791;
// System.EventHandler
struct EventHandler_t277755526;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.ComponentModel.IContainer
struct IContainer_t3025744548;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1298116880;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C"  void Component__ctor_m685180076 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C"  void Component_add_Disposed_m3101839878 (Component_t2826673791 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C"  void Component_remove_Disposed_m1095667957 (Component_t2826673791 * __this, EventHandler_t277755526 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern "C"  bool Component_get_CanRaiseEvents_m966378016 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C"  Il2CppObject * Component_get_Site_m3168465524 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::set_Site(System.ComponentModel.ISite)
extern "C"  void Component_set_Site_m1618259461 (Component_t2826673791 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IContainer System.ComponentModel.Component::get_Container()
extern "C"  Il2CppObject * Component_get_Container_m1820366468 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_DesignMode()
extern "C"  bool Component_get_DesignMode_m2150382222 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C"  EventHandlerList_t1298116880 * Component_get_Events_m1498771332 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C"  void Component_Finalize_m3915583340 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C"  void Component_Dispose_m3787380235 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C"  void Component_Dispose_m1758989928 (Component_t2826673791 * __this, bool ___release_all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Component::GetService(System.Type)
extern "C"  Il2CppObject * Component_GetService_m555916641 (Component_t2826673791 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C"  String_t* Component_ToString_m1082195383 (Component_t2826673791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
