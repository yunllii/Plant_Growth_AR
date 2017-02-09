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

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct RSAOAEPKeyExchangeDeformatter_t603155636;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::.ctor()
extern "C"  void RSAOAEPKeyExchangeDeformatter__ctor_m987273781 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeDeformatter__ctor_m2360233387 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::get_Parameters()
extern "C"  String_t* RSAOAEPKeyExchangeDeformatter_get_Parameters_m1661755391 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::set_Parameters(System.String)
extern "C"  void RSAOAEPKeyExchangeDeformatter_set_Parameters_m2547163020 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSAOAEPKeyExchangeDeformatter_DecryptKeyExchange_m2745016843 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, ByteU5BU5D_t3397334013* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeDeformatter_SetKey_m1847634280 (RSAOAEPKeyExchangeDeformatter_t603155636 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
