#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CullArea
struct CullArea_t3831440099;
// CellTree
struct CellTree_t3485148236;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t764358782;
// CellTreeNode
struct CellTreeNode_t1707173264;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CellTree3485148236.h"
#include "AssemblyU2DCSharp_CellTreeNode1707173264.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void CullArea::.ctor()
extern "C"  void CullArea__ctor_m2411816420 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CullArea::get_CellCount()
extern "C"  int32_t CullArea_get_CellCount_m4195685990 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_CellCount(System.Int32)
extern "C"  void CullArea_set_CellCount_m1706343331 (CullArea_t3831440099 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CellTree CullArea::get_CellTree()
extern "C"  CellTree_t3485148236 * CullArea_get_CellTree_m3139270416 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_CellTree(CellTree)
extern "C"  void CullArea_set_CellTree_m3589530815 (CullArea_t3831440099 * __this, CellTree_t3485148236 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> CullArea::get_Map()
extern "C"  Dictionary_2_t764358782 * CullArea_get_Map_m3585663102 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::set_Map(System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
extern "C"  void CullArea_set_Map_m155504177 (CullArea_t3831440099 * __this, Dictionary_2_t764358782 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::Awake()
extern "C"  void CullArea_Awake_m528245279 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::OnDrawGizmos()
extern "C"  void CullArea_OnDrawGizmos_m569180606 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::CreateCellHierarchy()
extern "C"  void CullArea_CreateCellHierarchy_m755653611 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::CreateChildCells(CellTreeNode,System.Int32)
extern "C"  void CullArea_CreateChildCells_m3171110200 (CullArea_t3831440099 * __this, CellTreeNode_t1707173264 * ___parent0, int32_t ___cellLevelInHierarchy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CullArea::DrawCells()
extern "C"  void CullArea_DrawCells_m149372595 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CullArea::IsCellCountAllowed()
extern "C"  bool CullArea_IsCellCountAllowed_m3304512825 (CullArea_t3831440099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> CullArea::GetActiveCells(UnityEngine.Vector3)
extern "C"  List_1_t1440998580 * CullArea_GetActiveCells_m2618458820 (CullArea_t3831440099 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
