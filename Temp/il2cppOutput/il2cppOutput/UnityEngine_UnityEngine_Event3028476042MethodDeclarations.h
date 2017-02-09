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

// UnityEngine.Event
struct Event_t3028476042;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
struct Event_t3028476042_marshaled_pinvoke;
struct Event_t3028476042_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_EventType3919834026.h"
#include "UnityEngine_UnityEngine_EventModifiers2690251474.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Event3028476042.h"

// System.Void UnityEngine.Event::.ctor()
extern "C"  void Event__ctor_m4174297401 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C"  void Event__ctor_m3375547476 (Event_t3028476042 * __this, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C"  void Event_Finalize_m3215242047 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C"  Vector2_t2243707579  Event_get_mousePosition_m3789571399 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C"  Vector2_t2243707579  Event_get_delta_m2710333371 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_shift()
extern "C"  bool Event_get_shift_m1229469022 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_alt()
extern "C"  bool Event_get_alt_m2170452849 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C"  Event_t3028476042 * Event_get_current_m2901774193 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
extern "C"  void Event_Internal_MakeMasterEventCurrent_m1829330051 (Il2CppObject * __this /* static, unused */, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C"  bool Event_get_isKey_m1145918225 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C"  bool Event_get_isMouse_m569219555 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
extern "C"  Event_t3028476042 * Event_KeyboardEvent_m1089796218 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C"  int32_t Event_GetHashCode_m2214628668 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C"  bool Event_Equals_m57747812 (Event_t3028476042 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C"  String_t* Event_ToString_m2977598998 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C"  void Event_Use_m3575594482 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init(System.Int32)
extern "C"  void Event_Init_m3901382626 (Event_t3028476042 * __this, int32_t ___displayIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C"  void Event_Cleanup_m1195902101 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C"  int32_t Event_get_rawType_m1373640154 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C"  int32_t Event_get_type_m2426033198 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
extern "C"  void Event_set_type_m4059414571 (Event_t3028476042 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C"  int32_t Event_GetTypeForControl_m3906355766 (Event_t3028476042 * __this, int32_t ___controlID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMousePosition_m38523489 (Event_t3028476042 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMouseDelta_m2840326024 (Event_t3028476042 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C"  int32_t Event_get_modifiers_m430092210 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
extern "C"  void Event_set_modifiers_m2565042639 (Event_t3028476042 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C"  int32_t Event_get_clickCount_m2139778827 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C"  Il2CppChar Event_get_character_m3740896233 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_character(System.Char)
extern "C"  void Event_set_character_m2479063678 (Event_t3028476042 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C"  String_t* Event_get_commandName_m4234691381 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C"  int32_t Event_get_keyCode_m3364681288 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
extern "C"  void Event_set_keyCode_m1893308983 (Event_t3028476042 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C"  void Event_Internal_SetNativeEvent_m1899228752 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C"  void Event_set_displayIndex_m3631666901 (Event_t3028476042 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_Use()
extern "C"  void Event_Internal_Use_m1591831288 (Event_t3028476042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C"  bool Event_PopEvent_m1952528237 (Il2CppObject * __this /* static, unused */, Event_t3028476042 * ___outEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Event_t3028476042;
struct Event_t3028476042_marshaled_pinvoke;

extern "C" void Event_t3028476042_marshal_pinvoke(const Event_t3028476042& unmarshaled, Event_t3028476042_marshaled_pinvoke& marshaled);
extern "C" void Event_t3028476042_marshal_pinvoke_back(const Event_t3028476042_marshaled_pinvoke& marshaled, Event_t3028476042& unmarshaled);
extern "C" void Event_t3028476042_marshal_pinvoke_cleanup(Event_t3028476042_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Event_t3028476042;
struct Event_t3028476042_marshaled_com;

extern "C" void Event_t3028476042_marshal_com(const Event_t3028476042& unmarshaled, Event_t3028476042_marshaled_com& marshaled);
extern "C" void Event_t3028476042_marshal_com_back(const Event_t3028476042_marshaled_com& marshaled, Event_t3028476042& unmarshaled);
extern "C" void Event_t3028476042_marshal_com_cleanup(Event_t3028476042_marshaled_com& marshaled);
