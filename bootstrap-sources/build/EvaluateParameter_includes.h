#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "AvlSetCR.h"
#include "AvlSetInt.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "Ceval.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "ElementSource.h"
#include "Error.h"
#include "EvaluateParameter.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "FCore.h"
#include "Flags.h"
#include "HashSet.h"
#include "List.h"
#include "Sorting.h"
#include "ValuesUtil.h"
#ifdef __cplusplus
}
#endif
