#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBBackendUtil.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFAlgorithm.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFFunctionDerivative.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFPrefixes.h"
#include "NFSimplifyExp.h"
#include "NFStatement.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "SCodeUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
