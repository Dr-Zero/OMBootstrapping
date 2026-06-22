#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "AvlSetInt.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "ExpressionSolve.h"
#include "Flags.h"
#include "HpcOmTaskGraph.h"
#include "List.h"
#include "ResolveLoops.h"
#include "Tearing.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
