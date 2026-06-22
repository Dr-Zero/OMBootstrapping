#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAEUtil.h"
#include "BackendEquation.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionSimplify.h"
#include "Flags.h"
#include "InlineArrayEquations.h"
#include "List.h"
#ifdef __cplusplus
}
#endif
