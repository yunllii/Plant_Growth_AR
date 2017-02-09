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

// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.String
struct String_t;
// System.Security.AccessControl.CryptoKeySecurity
struct CryptoKeySecurity_t2531282292;
// System.Security.SecureString
struct SecureString_t412202620;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_AccessControl_CryptoKeySe2531282292.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Security_SecureString412202620.h"
#include "mscorlib_System_Security_Cryptography_CspProviderFl105264000.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C"  void CspParameters__ctor_m2480441577 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C"  void CspParameters__ctor_m3051314030 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C"  void CspParameters__ctor_m2546931874 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C"  void CspParameters__ctor_m3476491054 (CspParameters_t46065560 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, String_t* ___strContainerNameIn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String,System.Security.AccessControl.CryptoKeySecurity,System.IntPtr)
extern "C"  void CspParameters__ctor_m3640282048 (CspParameters_t46065560 * __this, int32_t ___providerType0, String_t* ___providerName1, String_t* ___keyContainerName2, CryptoKeySecurity_t2531282292 * ___cryptoKeySecurity3, IntPtr_t ___parentWindowHandle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String,System.Security.AccessControl.CryptoKeySecurity,System.Security.SecureString)
extern "C"  void CspParameters__ctor_m1837037465 (CspParameters_t46065560 * __this, int32_t ___providerType0, String_t* ___providerName1, String_t* ___keyContainerName2, CryptoKeySecurity_t2531282292 * ___cryptoKeySecurity3, SecureString_t412202620 * ___keyPassword4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C"  int32_t CspParameters_get_Flags_m3649573501 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C"  void CspParameters_set_Flags_m4131471722 (CspParameters_t46065560 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.CryptoKeySecurity System.Security.Cryptography.CspParameters::get_CryptoKeySecurity()
extern "C"  CryptoKeySecurity_t2531282292 * CspParameters_get_CryptoKeySecurity_m3544402185 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_CryptoKeySecurity(System.Security.AccessControl.CryptoKeySecurity)
extern "C"  void CspParameters_set_CryptoKeySecurity_m1970463950 (CspParameters_t46065560 * __this, CryptoKeySecurity_t2531282292 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Security.Cryptography.CspParameters::get_KeyPassword()
extern "C"  SecureString_t412202620 * CspParameters_get_KeyPassword_m809984826 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_KeyPassword(System.Security.SecureString)
extern "C"  void CspParameters_set_KeyPassword_m230722077 (CspParameters_t46065560 * __this, SecureString_t412202620 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.CspParameters::get_ParentWindowHandle()
extern "C"  IntPtr_t CspParameters_get_ParentWindowHandle_m3873584439 (CspParameters_t46065560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_ParentWindowHandle(System.IntPtr)
extern "C"  void CspParameters_set_ParentWindowHandle_m1877956618 (CspParameters_t46065560 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
