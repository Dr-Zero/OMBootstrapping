#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NBAdjacency.h"
#include "NBBackendUtil.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBPartition.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
