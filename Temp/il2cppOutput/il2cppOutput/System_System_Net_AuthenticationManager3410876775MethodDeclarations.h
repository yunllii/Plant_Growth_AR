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

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Net.Authorization
struct Authorization_t1602399;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.Net.ICredentials
struct ICredentials_t3855617113;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t3093891015;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Net_WebRequest1365124353.h"

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C"  void AuthenticationManager__cctor_m910519704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C"  void AuthenticationManager_EnsureModules_m3945964554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.AuthenticationManager::get_RegisteredModules()
extern "C"  Il2CppObject * AuthenticationManager_get_RegisteredModules_m2646272569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Clear()
extern "C"  void AuthenticationManager_Clear_m145707020 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * AuthenticationManager_Authenticate_m1203560882 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, WebRequest_t1365124353 * ___request1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * AuthenticationManager_DoAuthenticate_m2946889617 (Il2CppObject * __this /* static, unused */, String_t* ___challenge0, WebRequest_t1365124353 * ___request1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t1602399 * AuthenticationManager_PreAuthenticate_m1303957643 (Il2CppObject * __this /* static, unused */, WebRequest_t1365124353 * ___request0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Register(System.Net.IAuthenticationModule)
extern "C"  void AuthenticationManager_Register_m3452654235 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___authenticationModule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.Net.IAuthenticationModule)
extern "C"  void AuthenticationManager_Unregister_m3448879164 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___authenticationModule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::DoUnregister(System.String,System.Boolean)
extern "C"  void AuthenticationManager_DoUnregister_m4026760359 (Il2CppObject * __this /* static, unused */, String_t* ___authenticationScheme0, bool ___throwEx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
