#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "BackendDAEUtil.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "DAEUtil.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionDump.h"
#include "ExpressionSolve.h"
#include "List.h"
#include "ProgramUtil.h"
#include "Tpl.h"
#include "Util.h"
#include "VisualXML.h"
#include "VisualXMLTpl.h"
#ifdef __cplusplus
}
#endif
