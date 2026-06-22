#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynToSCode.h"
#include "AbsynUtil.h"
#include "AdjacencyMatrix.h"
#include "BackendDAECreate.h"
#include "BackendDAEEXT.h"
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
#include "Error.h"
#include "Expression.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "FlagsUtil.h"
#include "HashSet.h"
#include "HashTable.h"
#include "HashTable2.h"
#include "Inst.h"
#include "List.h"
#include "Matching.h"
#include "MathematicaDump.h"
#include "Print.h"
#include "Sorting.h"
#include "StateMachineFlatten.h"
#include "SymbolTable.h"
#include "SymbolicJacobian.h"
#include "System.h"
#include "Uncertainties.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
