#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleCollector
struct  HandleCollector_t1994147477  : public Il2CppObject
{
public:
	// System.Int32 System.Runtime.InteropServices.HandleCollector::count
	int32_t ___count_0;
	// System.Int32 System.Runtime.InteropServices.HandleCollector::init
	int32_t ___init_1;
	// System.Int32 System.Runtime.InteropServices.HandleCollector::max
	int32_t ___max_2;
	// System.String System.Runtime.InteropServices.HandleCollector::name
	String_t* ___name_3;
	// System.DateTime System.Runtime.InteropServices.HandleCollector::previous_collection
	DateTime_t693205669  ___previous_collection_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(HandleCollector_t1994147477, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_init_1() { return static_cast<int32_t>(offsetof(HandleCollector_t1994147477, ___init_1)); }
	inline int32_t get_init_1() const { return ___init_1; }
	inline int32_t* get_address_of_init_1() { return &___init_1; }
	inline void set_init_1(int32_t value)
	{
		___init_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(HandleCollector_t1994147477, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(HandleCollector_t1994147477, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_previous_collection_4() { return static_cast<int32_t>(offsetof(HandleCollector_t1994147477, ___previous_collection_4)); }
	inline DateTime_t693205669  get_previous_collection_4() const { return ___previous_collection_4; }
	inline DateTime_t693205669 * get_address_of_previous_collection_4() { return &___previous_collection_4; }
	inline void set_previous_collection_4(DateTime_t693205669  value)
	{
		___previous_collection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
