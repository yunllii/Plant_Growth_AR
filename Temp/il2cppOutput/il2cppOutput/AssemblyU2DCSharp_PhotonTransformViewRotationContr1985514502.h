#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t3365719546;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewRotationControl
struct  PhotonTransformViewRotationControl_t1985514502  : public Il2CppObject
{
public:
	// PhotonTransformViewRotationModel PhotonTransformViewRotationControl::m_Model
	PhotonTransformViewRotationModel_t3365719546 * ___m_Model_0;
	// UnityEngine.Quaternion PhotonTransformViewRotationControl::m_NetworkRotation
	Quaternion_t4030073918  ___m_NetworkRotation_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_t1985514502, ___m_Model_0)); }
	inline PhotonTransformViewRotationModel_t3365719546 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewRotationModel_t3365719546 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewRotationModel_t3365719546 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Model_0, value);
	}

	inline static int32_t get_offset_of_m_NetworkRotation_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewRotationControl_t1985514502, ___m_NetworkRotation_1)); }
	inline Quaternion_t4030073918  get_m_NetworkRotation_1() const { return ___m_NetworkRotation_1; }
	inline Quaternion_t4030073918 * get_address_of_m_NetworkRotation_1() { return &___m_NetworkRotation_1; }
	inline void set_m_NetworkRotation_1(Quaternion_t4030073918  value)
	{
		___m_NetworkRotation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
