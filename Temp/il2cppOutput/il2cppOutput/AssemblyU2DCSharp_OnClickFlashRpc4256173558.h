#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickFlashRpc
struct  OnClickFlashRpc_t4256173558  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.Material OnClickFlashRpc::originalMaterial
	Material_t193706927 * ___originalMaterial_3;
	// UnityEngine.Color OnClickFlashRpc::originalColor
	Color_t2020392075  ___originalColor_4;
	// System.Boolean OnClickFlashRpc::isFlashing
	bool ___isFlashing_5;

public:
	inline static int32_t get_offset_of_originalMaterial_3() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t4256173558, ___originalMaterial_3)); }
	inline Material_t193706927 * get_originalMaterial_3() const { return ___originalMaterial_3; }
	inline Material_t193706927 ** get_address_of_originalMaterial_3() { return &___originalMaterial_3; }
	inline void set_originalMaterial_3(Material_t193706927 * value)
	{
		___originalMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___originalMaterial_3, value);
	}

	inline static int32_t get_offset_of_originalColor_4() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t4256173558, ___originalColor_4)); }
	inline Color_t2020392075  get_originalColor_4() const { return ___originalColor_4; }
	inline Color_t2020392075 * get_address_of_originalColor_4() { return &___originalColor_4; }
	inline void set_originalColor_4(Color_t2020392075  value)
	{
		___originalColor_4 = value;
	}

	inline static int32_t get_offset_of_isFlashing_5() { return static_cast<int32_t>(offsetof(OnClickFlashRpc_t4256173558, ___isFlashing_5)); }
	inline bool get_isFlashing_5() const { return ___isFlashing_5; }
	inline bool* get_address_of_isFlashing_5() { return &___isFlashing_5; }
	inline void set_isFlashing_5(bool value)
	{
		___isFlashing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
