#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "Coloring.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBAdjacency.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBJacobian.h"
#include "NBPartition.h"
#include "NBSlice.h"
#include "NBStrongComponent.h"
#include "NBTearing.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFType.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
