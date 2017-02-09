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

// System.ComponentModel.Container
struct Container_t3759338679;
// System.ComponentModel.ComponentCollection
struct ComponentCollection_t737017907;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.String
struct String_t;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.Container::.ctor()
extern "C"  void Container__ctor_m3809595412 (Container_t3759338679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentCollection System.ComponentModel.Container::get_Components()
extern "C"  ComponentCollection_t737017907 * Container_get_Components_m2879195808 (Container_t3759338679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Add(System.ComponentModel.IComponent)
extern "C"  void Container_Add_m3870961254 (Container_t3759338679 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Add(System.ComponentModel.IComponent,System.String)
extern "C"  void Container_Add_m3046114174 (Container_t3759338679 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::ValidateName(System.ComponentModel.IComponent,System.String)
extern "C"  void Container_ValidateName_m79619278 (Container_t3759338679 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Container::CreateSite(System.ComponentModel.IComponent,System.String)
extern "C"  Il2CppObject * Container_CreateSite_m3785132616 (Container_t3759338679 * __this, Il2CppObject * ___component0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Dispose()
extern "C"  void Container_Dispose_m1555239795 (Container_t3759338679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Dispose(System.Boolean)
extern "C"  void Container_Dispose_m2204467520 (Container_t3759338679 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Finalize()
extern "C"  void Container_Finalize_m1376041556 (Container_t3759338679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Container::GetService(System.Type)
extern "C"  Il2CppObject * Container_GetService_m690260729 (Container_t3759338679 * __this, Type_t * ___service0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Remove(System.ComponentModel.IComponent)
extern "C"  void Container_Remove_m462894385 (Container_t3759338679 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::Remove(System.ComponentModel.IComponent,System.Boolean)
extern "C"  void Container_Remove_m1746526978 (Container_t3759338679 * __this, Il2CppObject * ___component0, bool ___unsite1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Container::RemoveWithoutUnsiting(System.ComponentModel.IComponent)
extern "C"  void Container_RemoveWithoutUnsiting_m2750265182 (Container_t3759338679 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
