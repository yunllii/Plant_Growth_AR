#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// CellTree
struct CellTree_t3485148236;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t764358782;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CullArea
struct  CullArea_t3831440099  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CullArea::FIRST_GROUP_ID
	int32_t ___FIRST_GROUP_ID_4;
	// System.Int32[] CullArea::SUBDIVISION_FIRST_LEVEL_ORDER
	Int32U5BU5D_t3030399641* ___SUBDIVISION_FIRST_LEVEL_ORDER_5;
	// System.Int32[] CullArea::SUBDIVISION_SECOND_LEVEL_ORDER
	Int32U5BU5D_t3030399641* ___SUBDIVISION_SECOND_LEVEL_ORDER_6;
	// System.Int32[] CullArea::SUBDIVISION_THIRD_LEVEL_ORDER
	Int32U5BU5D_t3030399641* ___SUBDIVISION_THIRD_LEVEL_ORDER_7;
	// UnityEngine.Vector2 CullArea::Center
	Vector2_t2243707579  ___Center_8;
	// UnityEngine.Vector2 CullArea::Size
	Vector2_t2243707579  ___Size_9;
	// UnityEngine.Vector2[] CullArea::Subdivisions
	Vector2U5BU5D_t686124026* ___Subdivisions_10;
	// System.Int32 CullArea::NumberOfSubdivisions
	int32_t ___NumberOfSubdivisions_11;
	// System.Int32 CullArea::<CellCount>k__BackingField
	int32_t ___U3CCellCountU3Ek__BackingField_12;
	// CellTree CullArea::<CellTree>k__BackingField
	CellTree_t3485148236 * ___U3CCellTreeU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> CullArea::<Map>k__BackingField
	Dictionary_2_t764358782 * ___U3CMapU3Ek__BackingField_14;
	// System.Boolean CullArea::YIsUpAxis
	bool ___YIsUpAxis_15;
	// System.Boolean CullArea::RecreateCellHierarchy
	bool ___RecreateCellHierarchy_16;
	// System.Int32 CullArea::idCounter
	int32_t ___idCounter_17;

