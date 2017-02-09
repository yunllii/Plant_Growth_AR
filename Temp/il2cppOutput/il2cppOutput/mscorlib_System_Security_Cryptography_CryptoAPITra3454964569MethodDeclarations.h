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

// System.Security.Cryptography.CryptoAPITransform
struct CryptoAPITransform_t3454964569;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Security.Cryptography.CryptoAPITransform::.ctor()
extern "C"  void CryptoAPITransform__ctor_m204773722 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::System.IDisposable.Dispose()
extern "C"  void CryptoAPITransform_System_IDisposable_Dispose_m4229618855 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoAPITransform::get_CanReuseTransform()
extern "C"  bool CryptoAPITransform_get_CanReuseTransform_m2769446625 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoAPITransform::get_CanTransformMultipleBlocks()
extern "C"  bool CryptoAPITransform_get_CanTransformMultipleBlocks_m2966244675 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::get_InputBlockSize()
extern "C"  int32_t CryptoAPITransform_get_InputBlockSize_m3829506453 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.CryptoAPITransform::get_KeyHandle()
extern "C"  IntPtr_t CryptoAPITransform_get_KeyHandle_m1914173285 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::get_OutputBlockSize()
extern "C"  int32_t CryptoAPITransform_get_OutputBlockSize_m3338764706 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Clear()
extern "C"  void CryptoAPITransform_Clear_m3690901249 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Dispose(System.Boolean)
extern "C"  void CryptoAPITransform_Dispose_m419232678 (CryptoAPITransform_t3454964569 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoAPITransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CryptoAPITransform_TransformBlock_m3884401554 (CryptoAPITransform_t3454964569 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t3397334013* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoAPITransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CryptoAPITransform_TransformFinalBlock_m671516700 (CryptoAPITransform_t3454964569 * __this, ByteU5BU5D_t3397334013* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoAPITransform::Reset()
extern "C"  void CryptoAPITransform_Reset_m2814610121 (CryptoAPITransform_t3454964569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
