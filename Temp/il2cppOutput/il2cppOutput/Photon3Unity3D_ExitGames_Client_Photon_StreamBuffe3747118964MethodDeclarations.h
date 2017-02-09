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

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_t3747118964;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Int32)
extern "C"  void StreamBuffer__ctor_m820055487 (StreamBuffer_t3747118964 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::.ctor(System.Byte[])
extern "C"  void StreamBuffer__ctor_m3740710497 (StreamBuffer_t3747118964 * __this, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::ToArray()
extern "C"  ByteU5BU5D_t3397334013* StreamBuffer_ToArray_m1319782770 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanRead()
extern "C"  bool StreamBuffer_get_CanRead_m2917919389 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanSeek()
extern "C"  bool StreamBuffer_get_CanSeek_m1989873739 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::get_CanWrite()
extern "C"  bool StreamBuffer_get_CanWrite_m3846004126 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::get_Length()
extern "C"  int64_t StreamBuffer_get_Length_m16216974 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::get_Position()
extern "C"  int64_t StreamBuffer_get_Position_m3219204927 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int64)
extern "C"  void StreamBuffer_set_Position_m2639509020 (StreamBuffer_t3747118964 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::Flush()
extern "C"  void StreamBuffer_Flush_m2446818746 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.StreamBuffer::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t StreamBuffer_Seek_m4261382794 (StreamBuffer_t3747118964 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::SetLength(System.Int64)
extern "C"  void StreamBuffer_SetLength_m2294375448 (StreamBuffer_t3747118964 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t StreamBuffer_Read_m1571261605 (StreamBuffer_t3747118964 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void StreamBuffer_Write_m554679980 (StreamBuffer_t3747118964 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::ReadByte()
extern "C"  int32_t StreamBuffer_ReadByte_m2035394556 (StreamBuffer_t3747118964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.StreamBuffer::WriteByte(System.Byte)
extern "C"  void StreamBuffer_WriteByte_m3695814304 (StreamBuffer_t3747118964 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.StreamBuffer::CheckSize(System.Int32)
extern "C"  bool StreamBuffer_CheckSize_m2107069836 (StreamBuffer_t3747118964 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
