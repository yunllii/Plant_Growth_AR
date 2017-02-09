#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Photon_MonoBehaviour3914164484.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClickAndDrag
struct  ClickAndDrag_t3685540827  : public MonoBehaviour_t3914164484
{
public:
	// UnityEngine.Vector3 ClickAndDrag::camOnPress
	Vector3_t2243707580  ___camOnPress_3;
	// System.Boolean ClickAndDrag::following
	bool ___following_4;
	// System.Single ClickAndDrag::factor
	float ___factor_5;

public:
	inline static int32_t get_offset_of_camOnPress_3() { return static_cast<int32_t>(offsetof(ClickAndDrag_t3685540827, ___camOnPress_3)); }
	inline Vector3_t2243707580  get_camOnPress_3() const { return ___camOnPress_3; }
	inline Vector3_t2243707580 * get_address_of_camOnPress_3() { return &___camOnPress_3; }
	inline void set_camOnPress_3(Vector3_t2243707580  value)
	{
		___camOnPress_3 = value;
	}

	inline static int32_t get_offset_of_following_4() { return static_cast<int32_t>(offsetof(ClickAndDrag_t3685540827, ___following_4)); }
	inline bool get_following_4() const { return ___following_4; }
	inline bool* get_address_of_following_4() { return &___following_4; }
	inline void set_following_4(bool value)
	{
		___following_4 = value;
	}

	inline static int32_t get_offset_of_factor_5() { return static_cast<int32_t>(offsetof(ClickAndDrag_t3685540827, ___factor_5)); }
	inline float get_factor_5() const { return ___factor_5; }
	inline float* get_address_of_factor_5() { return &___factor_5; }
	inline void set_factor_5(float value)
	{
		___factor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
