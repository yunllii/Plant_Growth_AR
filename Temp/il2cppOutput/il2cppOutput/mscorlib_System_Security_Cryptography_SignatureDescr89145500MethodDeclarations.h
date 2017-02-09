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

// System.Security.Cryptography.SignatureDescription
struct SignatureDescription_t89145500;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_t3580832979;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Security.Cryptography.AsymmetricSignatureFormatter
struct AsymmetricSignatureFormatter_t4058014248;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlg784058677.h"

// System.Void System.Security.Cryptography.SignatureDescription::.ctor()
extern "C"  void SignatureDescription__ctor_m2946544073 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::.ctor(System.Security.SecurityElement)
extern "C"  void SignatureDescription__ctor_m2840553472 (SignatureDescription_t89145500 * __this, SecurityElement_t2325568386 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_DeformatterAlgorithm()
extern "C"  String_t* SignatureDescription_get_DeformatterAlgorithm_m296623579 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_DeformatterAlgorithm(System.String)
extern "C"  void SignatureDescription_set_DeformatterAlgorithm_m928863994 (SignatureDescription_t89145500 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_DigestAlgorithm()
extern "C"  String_t* SignatureDescription_get_DigestAlgorithm_m2070496050 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_DigestAlgorithm(System.String)
extern "C"  void SignatureDescription_set_DigestAlgorithm_m3219799565 (SignatureDescription_t89145500 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_FormatterAlgorithm()
extern "C"  String_t* SignatureDescription_get_FormatterAlgorithm_m223531288 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_FormatterAlgorithm(System.String)
extern "C"  void SignatureDescription_set_FormatterAlgorithm_m824893069 (SignatureDescription_t89145500 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_KeyAlgorithm()
extern "C"  String_t* SignatureDescription_get_KeyAlgorithm_m2240904425 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_KeyAlgorithm(System.String)
extern "C"  void SignatureDescription_set_KeyAlgorithm_m3161399966 (SignatureDescription_t89145500 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricSignatureDeformatter System.Security.Cryptography.SignatureDescription::CreateDeformatter(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  AsymmetricSignatureDeformatter_t3580832979 * SignatureDescription_CreateDeformatter_m1008686665 (SignatureDescription_t89145500 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.SignatureDescription::CreateDigest()
extern "C"  HashAlgorithm_t2624936259 * SignatureDescription_CreateDigest_m654105268 (SignatureDescription_t89145500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricSignatureFormatter System.Security.Cryptography.SignatureDescription::CreateFormatter(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  AsymmetricSignatureFormatter_t4058014248 * SignatureDescription_CreateFormatter_m451639013 (SignatureDescription_t89145500 * __this, AsymmetricAlgorithm_t784058677 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
