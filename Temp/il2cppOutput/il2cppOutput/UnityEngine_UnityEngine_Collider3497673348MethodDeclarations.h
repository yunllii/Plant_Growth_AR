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

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t4233889191 * Collider_get_attachedRigidbody_m3279305420 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3033363703  Collider_get_bounds_m3534458178 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m4035290675 (Collider_t3497673348 * __this, Bounds_t3033363703 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
