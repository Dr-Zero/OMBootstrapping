#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ElementSource.h"
#include "Error.h"
#include "IOStream.h"
#include "List.h"
#include "NFAttributes.h"
#include "NFBackendExtension.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFlatModelicaUtil.h"
#include "NFInst.h"
#include "NFInstNode.h"
#include "NFPrefixes.h"
#include "NFType.h"
#include "NFTyping.h"
#include "NFVariable.h"
#include "SCodeUtil.h"
#include "StringUtil.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
