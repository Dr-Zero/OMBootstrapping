#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "BaseModelica.h"
#include "ErrorExt.h"
#include "Flags.h"
#include "IOStream.h"
#include "List.h"
#include "NFAlgorithm.h"
#include "NFBinding.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFlatModel.h"
#include "NFFlatModelicaUtil.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFLookup.h"
#include "NFScalarize.h"
#include "NFStatement.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFTyping.h"
#include "NFVariable.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
