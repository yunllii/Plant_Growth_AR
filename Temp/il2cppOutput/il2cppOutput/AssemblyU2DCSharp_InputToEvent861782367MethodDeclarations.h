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

// InputToEvent
struct InputToEvent_t861782367;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void InputToEvent::.ctor()
extern "C"  void InputToEvent__ctor_m4233705342 (InputToEvent_t861782367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern "C"  GameObject_t1756533147 * InputToEvent_get_goPointedAt_m1650439570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern "C"  void InputToEvent_set_goPointedAt_m613172647 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C"  Vector2_t2243707579  InputToEvent_get_DragVector_m4067308153 (InputToEvent_t861782367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
extern "C"  void InputToEvent_Start_m668292938 (InputToEvent_t861782367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
extern "C"  void InputToEvent_Update_m2362411815 (InputToEvent_t861782367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C"  void InputToEvent_Press_m124478341 (InputToEvent_t861782367 * __this, Vector2_t2243707579  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C"  void InputToEvent_Release_m3943614859 (InputToEvent_t861782367 * __this, Vector2_t2243707579  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern "C"  GameObject_t1756533147 * InputToEvent_RaycastObject_m609350363 (InputToEvent_t861782367 * __this, Vector2_t2243707579  ___screenPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
