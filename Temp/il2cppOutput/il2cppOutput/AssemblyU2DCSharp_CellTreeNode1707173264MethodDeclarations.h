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

// CellTreeNode
struct CellTreeNode_t1707173264;
// System.Collections.Generic.List`1<CellTreeNode>
struct List_1_t1076294396;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CellTreeNode_ENodeType1774954820.h"
#include "AssemblyU2DCSharp_CellTreeNode1707173264.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void CellTreeNode::.ctor()
extern "C"  void CellTreeNode__ctor_m3825207963 (CellTreeNode_t1707173264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::.ctor(System.Int32,CellTreeNode/ENodeType,CellTreeNode)
extern "C"  void CellTreeNode__ctor_m2799581822 (CellTreeNode_t1707173264 * __this, int32_t ___id0, int32_t ___nodeType1, CellTreeNode_t1707173264 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::AddChild(CellTreeNode)
extern "C"  void CellTreeNode_AddChild_m551109268 (CellTreeNode_t1707173264 * __this, CellTreeNode_t1707173264 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::Draw()
extern "C"  void CellTreeNode_Draw_m1829938855 (CellTreeNode_t1707173264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetAllLeafNodes(System.Collections.Generic.List`1<CellTreeNode>)
extern "C"  void CellTreeNode_GetAllLeafNodes_m4032808135 (CellTreeNode_t1707173264 * __this, List_1_t1076294396 * ___leafNodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetInsideCells(System.Collections.Generic.List`1<System.Int32>,System.Boolean,UnityEngine.Vector3)
extern "C"  void CellTreeNode_GetInsideCells_m4120503257 (CellTreeNode_t1707173264 * __this, List_1_t1440998580 * ___insideCells0, bool ___yIsUpAxis1, Vector3_t2243707580  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CellTreeNode::GetNearbyCells(System.Collections.Generic.List`1<System.Int32>,System.Boolean,UnityEngine.Vector3)
extern "C"  void CellTreeNode_GetNearbyCells_m3165741324 (CellTreeNode_t1707173264 * __this, List_1_t1440998580 * ___nearbyCells0, bool ___yIsUpAxis1, Vector3_t2243707580  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellTreeNode::IsPointInsideCell(System.Boolean,UnityEngine.Vector3)
extern "C"  bool CellTreeNode_IsPointInsideCell_m3753426273 (CellTreeNode_t1707173264 * __this, bool ___yIsUpAxis0, Vector3_t2243707580  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CellTreeNode::IsPointNearCell(System.Boolean,UnityEngine.Vector3)
extern "C"  bool CellTreeNode_IsPointNearCell_m2627677937 (CellTreeNode_t1707173264 * __this, bool ___yIsUpAxis0, Vector3_t2243707580  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
