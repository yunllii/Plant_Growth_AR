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

// System.Net.Configuration.AuthenticationModuleElementCollection
struct AuthenticationModuleElementCollection_t1084300802;
// System.Net.Configuration.AuthenticationModuleElement
struct AuthenticationModuleElement_t1426459758;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_AuthenticationModu1426459758.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::.ctor()
extern "C"  void AuthenticationModuleElementCollection__ctor_m2607493288 (AuthenticationModuleElementCollection_t1084300802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.Int32)
extern "C"  AuthenticationModuleElement_t1426459758 * AuthenticationModuleElementCollection_get_Item_m746622666 (AuthenticationModuleElementCollection_t1084300802 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_set_Item_m1651223829 (AuthenticationModuleElementCollection_t1084300802 * __this, int32_t ___index0, AuthenticationModuleElement_t1426459758 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.AuthenticationModuleElement System.Net.Configuration.AuthenticationModuleElementCollection::get_Item(System.String)
extern "C"  AuthenticationModuleElement_t1426459758 * AuthenticationModuleElementCollection_get_Item_m581656049 (AuthenticationModuleElementCollection_t1084300802 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::set_Item(System.String,System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_set_Item_m2271455010 (AuthenticationModuleElementCollection_t1084300802 * __this, String_t* ___name0, AuthenticationModuleElement_t1426459758 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Add(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_Add_m2017887365 (AuthenticationModuleElementCollection_t1084300802 * __this, AuthenticationModuleElement_t1426459758 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Clear()
extern "C"  void AuthenticationModuleElementCollection_Clear_m4084007605 (AuthenticationModuleElementCollection_t1084300802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.AuthenticationModuleElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t1776195828 * AuthenticationModuleElementCollection_CreateNewElement_m2316725320 (AuthenticationModuleElementCollection_t1084300802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.AuthenticationModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * AuthenticationModuleElementCollection_GetElementKey_m4234875393 (AuthenticationModuleElementCollection_t1084300802 * __this, ConfigurationElement_t1776195828 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.AuthenticationModuleElementCollection::IndexOf(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  int32_t AuthenticationModuleElementCollection_IndexOf_m2049002773 (AuthenticationModuleElementCollection_t1084300802 * __this, AuthenticationModuleElement_t1426459758 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.Net.Configuration.AuthenticationModuleElement)
extern "C"  void AuthenticationModuleElementCollection_Remove_m2829430364 (AuthenticationModuleElementCollection_t1084300802 * __this, AuthenticationModuleElement_t1426459758 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::Remove(System.String)
extern "C"  void AuthenticationModuleElementCollection_Remove_m3228318968 (AuthenticationModuleElementCollection_t1084300802 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.AuthenticationModuleElementCollection::RemoveAt(System.Int32)
extern "C"  void AuthenticationModuleElementCollection_RemoveAt_m2769128666 (AuthenticationModuleElementCollection_t1084300802 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
