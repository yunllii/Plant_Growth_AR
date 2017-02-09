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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"
#include "mscorlib_System_Security_Cryptography_DSA903174880.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m3103589321 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m27102829 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_GetBytesLE_m4026062242 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_Trim_m2977625850 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPrivateKeyBlob_m2742962763 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t903174880 * CryptoConvert_FromCapiPrivateKeyBlobDSA_m2198343947 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPrivateKeyBlob_m850465939 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.DSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPrivateKeyBlob_m4231459417 (Il2CppObject * __this /* static, unused */, DSA_t903174880 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPublicKeyBlob_m547807126 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiPublicKeyBlob_m812595523 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t903174880 * CryptoConvert_FromCapiPublicKeyBlobDSA_m3455917203 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPublicKeyBlob_m924651951 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.DSA)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiPublicKeyBlob_m924652153 (Il2CppObject * __this /* static, unused */, DSA_t903174880 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiKeyBlob_m2946005903 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t3719518354 * CryptoConvert_FromCapiKeyBlob_m3701215818 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[])
extern "C"  DSA_t903174880 * CryptoConvert_FromCapiKeyBlobDSA_m3722938907 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t903174880 * CryptoConvert_FromCapiKeyBlobDSA_m3029959018 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_ToCapiKeyBlob_m607484285 (Il2CppObject * __this /* static, unused */, RSA_t3719518354 * ___rsa0, bool ___includePrivateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C"  String_t* CryptoConvert_ToHex_m500253213 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C"  uint8_t CryptoConvert_FromHexChar_m954625599 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C"  ByteU5BU5D_t3397334013* CryptoConvert_FromHex_m883901244 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
