#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendVariable.h"
#include "BaseHashSet.h"
#include "BaseHashTable.h"
#include "ComponentReference.h"
#include "ComponentReferenceBasics.h"
#include "Config.h"
#include "DAEDump.h"
#include "DAEDumpTypes.h"
#include "Debug.h"
#include "DoubleEnded.h"
#include "DumpHTML.h"
#include "ElementSource.h"
#include "Error.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "ExpressionDump.h"
#include "ExpressionDumpTpl.h"
#include "Flags.h"
#include "GraphML.h"
#include "GraphvizDump.h"
#include "HashSet.h"
#include "IOStream.h"
#include "Initialization.h"
#include "List.h"
#include "MMath.h"
#include "Matching.h"
#include "System.h"
#include "Tpl.h"
#include "Util.h"
#include "ZeroCrossings.h"
#ifdef __cplusplus
}
#endif
