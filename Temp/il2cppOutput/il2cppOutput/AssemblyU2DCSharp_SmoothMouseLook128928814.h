#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SmoothMouseLook_RotationAxes1370738632.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothMouseLook
struct  SmoothMouseLook_t128928814  : public MonoBehaviour_t1158329972
{
public:
	// SmoothMouseLook/RotationAxes SmoothMouseLook::axes
	int32_t ___axes_2;
	// System.Single SmoothMouseLook::sensitivityX
	float ___sensitivityX_3;
	// System.Single SmoothMouseLook::sensitivityY
	float ___sensitivityY_4;
	// System.Single SmoothMouseLook::minimumX
	float ___minimumX_5;
	// System.Single SmoothMouseLook::maximumX
	float ___maximumX_6;
	// System.Single SmoothMouseLook::minimumY
	float ___minimumY_7;
	// System.Single SmoothMouseLook::maximumY
	float ___maximumY_8;
	// System.Single SmoothMouseLook::rotationX
	float ___rotationX_9;
	// System.Single SmoothMouseLook::rotationY
	float ___rotationY_10;
	// System.Collections.Generic.List`1<System.Single> SmoothMouseLook::rotArrayX
	List_1_t1445631064 * ___rotArrayX_11;
	// System.Single SmoothMouseLook::rotAverageX
	float ___rotAverageX_12;
	// System.Collections.Generic.List`1<System.Single> SmoothMouseLook::rotArrayY
	List_1_t1445631064 * ___rotArrayY_13;
	// System.Single SmoothMouseLook::rotAverageY
	float ___rotAverageY_14;
	// System.Single SmoothMouseLook::frameCounter
	float ___frameCounter_15;
	// UnityEngine.Quaternion SmoothMouseLook::originalRotation
	Quaternion_t4030073918  ___originalRotation_16;
	// UnityEngine.Quaternion SmoothMouseLook::parentOriginalRotation
	Quaternion_t4030073918  ___parentOriginalRotation_17;

public:
	inline static int32_t get_offset_of_axes_2() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___axes_2)); }
	inline int32_t get_axes_2() const { return ___axes_2; }
	inline int32_t* get_address_of_axes_2() { return &___axes_2; }
	inline void set_axes_2(int32_t value)
	{
		___axes_2 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_3() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___sensitivityX_3)); }
	inline float get_sensitivityX_3() const { return ___sensitivityX_3; }
	inline float* get_address_of_sensitivityX_3() { return &___sensitivityX_3; }
	inline void set_sensitivityX_3(float value)
	{
		___sensitivityX_3 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_4() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___sensitivityY_4)); }
	inline float get_sensitivityY_4() const { return ___sensitivityY_4; }
	inline float* get_address_of_sensitivityY_4() { return &___sensitivityY_4; }
	inline void set_sensitivityY_4(float value)
	{
		___sensitivityY_4 = value;
	}

	inline static int32_t get_offset_of_minimumX_5() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___minimumX_5)); }
	inline float get_minimumX_5() const { return ___minimumX_5; }
	inline float* get_address_of_minimumX_5() { return &___minimumX_5; }
	inline void set_minimumX_5(float value)
	{
		___minimumX_5 = value;
	}

	inline static int32_t get_offset_of_maximumX_6() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___maximumX_6)); }
	inline float get_maximumX_6() const { return ___maximumX_6; }
	inline float* get_address_of_maximumX_6() { return &___maximumX_6; }
	inline void set_maximumX_6(float value)
	{
		___maximumX_6 = value;
	}

	inline static int32_t get_offset_of_minimumY_7() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___minimumY_7)); }
	inline float get_minimumY_7() const { return ___minimumY_7; }
	inline float* get_address_of_minimumY_7() { return &___minimumY_7; }
	inline void set_minimumY_7(float value)
	{
		___minimumY_7 = value;
	}

	inline static int32_t get_offset_of_maximumY_8() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___maximumY_8)); }
	inline float get_maximumY_8() const { return ___maximumY_8; }
	inline float* get_address_of_maximumY_8() { return &___maximumY_8; }
	inline void set_maximumY_8(float value)
	{
		___maximumY_8 = value;
	}

	inline static int32_t get_offset_of_rotationX_9() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotationX_9)); }
	inline float get_rotationX_9() const { return ___rotationX_9; }
	inline float* get_address_of_rotationX_9() { return &___rotationX_9; }
	inline void set_rotationX_9(float value)
	{
		___rotationX_9 = value;
	}

	inline static int32_t get_offset_of_rotationY_10() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotationY_10)); }
	inline float get_rotationY_10() const { return ___rotationY_10; }
	inline float* get_address_of_rotationY_10() { return &___rotationY_10; }
	inline void set_rotationY_10(float value)
	{
		___rotationY_10 = value;
	}

	inline static int32_t get_offset_of_rotArrayX_11() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotArrayX_11)); }
	inline List_1_t1445631064 * get_rotArrayX_11() const { return ___rotArrayX_11; }
	inline List_1_t1445631064 ** get_address_of_rotArrayX_11() { return &___rotArrayX_11; }
	inline void set_rotArrayX_11(List_1_t1445631064 * value)
	{
		___rotArrayX_11 = value;
		Il2CppCodeGenWriteBarrier(&___rotArrayX_11, value);
	}

	inline static int32_t get_offset_of_rotAverageX_12() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotAverageX_12)); }
	inline float get_rotAverageX_12() const { return ___rotAverageX_12; }
	inline float* get_address_of_rotAverageX_12() { return &___rotAverageX_12; }
	inline void set_rotAverageX_12(float value)
	{
		___rotAverageX_12 = value;
	}

	inline static int32_t get_offset_of_rotArrayY_13() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotArrayY_13)); }
	inline List_1_t1445631064 * get_rotArrayY_13() const { return ___rotArrayY_13; }
	inline List_1_t1445631064 ** get_address_of_rotArrayY_13() { return &___rotArrayY_13; }
	inline void set_rotArrayY_13(List_1_t1445631064 * value)
	{
		___rotArrayY_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotArrayY_13, value);
	}

	inline static int32_t get_offset_of_rotAverageY_14() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___rotAverageY_14)); }
	inline float get_rotAverageY_14() const { return ___rotAverageY_14; }
	inline float* get_address_of_rotAverageY_14() { return &___rotAverageY_14; }
	inline void set_rotAverageY_14(float value)
	{
		___rotAverageY_14 = value;
	}

	inline static int32_t get_offset_of_frameCounter_15() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___frameCounter_15)); }
	inline float get_frameCounter_15() const { return ___frameCounter_15; }
	inline float* get_address_of_frameCounter_15() { return &___frameCounter_15; }
	inline void set_frameCounter_15(float value)
	{
		___frameCounter_15 = value;
	}

	inline static int32_t get_offset_of_originalRotation_16() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___originalRotation_16)); }
	inline Quaternion_t4030073918  get_originalRotation_16() const { return ___originalRotation_16; }
	inline Quaternion_t4030073918 * get_address_of_originalRotation_16() { return &___originalRotation_16; }
	inline void set_originalRotation_16(Quaternion_t4030073918  value)
	{
		___originalRotation_16 = value;
	}

	inline static int32_t get_offset_of_parentOriginalRotation_17() { return static_cast<int32_t>(offsetof(SmoothMouseLook_t128928814, ___parentOriginalRotation_17)); }
	inline Quaternion_t4030073918  get_parentOriginalRotation_17() const { return ___parentOriginalRotation_17; }
	inline Quaternion_t4030073918 * get_address_of_parentOriginalRotation_17() { return &___parentOriginalRotation_17; }
	inline void set_parentOriginalRotation_17(Quaternion_t4030073918  value)
	{
		___parentOriginalRotation_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
