#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Type
struct Type_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t264715885  : public Il2CppObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_4;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t4268412390 * ___MainAssembly_5;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t909839986 * ___ResourceSets_6;
	// System.Boolean System.Resources.ResourceManager::ignoreCase
	bool ___ignoreCase_7;
	// System.Type System.Resources.ResourceManager::resourceSource
	Type_t * ___resourceSource_8;
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_9;
	// System.String System.Resources.ResourceManager::resourceDir
	String_t* ___resourceDir_10;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::neutral_culture
	CultureInfo_t3500843524 * ___neutral_culture_11;

public:
	inline static int32_t get_offset_of_BaseNameField_4() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___BaseNameField_4)); }
	inline String_t* get_BaseNameField_4() const { return ___BaseNameField_4; }
	inline String_t** get_address_of_BaseNameField_4() { return &___BaseNameField_4; }
	inline void set_BaseNameField_4(String_t* value)
	{
		___BaseNameField_4 = value;
		Il2CppCodeGenWriteBarrier(&___BaseNameField_4, value);
	}

	inline static int32_t get_offset_of_MainAssembly_5() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___MainAssembly_5)); }
	inline Assembly_t4268412390 * get_MainAssembly_5() const { return ___MainAssembly_5; }
	inline Assembly_t4268412390 ** get_address_of_MainAssembly_5() { return &___MainAssembly_5; }
	inline void set_MainAssembly_5(Assembly_t4268412390 * value)
	{
		___MainAssembly_5 = value;
		Il2CppCodeGenWriteBarrier(&___MainAssembly_5, value);
	}

	inline static int32_t get_offset_of_ResourceSets_6() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___ResourceSets_6)); }
	inline Hashtable_t909839986 * get_ResourceSets_6() const { return ___ResourceSets_6; }
	inline Hashtable_t909839986 ** get_address_of_ResourceSets_6() { return &___ResourceSets_6; }
	inline void set_ResourceSets_6(Hashtable_t909839986 * value)
	{
		___ResourceSets_6 = value;
		Il2CppCodeGenWriteBarrier(&___ResourceSets_6, value);
	}

	inline static int32_t get_offset_of_ignoreCase_7() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___ignoreCase_7)); }
	inline bool get_ignoreCase_7() const { return ___ignoreCase_7; }
	inline bool* get_address_of_ignoreCase_7() { return &___ignoreCase_7; }
	inline void set_ignoreCase_7(bool value)
	{
		___ignoreCase_7 = value;
	}

	inline static int32_t get_offset_of_resourceSource_8() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___resourceSource_8)); }
	inline Type_t * get_resourceSource_8() const { return ___resourceSource_8; }
	inline Type_t ** get_address_of_resourceSource_8() { return &___resourceSource_8; }
	inline void set_resourceSource_8(Type_t * value)
	{
		___resourceSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___resourceSource_8, value);
	}

	inline static int32_t get_offset_of_resourceSetType_9() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___resourceSetType_9)); }
	inline Type_t * get_resourceSetType_9() const { return ___resourceSetType_9; }
	inline Type_t ** get_address_of_resourceSetType_9() { return &___resourceSetType_9; }
	inline void set_resourceSetType_9(Type_t * value)
	{
		___resourceSetType_9 = value;
		Il2CppCodeGenWriteBarrier(&___resourceSetType_9, value);
	}

	inline static int32_t get_offset_of_resourceDir_10() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___resourceDir_10)); }
	inline String_t* get_resourceDir_10() const { return ___resourceDir_10; }
	inline String_t** get_address_of_resourceDir_10() { return &___resourceDir_10; }
	inline void set_resourceDir_10(String_t* value)
	{
		___resourceDir_10 = value;
		Il2CppCodeGenWriteBarrier(&___resourceDir_10, value);
	}

	inline static int32_t get_offset_of_neutral_culture_11() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___neutral_culture_11)); }
	inline CultureInfo_t3500843524 * get_neutral_culture_11() const { return ___neutral_culture_11; }
	inline CultureInfo_t3500843524 ** get_address_of_neutral_culture_11() { return &___neutral_culture_11; }
	inline void set_neutral_culture_11(CultureInfo_t3500843524 * value)
	{
		___neutral_culture_11 = value;
		Il2CppCodeGenWriteBarrier(&___neutral_culture_11, value);
	}
};

struct ResourceManager_t264715885_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t909839986 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t909839986 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t909839986 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t909839986 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t909839986 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___ResourceCache_0, value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t909839986 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t909839986 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t909839986 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier(&___NonExistent_1, value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
