#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Algorithm.h"
#include "Array.h"
#include "AvlSetInt.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "HashTable.h"
#include "List.h"
#ifdef __cplusplus
}
#endif
