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

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t2915171657;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// System.Security.Cryptography.CspKeyContainerInfo
struct CspKeyContainerInfo_t2216101628;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters46065560.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1872138834.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C"  void DSACryptoServiceProvider__ctor_m701823690 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m235852859 (DSACryptoServiceProvider_t2915171657 * __this, CspParameters_t46065560 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void DSACryptoServiceProvider__ctor_m181065031 (DSACryptoServiceProvider_t2915171657 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m2374304492 (DSACryptoServiceProvider_t2915171657 * __this, int32_t ___dwKeySize0, CspParameters_t46065560 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C"  void DSACryptoServiceProvider__cctor_m4178234285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C"  void DSACryptoServiceProvider_Finalize_m1911772902 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSACryptoServiceProvider::get_KeyExchangeAlgorithm()
extern "C"  String_t* DSACryptoServiceProvider_get_KeyExchangeAlgorithm_m1067401205 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t DSACryptoServiceProvider_get_KeySize_m3258282267 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PersistKeyInCsp()
extern "C"  bool DSACryptoServiceProvider_get_PersistKeyInCsp_m2445082669 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::set_PersistKeyInCsp(System.Boolean)
extern "C"  void DSACryptoServiceProvider_set_PersistKeyInCsp_m1133663990 (DSACryptoServiceProvider_t2915171657 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool DSACryptoServiceProvider_get_PublicOnly_m998015514 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSACryptoServiceProvider::get_SignatureAlgorithm()
extern "C"  String_t* DSACryptoServiceProvider_get_SignatureAlgorithm_m3154691197 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_UseMachineKeyStore()
extern "C"  bool DSACryptoServiceProvider_get_UseMachineKeyStore_m526988509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::set_UseMachineKeyStore(System.Boolean)
extern "C"  void DSACryptoServiceProvider_set_UseMachineKeyStore_m2068073520 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t1872138834  DSACryptoServiceProvider_ExportParameters_m2503144019 (DSACryptoServiceProvider_t2915171657 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSACryptoServiceProvider_ImportParameters_m513997588 (DSACryptoServiceProvider_t2915171657 * __this, DSAParameters_t1872138834  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_CreateSignature_m469230785 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_SignData_m4232098512 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_SignData_m2703446354 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignData(System.IO.Stream)
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_SignData_m1530891890 (DSACryptoServiceProvider_t2915171657 * __this, Stream_t3255436806 * ___inputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::SignHash(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_SignHash_m4022298352 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifyData(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifyData_m19661041 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbData0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifyHash_m3839912849 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, String_t* ___str1, ByteU5BU5D_t3397334013* ___rgbSignature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifySignature_m1717508085 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, ByteU5BU5D_t3397334013* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void DSACryptoServiceProvider_Dispose_m3399776526 (DSACryptoServiceProvider_t2915171657 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void DSACryptoServiceProvider_OnKeyGenerated_m1573093697 (DSACryptoServiceProvider_t2915171657 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspKeyContainerInfo System.Security.Cryptography.DSACryptoServiceProvider::get_CspKeyContainerInfo()
extern "C"  CspKeyContainerInfo_t2216101628 * DSACryptoServiceProvider_get_CspKeyContainerInfo_m2849507319 (DSACryptoServiceProvider_t2915171657 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::ExportCspBlob(System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* DSACryptoServiceProvider_ExportCspBlob_m637981132 (DSACryptoServiceProvider_t2915171657 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportCspBlob(System.Byte[])
extern "C"  void DSACryptoServiceProvider_ImportCspBlob_m1292389391 (DSACryptoServiceProvider_t2915171657 * __this, ByteU5BU5D_t3397334013* ___keyBlob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
