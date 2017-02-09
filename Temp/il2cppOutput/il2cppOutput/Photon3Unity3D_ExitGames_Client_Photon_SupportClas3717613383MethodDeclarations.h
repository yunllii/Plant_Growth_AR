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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t2699667469;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t1485000104;
// System.Exception
struct Exception_t1927440687;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C"  uint32_t SupportClass_CalculateCrc_m4188387020 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C"  List_1_t2699667469 * SupportClass_GetMethods_m1398656563 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C"  int32_t SupportClass_GetTickCount_m1913276701 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
extern "C"  void SupportClass_CallInBackground_m3332443313 (Il2CppObject * __this /* static, unused */, Func_1_t1485000104 * ___myThread0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
extern "C"  void SupportClass_CallInBackground_m4261408808 (Il2CppObject * __this /* static, unused */, Func_1_t1485000104 * ___myThread0, int32_t ___millisecondsInterval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C"  void SupportClass_WriteStackTrace_m3638754286 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___throwable0, TextWriter_t4027217640 * ___stream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C"  void SupportClass_WriteStackTrace_m1761394001 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___throwable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C"  String_t* SupportClass_DictionaryToString_m3993223901 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C"  String_t* SupportClass_DictionaryToString_m968189500 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___dictionary0, bool ___includeTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C"  void SupportClass__cctor_m300631820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
