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

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3531341937;
// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Security_Cryptography_CryptoStream1337713182.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
extern "C"  void CryptoStream__ctor_m2578098817 (CryptoStream_t3531341937 * __this, Stream_t3255436806 * ___stream0, Il2CppObject * ___transform1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Finalize()
extern "C"  void CryptoStream_Finalize_m3494798890 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanRead()
extern "C"  bool CryptoStream_get_CanRead_m2989929287 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanSeek()
extern "C"  bool CryptoStream_get_CanSeek_m2364927465 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.CryptoStream::get_CanWrite()
extern "C"  bool CryptoStream_get_CanWrite_m2068770264 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
extern "C"  int64_t CryptoStream_get_Length_m731662586 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::get_Position()
extern "C"  int64_t CryptoStream_get_Position_m3556964481 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
extern "C"  void CryptoStream_set_Position_m2122575270 (CryptoStream_t3531341937 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Clear()
extern "C"  void CryptoStream_Clear_m2175234329 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Close()
extern "C"  void CryptoStream_Close_m198952166 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.CryptoStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CryptoStream_Read_m3035103951 (CryptoStream_t3531341937 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void CryptoStream_Write_m3399405394 (CryptoStream_t3531341937 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Flush()
extern "C"  void CryptoStream_Flush_m199151288 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
extern "C"  void CryptoStream_FlushFinalBlock_m3450379637 (CryptoStream_t3531341937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t CryptoStream_Seek_m1356606098 (CryptoStream_t3531341937 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::SetLength(System.Int64)
extern "C"  void CryptoStream_SetLength_m486722030 (CryptoStream_t3531341937 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::Dispose(System.Boolean)
extern "C"  void CryptoStream_Dispose_m1372459454 (CryptoStream_t3531341937 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
