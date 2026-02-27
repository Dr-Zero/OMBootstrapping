#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBEquation.h"
#include "NBFunctionAlias.h"
#include "NBInline.h"
#include "NBPartitioning.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
