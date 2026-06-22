#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "BackendDAETransform.h"
#include "BackendDAEUtil.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "DAEDump.h"
#include "DAEDumpTypes.h"
#include "DAEUtil.h"
#include "Debug.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionDump.h"
#include "Flags.h"
#include "List.h"
#include "Print.h"
#include "System.h"
#include "Types.h"
#include "TypesDump.h"
#include "Util.h"
#include "XMLDump.h"
#include "ZeroCrossings.h"
#ifdef __cplusplus
}
#endif
