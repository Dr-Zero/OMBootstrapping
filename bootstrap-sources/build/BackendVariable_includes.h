#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "BackendDAEUtil.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "CommonSubExpression.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "Dump.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "HashSet.h"
#include "List.h"
#include "Mutable.h"
#include "SCodeUtil.h"
#include "StringUtil.h"
#include "System.h"
#include "Types.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
