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

// AuthenticationValues
struct AuthenticationValues_t1430961670;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_CustomAuthenticationType1962747993.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m358544855 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m3331639617 (AuthenticationValues_t1430961670 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CustomAuthenticationType AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m3661046436 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthType(CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m969811517 (AuthenticationValues_t1430961670 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m1281843739 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m3676064318 (AuthenticationValues_t1430961670 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
extern "C"  Il2CppObject * AuthenticationValues_get_AuthPostData_m230043203 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m2383209148 (AuthenticationValues_t1430961670 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m176581012 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m3340785387 (AuthenticationValues_t1430961670 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m2035047487 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m2599939396 (AuthenticationValues_t1430961670 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m3579715155 (AuthenticationValues_t1430961670 * __this, String_t* ___stringData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m1816497780 (AuthenticationValues_t1430961670 * __this, ByteU5BU5D_t3397334013* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m2866787887 (AuthenticationValues_t1430961670 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m1866283008 (AuthenticationValues_t1430961670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
