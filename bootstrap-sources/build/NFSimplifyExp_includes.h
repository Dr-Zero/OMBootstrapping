#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "Debug.h"
#include "Error.h"
#include "ErrorExt.h"
#include "Flags.h"
#include "List.h"
#include "Mutable.h"
#include "NFCall.h"
#include "NFCeval.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
