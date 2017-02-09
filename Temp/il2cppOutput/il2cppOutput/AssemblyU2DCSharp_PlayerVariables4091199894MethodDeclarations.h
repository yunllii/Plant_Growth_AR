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

// PlayerVariables
struct PlayerVariables_t4091199894;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void PlayerVariables::.ctor()
extern "C"  void PlayerVariables__ctor_m3101706305 (PlayerVariables_t4091199894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PlayerVariables::GetColor(System.Int32)
extern "C"  Color_t2020392075  PlayerVariables_GetColor_m1915348402 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerVariables::GetColorName(System.Int32)
extern "C"  String_t* PlayerVariables_GetColorName_m920439989 (Il2CppObject * __this /* static, unused */, int32_t ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PlayerVariables::GetMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t193706927 * PlayerVariables_GetMaterial_m600371634 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___original0, int32_t ___playerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerVariables::.cctor()
extern "C"  void PlayerVariables__cctor_m1657838976 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
