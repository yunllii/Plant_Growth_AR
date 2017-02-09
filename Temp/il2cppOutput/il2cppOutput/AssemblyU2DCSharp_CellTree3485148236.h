#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CellTreeNode
struct CellTreeNode_t1707173264;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellTree
struct  CellTree_t3485148236  : public Il2CppObject
{
public:
	// CellTreeNode CellTree::<RootNode>k__BackingField
	CellTreeNode_t1707173264 * ___U3CRootNodeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRootNodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CellTree_t3485148236, ___U3CRootNodeU3Ek__BackingField_0)); }
	inline CellTreeNode_t1707173264 * get_U3CRootNodeU3Ek__BackingField_0() const { return ___U3CRootNodeU3Ek__BackingField_0; }
	inline CellTreeNode_t1707173264 ** get_address_of_U3CRootNodeU3Ek__BackingField_0() { return &___U3CRootNodeU3Ek__BackingField_0; }
	inline void set_U3CRootNodeU3Ek__BackingField_0(CellTreeNode_t1707173264 * value)
	{
		___U3CRootNodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRootNodeU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
