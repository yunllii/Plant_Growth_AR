#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputToEvent
struct  InputToEvent_t861782367  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t1756533147 * ___lastGo_2;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject_4;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t2243707579  ___pressedPosition_6;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t2243707579  ___currentPos_7;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging_8;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t189460977 * ___m_Camera_9;

public:
	inline static int32_t get_offset_of_lastGo_2() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___lastGo_2)); }
	inline GameObject_t1756533147 * get_lastGo_2() const { return ___lastGo_2; }
	inline GameObject_t1756533147 ** get_address_of_lastGo_2() { return &___lastGo_2; }
	inline void set_lastGo_2(GameObject_t1756533147 * value)
	{
		___lastGo_2 = value;
		Il2CppCodeGenWriteBarrier(&___lastGo_2, value);
	}

	inline static int32_t get_offset_of_DetectPointedAtGameObject_4() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___DetectPointedAtGameObject_4)); }
	inline bool get_DetectPointedAtGameObject_4() const { return ___DetectPointedAtGameObject_4; }
	inline bool* get_address_of_DetectPointedAtGameObject_4() { return &___DetectPointedAtGameObject_4; }
	inline void set_DetectPointedAtGameObject_4(bool value)
	{
		___DetectPointedAtGameObject_4 = value;
	}

	inline static int32_t get_offset_of_pressedPosition_6() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___pressedPosition_6)); }
	inline Vector2_t2243707579  get_pressedPosition_6() const { return ___pressedPosition_6; }
	inline Vector2_t2243707579 * get_address_of_pressedPosition_6() { return &___pressedPosition_6; }
	inline void set_pressedPosition_6(Vector2_t2243707579  value)
	{
		___pressedPosition_6 = value;
	}

	inline static int32_t get_offset_of_currentPos_7() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___currentPos_7)); }
	inline Vector2_t2243707579  get_currentPos_7() const { return ___currentPos_7; }
	inline Vector2_t2243707579 * get_address_of_currentPos_7() { return &___currentPos_7; }
	inline void set_currentPos_7(Vector2_t2243707579  value)
	{
		___currentPos_7 = value;
	}

	inline static int32_t get_offset_of_Dragging_8() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___Dragging_8)); }
	inline bool get_Dragging_8() const { return ___Dragging_8; }
	inline bool* get_address_of_Dragging_8() { return &___Dragging_8; }
	inline void set_Dragging_8(bool value)
	{
		___Dragging_8 = value;
	}

	inline static int32_t get_offset_of_m_Camera_9() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367, ___m_Camera_9)); }
	inline Camera_t189460977 * get_m_Camera_9() const { return ___m_Camera_9; }
	inline Camera_t189460977 ** get_address_of_m_Camera_9() { return &___m_Camera_9; }
	inline void set_m_Camera_9(Camera_t189460977 * value)
	{
		___m_Camera_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_9, value);
	}
};

struct InputToEvent_t861782367_StaticFields
{
public:
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t2243707580  ___inputHitPos_3;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t1756533147 * ___U3CgoPointedAtU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_inputHitPos_3() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367_StaticFields, ___inputHitPos_3)); }
	inline Vector3_t2243707580  get_inputHitPos_3() const { return ___inputHitPos_3; }
	inline Vector3_t2243707580 * get_address_of_inputHitPos_3() { return &___inputHitPos_3; }
	inline void set_inputHitPos_3(Vector3_t2243707580  value)
	{
		___inputHitPos_3 = value;
	}

	inline static int32_t get_offset_of_U3CgoPointedAtU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputToEvent_t861782367_StaticFields, ___U3CgoPointedAtU3Ek__BackingField_5)); }
	inline GameObject_t1756533147 * get_U3CgoPointedAtU3Ek__BackingField_5() const { return ___U3CgoPointedAtU3Ek__BackingField_5; }
	inline GameObject_t1756533147 ** get_address_of_U3CgoPointedAtU3Ek__BackingField_5() { return &___U3CgoPointedAtU3Ek__BackingField_5; }
	inline void set_U3CgoPointedAtU3Ek__BackingField_5(GameObject_t1756533147 * value)
	{
		___U3CgoPointedAtU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgoPointedAtU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
