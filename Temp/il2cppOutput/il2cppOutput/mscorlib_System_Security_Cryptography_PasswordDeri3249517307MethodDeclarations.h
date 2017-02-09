﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.PasswordDeriveBytes
struct PasswordDeriveBytes_t3249517307;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_CspParameters46065560.h"

// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[])
extern "C"  void PasswordDeriveBytes__ctor_m2053759329 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___strPassword0, ByteU5BU5D_t3397334013* ___rgbSalt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m3640088250 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___strPassword0, ByteU5BU5D_t3397334013* ___rgbSalt1, CspParameters_t46065560 * ___cspParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes__ctor_m4369188 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___strPassword0, ByteU5BU5D_t3397334013* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.String,System.Byte[],System.String,System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m3351289563 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___strPassword0, ByteU5BU5D_t3397334013* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, CspParameters_t46065560 * ___cspParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[])
extern "C"  void PasswordDeriveBytes__ctor_m2696066200 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m2379773481 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, CspParameters_t46065560 * ___cspParams2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes__ctor_m2755997887 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, String_t* ___hashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::.ctor(System.Byte[],System.Byte[],System.String,System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void PasswordDeriveBytes__ctor_m333258496 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, String_t* ___hashName2, int32_t ___iterations3, CspParameters_t46065560 * ___cspParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Finalize()
extern "C"  void PasswordDeriveBytes_Finalize_m3921451370 (PasswordDeriveBytes_t3249517307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Prepare(System.String,System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes_Prepare_m1163516827 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___strPassword0, ByteU5BU5D_t3397334013* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Prepare(System.Byte[],System.Byte[],System.String,System.Int32)
extern "C"  void PasswordDeriveBytes_Prepare_m801994832 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___rgbSalt1, String_t* ___strHashName2, int32_t ___iterations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.PasswordDeriveBytes::get_HashName()
extern "C"  String_t* PasswordDeriveBytes_get_HashName_m2463565217 (PasswordDeriveBytes_t3249517307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_HashName(System.String)
extern "C"  void PasswordDeriveBytes_set_HashName_m3563842676 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.PasswordDeriveBytes::get_IterationCount()
extern "C"  int32_t PasswordDeriveBytes_get_IterationCount_m2809426235 (PasswordDeriveBytes_t3249517307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_IterationCount(System.Int32)
extern "C"  void PasswordDeriveBytes_set_IterationCount_m2967445890 (PasswordDeriveBytes_t3249517307 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::get_Salt()
extern "C"  ByteU5BU5D_t3397334013* PasswordDeriveBytes_get_Salt_m2908056539 (PasswordDeriveBytes_t3249517307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::set_Salt(System.Byte[])
extern "C"  void PasswordDeriveBytes_set_Salt_m4123487576 (PasswordDeriveBytes_t3249517307 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::CryptDeriveKey(System.String,System.String,System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* PasswordDeriveBytes_CryptDeriveKey_m1498007206 (PasswordDeriveBytes_t3249517307 * __this, String_t* ___algname0, String_t* ___alghashname1, int32_t ___keySize2, ByteU5BU5D_t3397334013* ___rgbIV3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.PasswordDeriveBytes::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PasswordDeriveBytes_GetBytes_m3352191854 (PasswordDeriveBytes_t3249517307 * __this, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.PasswordDeriveBytes::Reset()
extern "C"  void PasswordDeriveBytes_Reset_m2488772989 (PasswordDeriveBytes_t3249517307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
