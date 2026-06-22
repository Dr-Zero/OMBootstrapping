#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AdjacencyMatrix.h"
#include "Array.h"
#include "BackendDAEEXT.h"
#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Differentiate.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "HashSet.h"
#include "List.h"
#include "Matching.h"
#include "OnRelaxation.h"
#include "Sorting.h"
#include "SymbolicJacobian.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
