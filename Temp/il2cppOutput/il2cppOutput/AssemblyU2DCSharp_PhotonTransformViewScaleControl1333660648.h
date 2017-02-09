#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonTransformViewScaleModel
struct PhotonTransformViewScaleModel_t4204778372;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonTransformViewScaleControl
struct  PhotonTransformViewScaleControl_t1333660648  : public Il2CppObject
{
public:
	// PhotonTransformViewScaleModel PhotonTransformViewScaleControl::m_Model
	PhotonTransformViewScaleModel_t4204778372 * ___m_Model_0;
	// UnityEngine.Vector3 PhotonTransformViewScaleControl::m_NetworkScale
	Vector3_t2243707580  ___m_NetworkScale_1;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t1333660648, ___m_Model_0)); }
	inline PhotonTransformViewScaleModel_t4204778372 * get_m_Model_0() const { return ___m_Model_0; }
	inline PhotonTransformViewScaleModel_t4204778372 ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(PhotonTransformViewScaleModel_t4204778372 * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Model_0, value);
	}

	inline static int32_t get_offset_of_m_NetworkScale_1() { return static_cast<int32_t>(offsetof(PhotonTransformViewScaleControl_t1333660648, ___m_NetworkScale_1)); }
	inline Vector3_t2243707580  get_m_NetworkScale_1() const { return ___m_NetworkScale_1; }
	inline Vector3_t2243707580 * get_address_of_m_NetworkScale_1() { return &___m_NetworkScale_1; }
	inline void set_m_NetworkScale_1(Vector3_t2243707580  value)
	{
		___m_NetworkScale_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
