#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ColorPerPlayer
struct ColorPerPlayer_t3468414963;
// UnityEngine.Renderer
struct Renderer_t257310565;

#include "AssemblyU2DCSharp_Photon_PunBehaviour692890556.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPerPlayerApply
struct  ColorPerPlayerApply_t1602831959  : public PunBehaviour_t692890556
{
public:
	// UnityEngine.Renderer ColorPerPlayerApply::rendererComponent
	Renderer_t257310565 * ___rendererComponent_4;

public:
	inline static int32_t get_offset_of_rendererComponent_4() { return static_cast<int32_t>(offsetof(ColorPerPlayerApply_t1602831959, ___rendererComponent_4)); }
	inline Renderer_t257310565 * get_rendererComponent_4() const { return ___rendererComponent_4; }
	inline Renderer_t257310565 ** get_address_of_rendererComponent_4() { return &___rendererComponent_4; }
	inline void set_rendererComponent_4(Renderer_t257310565 * value)
	{
		___rendererComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___rendererComponent_4, value);
	}
};

struct ColorPerPlayerApply_t1602831959_StaticFields
{
public:
	// ColorPerPlayer ColorPerPlayerApply::colorPickerCache
	ColorPerPlayer_t3468414963 * ___colorPickerCache_3;

public:
	inline static int32_t get_offset_of_colorPickerCache_3() { return static_cast<int32_t>(offsetof(ColorPerPlayerApply_t1602831959_StaticFields, ___colorPickerCache_3)); }
	inline ColorPerPlayer_t3468414963 * get_colorPickerCache_3() const { return ___colorPickerCache_3; }
	inline ColorPerPlayer_t3468414963 ** get_address_of_colorPickerCache_3() { return &___colorPickerCache_3; }
	inline void set_colorPickerCache_3(ColorPerPlayer_t3468414963 * value)
	{
		___colorPickerCache_3 = value;
		Il2CppCodeGenWriteBarrier(&___colorPickerCache_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
