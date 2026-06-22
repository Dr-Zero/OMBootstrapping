#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "Config.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NFBuiltinCall.h"
#include "NFCall.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFPrefixes.h"
#include "NFStructural.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFTyping.h"
#include "System.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
