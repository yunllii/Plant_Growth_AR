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

// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PhotonView[]
struct PhotonViewU5BU5D_t1020776144;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PhotonView
struct PhotonView_t899863581;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t995404622;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Reflection.ParameterInfo[] Extensions::GetCachedParemeters(System.Reflection.MethodInfo)
extern "C"  ParameterInfoU5BU5D_t2275869610* Extensions_GetCachedParemeters_m2468724828 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___mo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
extern "C"  PhotonViewU5BU5D_t1020776144* Extensions_GetPhotonViewsInChildren_m3910642457 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
extern "C"  PhotonView_t899863581 * Extensions_GetPhotonView_m2197044566 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Extensions_AlmostEquals_m1841100203 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___target0, Vector3_t2243707580  ___second1, float ___sqrMagnitudePrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool Extensions_AlmostEquals_m1619190059 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___target0, Vector2_t2243707579  ___second1, float ___sqrMagnitudePrecision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  bool Extensions_AlmostEquals_m3443331007 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___target0, Quaternion_t4030073918  ___second1, float ___maxAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
extern "C"  bool Extensions_AlmostEquals_m2858842059 (Il2CppObject * __this /* static, unused */, float ___target0, float ___second1, float ___floatDiff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_Merge_m2734112225 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_MergeStringKeys_m2775932508 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, Il2CppObject * ___addHash1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C"  String_t* Extensions_ToStringFull_m494436720 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___origin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Object[])
extern "C"  String_t* Extensions_ToStringFull_m3538286777 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C"  Hashtable_t995404622 * Extensions_StripToStringKeys_m2363316021 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C"  void Extensions_StripKeysWithNullValues_m3622109825 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___original0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
extern "C"  bool Extensions_Contains_m4150929930 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___target0, int32_t ___nr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::.cctor()
extern "C"  void Extensions__cctor_m1489472364 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
