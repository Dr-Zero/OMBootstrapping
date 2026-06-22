#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BackendDAEOptimize.h"
#include "BackendDAEUtil.h"
#include "BackendDump.h"
#include "BackendEquation.h"
#include "BackendInline.h"
#include "BackendUtil.h"
#include "BackendVarTransform.h"
#include "BackendVariable.h"
#include "ComponentReference.h"
#include "DAEDump.h"
#include "Debug.h"
#include "DoubleEnded.h"
#include "ExpandableArray.h"
#include "Expression.h"
#include "ExpressionBasics.h"
#include "Flags.h"
#include "HashTableCG.h"
#include "Inline.h"
#include "InlineArrayEquations.h"
#include "List.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
