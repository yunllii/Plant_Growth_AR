#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.UtilityScripts.ButtonInsideScrollList
struct  ButtonInsideScrollList_t3964493381  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.ScrollRect ExitGames.UtilityScripts.ButtonInsideScrollList::scrollRect
	ScrollRect_t1199013257 * ___scrollRect_2;

public:
	inline static int32_t get_offset_of_scrollRect_2() { return static_cast<int32_t>(offsetof(ButtonInsideScrollList_t3964493381, ___scrollRect_2)); }
	inline ScrollRect_t1199013257 * get_scrollRect_2() const { return ___scrollRect_2; }
	inline ScrollRect_t1199013257 ** get_address_of_scrollRect_2() { return &___scrollRect_2; }
	inline void set_scrollRect_2(ScrollRect_t1199013257 * value)
	{
		___scrollRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
