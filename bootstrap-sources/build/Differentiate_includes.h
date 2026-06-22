#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "AvlSetPath.h"
#include "AvlTreePathFunction.h"
#include "BackendDAECreate.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendUtil.h"
#include "BackendVariable.h"
#include "Ceval.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEDump.h"
#include "DAEDumpTpl.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "Differentiate.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "Inline.h"
#include "List.h"
#include "StringUtil.h"
#include "Tpl.h"
#include "Types.h"
#include "TypesDump.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