public:
	inline static int32_t get_offset_of_FIRST_GROUP_ID_4() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___FIRST_GROUP_ID_4)); }
	inline int32_t get_FIRST_GROUP_ID_4() const { return ___FIRST_GROUP_ID_4; }
	inline int32_t* get_address_of_FIRST_GROUP_ID_4() { return &___FIRST_GROUP_ID_4; }
	inline void set_FIRST_GROUP_ID_4(int32_t value)
	{
		___FIRST_GROUP_ID_4 = value;
	}

	inline static int32_t get_offset_of_SUBDIVISION_FIRST_LEVEL_ORDER_5() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___SUBDIVISION_FIRST_LEVEL_ORDER_5)); }
	inline Int32U5BU5D_t3030399641* get_SUBDIVISION_FIRST_LEVEL_ORDER_5() const { return ___SUBDIVISION_FIRST_LEVEL_ORDER_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_SUBDIVISION_FIRST_LEVEL_ORDER_5() { return &___SUBDIVISION_FIRST_LEVEL_ORDER_5; }
	inline void set_SUBDIVISION_FIRST_LEVEL_ORDER_5(Int32U5BU5D_t3030399641* value)
	{
		___SUBDIVISION_FIRST_LEVEL_ORDER_5 = value;
		Il2CppCodeGenWriteBarrier(&___SUBDIVISION_FIRST_LEVEL_ORDER_5, value);
	}

	inline static int32_t get_offset_of_SUBDIVISION_SECOND_LEVEL_ORDER_6() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___SUBDIVISION_SECOND_LEVEL_ORDER_6)); }
	inline Int32U5BU5D_t3030399641* get_SUBDIVISION_SECOND_LEVEL_ORDER_6() const { return ___SUBDIVISION_SECOND_LEVEL_ORDER_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_SUBDIVISION_SECOND_LEVEL_ORDER_6() { return &___SUBDIVISION_SECOND_LEVEL_ORDER_6; }
	inline void set_SUBDIVISION_SECOND_LEVEL_ORDER_6(Int32U5BU5D_t3030399641* value)
	{
		___SUBDIVISION_SECOND_LEVEL_ORDER_6 = value;
		Il2CppCodeGenWriteBarrier(&___SUBDIVISION_SECOND_LEVEL_ORDER_6, value);
	}

	inline static int32_t get_offset_of_SUBDIVISION_THIRD_LEVEL_ORDER_7() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___SUBDIVISION_THIRD_LEVEL_ORDER_7)); }
	inline Int32U5BU5D_t3030399641* get_SUBDIVISION_THIRD_LEVEL_ORDER_7() const { return ___SUBDIVISION_THIRD_LEVEL_ORDER_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_SUBDIVISION_THIRD_LEVEL_ORDER_7() { return &___SUBDIVISION_THIRD_LEVEL_ORDER_7; }
	inline void set_SUBDIVISION_THIRD_LEVEL_ORDER_7(Int32U5BU5D_t3030399641* value)
	{
		___SUBDIVISION_THIRD_LEVEL_ORDER_7 = value;
		Il2CppCodeGenWriteBarrier(&___SUBDIVISION_THIRD_LEVEL_ORDER_7, value);
	}

	inline static int32_t get_offset_of_Center_8() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___Center_8)); }
	inline Vector2_t2243707579  get_Center_8() const { return ___Center_8; }
	inline Vector2_t2243707579 * get_address_of_Center_8() { return &___Center_8; }
	inline void set_Center_8(Vector2_t2243707579  value)
	{
		___Center_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___Size_9)); }
	inline Vector2_t2243707579  get_Size_9() const { return ___Size_9; }
	inline Vector2_t2243707579 * get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(Vector2_t2243707579  value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_Subdivisions_10() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___Subdivisions_10)); }
	inline Vector2U5BU5D_t686124026* get_Subdivisions_10() const { return ___Subdivisions_10; }
	inline Vector2U5BU5D_t686124026** get_address_of_Subdivisions_10() { return &___Subdivisions_10; }
	inline void set_Subdivisions_10(Vector2U5BU5D_t686124026* value)
	{
		___Subdivisions_10 = value;
		Il2CppCodeGenWriteBarrier(&___Subdivisions_10, value);
	}

	inline static int32_t get_offset_of_NumberOfSubdivisions_11() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___NumberOfSubdivisions_11)); }
	inline int32_t get_NumberOfSubdivisions_11() const { return ___NumberOfSubdivisions_11; }
	inline int32_t* get_address_of_NumberOfSubdivisions_11() { return &___NumberOfSubdivisions_11; }
	inline void set_NumberOfSubdivisions_11(int32_t value)
	{
		___NumberOfSubdivisions_11 = value;
	}

	inline static int32_t get_offset_of_U3CCellCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___U3CCellCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CCellCountU3Ek__BackingField_12() const { return ___U3CCellCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCellCountU3Ek__BackingField_12() { return &___U3CCellCountU3Ek__BackingField_12; }
	inline void set_U3CCellCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CCellCountU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CCellTreeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___U3CCellTreeU3Ek__BackingField_13)); }
	inline CellTree_t3485148236 * get_U3CCellTreeU3Ek__BackingField_13() const { return ___U3CCellTreeU3Ek__BackingField_13; }
	inline CellTree_t3485148236 ** get_address_of_U3CCellTreeU3Ek__BackingField_13() { return &___U3CCellTreeU3Ek__BackingField_13; }
	inline void set_U3CCellTreeU3Ek__BackingField_13(CellTree_t3485148236 * value)
	{
		___U3CCellTreeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCellTreeU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CMapU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___U3CMapU3Ek__BackingField_14)); }
	inline Dictionary_2_t764358782 * get_U3CMapU3Ek__BackingField_14() const { return ___U3CMapU3Ek__BackingField_14; }
	inline Dictionary_2_t764358782 ** get_address_of_U3CMapU3Ek__BackingField_14() { return &___U3CMapU3Ek__BackingField_14; }
	inline void set_U3CMapU3Ek__BackingField_14(Dictionary_2_t764358782 * value)
	{
		___U3CMapU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMapU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_YIsUpAxis_15() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___YIsUpAxis_15)); }
	inline bool get_YIsUpAxis_15() const { return ___YIsUpAxis_15; }
	inline bool* get_address_of_YIsUpAxis_15() { return &___YIsUpAxis_15; }
	inline void set_YIsUpAxis_15(bool value)
	{
		___YIsUpAxis_15 = value;
	}

	inline static int32_t get_offset_of_RecreateCellHierarchy_16() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___RecreateCellHierarchy_16)); }
	inline bool get_RecreateCellHierarchy_16() const { return ___RecreateCellHierarchy_16; }
	inline bool* get_address_of_RecreateCellHierarchy_16() { return &___RecreateCellHierarchy_16; }
	inline void set_RecreateCellHierarchy_16(bool value)
	{
		___RecreateCellHierarchy_16 = value;
	}

	inline static int32_t get_offset_of_idCounter_17() { return static_cast<int32_t>(offsetof(CullArea_t3831440099, ___idCounter_17)); }
	inline int32_t get_idCounter_17() const { return ___idCounter_17; }
	inline int32_t* get_address_of_idCounter_17() { return &___idCounter_17; }
	inline void set_idCounter_17(int32_t value)
	{
		___idCounter_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
