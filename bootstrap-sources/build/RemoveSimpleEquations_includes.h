#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AvlSetInt.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "EvaluateFunctions.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "GCExt.h"
#include "HashSet.h"
#include "HashTableCrToCrEqLst.h"
#include "HashTableCrToExp.h"
#include "HashTableExpToIndex.h"
#include "List.h"
#include "RemoveSimpleEquations.h"
#include "Types.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
