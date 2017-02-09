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

// System.IO.FileInfo
struct FileInfo_t3153503742;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.IO.StreamWriter
struct StreamWriter_t3858580635;
// System.IO.FileStream
struct FileStream_t1695958676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_IO_FileMode236403845.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"
#include "mscorlib_System_IO_FileShare3362491215.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m2605645233 (FileInfo_t3153503742 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileInfo__ctor_m2015269278 (FileInfo_t3153503742 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C"  void FileInfo_InternalRefresh_m2353685769 (FileInfo_t3153503742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C"  bool FileInfo_get_Exists_m1446268948 (FileInfo_t3153503742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::CreateText()
extern "C"  StreamWriter_t3858580635 * FileInfo_CreateText_m2386182501 (FileInfo_t3153503742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::AppendText()
extern "C"  StreamWriter_t3858580635 * FileInfo_AppendText_m2994290431 (FileInfo_t3153503742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess)
extern "C"  FileStream_t1695958676 * FileInfo_Open_m2817869190 (FileInfo_t3153503742 * __this, int32_t ___mode0, int32_t ___access1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  FileStream_t1695958676 * FileInfo_Open_m1885466120 (FileInfo_t3153503742 * __this, int32_t ___mode0, int32_t ___access1, int32_t ___share2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C"  String_t* FileInfo_ToString_m2424440748 (FileInfo_t3153503742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
