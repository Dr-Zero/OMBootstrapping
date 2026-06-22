#ifndef NFExpandExp__H
#define NFExpandExp__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description NFCall_TYPED__CALL__desc;

extern struct record_description NFCeval_EvalTarget_EVAL__TARGET__desc;

extern struct record_description NFExpression_BOOLEAN__desc;

extern struct record_description NFExpression_CALL__desc;

extern struct record_description NFExpression_CREF__desc;

extern struct record_description NFExpression_EMPTY__desc;

extern struct record_description NFExpression_INTEGER__desc;

extern struct record_description NFExpression_LBINARY__desc;

extern struct record_description NFExpression_LUNARY__desc;

extern struct record_description NFExpression_MUTABLE__desc;

extern struct record_description NFExpression_SIZE__desc;

extern struct record_description NFOperator_OPERATOR__desc;

extern struct record_description NFSubscript_INDEX__desc;

extern struct record_description NFType_ARRAY__desc;

extern struct record_description NFType_REAL__desc;

extern struct record_description SourceInfo_SOURCEINFO__desc;


DLLDirection
modelica_metatype omc_NFExpandExp_expandCallArgs(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp);
#define boxptr_NFExpandExp_expandCallArgs omc_NFExpandExp_expandCallArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCallArgs,2,0) {(void*) boxptr_NFExpandExp_expandCallArgs,0}};
#define boxvar_NFExpandExp_expandCallArgs MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCallArgs)


DLLDirection
modelica_metatype omc_NFExpandExp_expandGeneric2(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _accum);
#define boxptr_NFExpandExp_expandGeneric2 omc_NFExpandExp_expandGeneric2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric2,2,0) {(void*) boxptr_NFExpandExp_expandGeneric2,0}};
#define boxvar_NFExpandExp_expandGeneric2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandGeneric(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandGeneric(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric,2,0) {(void*) boxptr_NFExpandExp_expandGeneric,0}};
#define boxvar_NFExpandExp_expandGeneric MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandGeneric)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCast(threadData_t *threadData, modelica_metatype _castExp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandCast(threadData_t *threadData, modelica_metatype _castExp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCast,2,0) {(void*) boxptr_NFExpandExp_expandCast,0}};
#define boxvar_NFExpandExp_expandCast MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCast)


DLLDirection
modelica_metatype omc_NFExpandExp_makeLogicalUnaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op);
#define boxptr_NFExpandExp_makeLogicalUnaryOp omc_NFExpandExp_makeLogicalUnaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLogicalUnaryOp,2,0) {(void*) boxptr_NFExpandExp_makeLogicalUnaryOp,0}};
#define boxvar_NFExpandExp_makeLogicalUnaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLogicalUnaryOp)


DLLDirection
modelica_metatype omc_NFExpandExp_expandLogicalUnary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandLogicalUnary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalUnary,2,0) {(void*) boxptr_NFExpandExp_expandLogicalUnary,0}};
#define boxvar_NFExpandExp_expandLogicalUnary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalUnary)


DLLDirection
modelica_metatype omc_NFExpandExp_makeLBinaryOp(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeLBinaryOp omc_NFExpandExp_makeLBinaryOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLBinaryOp,2,0) {(void*) boxptr_NFExpandExp_makeLBinaryOp,0}};
#define boxvar_NFExpandExp_makeLBinaryOp MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeLBinaryOp)


DLLDirection
modelica_metatype omc_NFExpandExp_expandLogicalBinary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandLogicalBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalBinary,2,0) {(void*) boxptr_NFExpandExp_expandLogicalBinary,0}};
#define boxvar_NFExpandExp_expandLogicalBinary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandLogicalBinary)


DLLDirection
modelica_metatype omc_NFExpandExp_expandUnary(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandUnary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandUnary,2,0) {(void*) boxptr_NFExpandExp_expandUnary,0}};
#define boxvar_NFExpandExp_expandUnary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandUnary)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_integer _n);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryPowMatrix2(threadData_t *threadData, modelica_metatype _matrix, modelica_metatype _n);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix2,2,0) {(void*) boxptr_NFExpandExp_expandBinaryPowMatrix2,0}};
#define boxvar_NFExpandExp_expandBinaryPowMatrix2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryPowMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryPowMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix,2,0) {(void*) boxptr_NFExpandExp_expandBinaryPowMatrix,0}};
#define boxvar_NFExpandExp_expandBinaryPowMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryPowMatrix)


DLLDirection
modelica_metatype omc_NFExpandExp_makeBinaryMatrixProduct2(threadData_t *threadData, modelica_metatype _row, modelica_metatype _matrix);
#define boxptr_NFExpandExp_makeBinaryMatrixProduct2 omc_NFExpandExp_makeBinaryMatrixProduct2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct2,2,0) {(void*) boxptr_NFExpandExp_makeBinaryMatrixProduct2,0}};
#define boxvar_NFExpandExp_makeBinaryMatrixProduct2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct2)


DLLDirection
modelica_metatype omc_NFExpandExp_makeBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeBinaryMatrixProduct omc_NFExpandExp_makeBinaryMatrixProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct,2,0) {(void*) boxptr_NFExpandExp_makeBinaryMatrixProduct,0}};
#define boxvar_NFExpandExp_makeBinaryMatrixProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeBinaryMatrixProduct)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryMatrixProduct(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixProduct,2,0) {(void*) boxptr_NFExpandExp_expandBinaryMatrixProduct,0}};
#define boxvar_NFExpandExp_expandBinaryMatrixProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixProduct)


DLLDirection
modelica_metatype omc_NFExpandExp_makeScalarProduct(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeScalarProduct omc_NFExpandExp_makeScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarProduct,2,0) {(void*) boxptr_NFExpandExp_makeScalarProduct,0}};
#define boxvar_NFExpandExp_makeScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarProduct)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryDotProduct(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryDotProduct(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryDotProduct,2,0) {(void*) boxptr_NFExpandExp_expandBinaryDotProduct,0}};
#define boxvar_NFExpandExp_expandBinaryDotProduct MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryDotProduct)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryMatrixVector(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryMatrixVector(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixVector,2,0) {(void*) boxptr_NFExpandExp_expandBinaryMatrixVector,0}};
#define boxvar_NFExpandExp_expandBinaryMatrixVector MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryMatrixVector)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryVectorMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryVectorMatrix(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryVectorMatrix,2,0) {(void*) boxptr_NFExpandExp_expandBinaryVectorMatrix,0}};
#define boxvar_NFExpandExp_expandBinaryVectorMatrix MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryVectorMatrix)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp, modelica_integer _scalarOp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryArrayScalar(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scalarOp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryArrayScalar,2,0) {(void*) boxptr_NFExpandExp_expandBinaryArrayScalar,0}};
#define boxvar_NFExpandExp_expandBinaryArrayScalar MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryArrayScalar)


DLLDirection
modelica_metatype omc_NFExpandExp_makeScalarArrayBinary__traverser(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2);
#define boxptr_NFExpandExp_makeScalarArrayBinary__traverser omc_NFExpandExp_makeScalarArrayBinary__traverser
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarArrayBinary__traverser,2,0) {(void*) boxptr_NFExpandExp_makeScalarArrayBinary__traverser,0}};
#define boxvar_NFExpandExp_makeScalarArrayBinary__traverser MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_makeScalarArrayBinary__traverser)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp, modelica_integer _scalarOp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryScalarArray(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _scalarOp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryScalarArray,2,0) {(void*) boxptr_NFExpandExp_expandBinaryScalarArray,0}};
#define boxvar_NFExpandExp_expandBinaryScalarArray MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryScalarArray)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryElementWise2(threadData_t *threadData, modelica_metatype _exp1, modelica_metatype _op, modelica_metatype _exp2, modelica_fnptr _func);
#define boxptr_NFExpandExp_expandBinaryElementWise2 omc_NFExpandExp_expandBinaryElementWise2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise2,2,0) {(void*) boxptr_NFExpandExp_expandBinaryElementWise2,0}};
#define boxvar_NFExpandExp_expandBinaryElementWise2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinaryElementWise(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinaryElementWise(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise,2,0) {(void*) boxptr_NFExpandExp_expandBinaryElementWise,0}};
#define boxvar_NFExpandExp_expandBinaryElementWise MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinaryElementWise)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _op, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBinary(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _op, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinary,2,0) {(void*) boxptr_NFExpandExp_expandBinary,0}};
#define boxvar_NFExpandExp_expandBinary MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBinary)


DLLDirection
modelica_metatype omc_NFExpandExp_expandSize(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandSize(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandSize,2,0) {(void*) boxptr_NFExpandExp_expandSize,0}};
#define boxvar_NFExpandExp_expandSize MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandSize)


DLLDirection
modelica_metatype omc_NFExpandExp_expandArrayConstructor2(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _ranges, modelica_metatype _iterators);
#define boxptr_NFExpandExp_expandArrayConstructor2 omc_NFExpandExp_expandArrayConstructor2
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor2,2,0) {(void*) boxptr_NFExpandExp_expandArrayConstructor2,0}};
#define boxvar_NFExpandExp_expandArrayConstructor2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandArrayConstructor(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _iterators, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandArrayConstructor(threadData_t *threadData, modelica_metatype _exp, modelica_metatype _ty, modelica_metatype _iterators, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor,2,0) {(void*) boxptr_NFExpandExp_expandArrayConstructor,0}};
#define boxvar_NFExpandExp_expandArrayConstructor MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArrayConstructor)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinGeneric2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _fn, modelica_metatype _ty, modelica_integer _var, modelica_integer _pur, modelica_metatype _attr);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinGeneric2(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _fn, modelica_metatype _ty, modelica_metatype _var, modelica_metatype _pur, modelica_metatype _attr);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric2,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinGeneric2,0}};
#define boxvar_NFExpandExp_expandBuiltinGeneric2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinGeneric(threadData_t *threadData, modelica_metatype _call, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinGeneric(threadData_t *threadData, modelica_metatype _call, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinGeneric,0}};
#define boxvar_NFExpandExp_expandBuiltinGeneric MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinGeneric)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinTranspose(threadData_t *threadData, modelica_metatype _arg, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinTranspose,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinTranspose,0}};
#define boxvar_NFExpandExp_expandBuiltinTranspose MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinTranspose)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinFill(threadData_t *threadData, modelica_metatype _args, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinFill(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinFill,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinFill,0}};
#define boxvar_NFExpandExp_expandBuiltinFill MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinFill)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinDiagonal(threadData_t *threadData, modelica_metatype _arg, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinDiagonal(threadData_t *threadData, modelica_metatype _arg, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinDiagonal,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinDiagonal,0}};
#define boxvar_NFExpandExp_expandBuiltinDiagonal MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinDiagonal)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinPromote(threadData_t *threadData, modelica_metatype _args, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinPromote(threadData_t *threadData, modelica_metatype _args, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinPromote,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinPromote,0}};
#define boxvar_NFExpandExp_expandBuiltinPromote MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinPromote)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinCat(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinCat(threadData_t *threadData, modelica_metatype _args, modelica_metatype _call, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCat,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinCat,0}};
#define boxvar_NFExpandExp_expandBuiltinCat MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCat)


DLLDirection
modelica_metatype omc_NFExpandExp_expandBuiltinCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _call, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandBuiltinCall(threadData_t *threadData, modelica_metatype _fn, modelica_metatype _args, modelica_metatype _call, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCall,2,0) {(void*) boxptr_NFExpandExp_expandBuiltinCall,0}};
#define boxvar_NFExpandExp_expandBuiltinCall MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandBuiltinCall)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _exp, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandCall(threadData_t *threadData, modelica_metatype _call, modelica_metatype _exp, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCall,2,0) {(void*) boxptr_NFExpandExp_expandCall,0}};
#define boxvar_NFExpandExp_expandCall MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCall)


DLLDirection
modelica_metatype omc_NFExpandExp_expandRange(threadData_t *threadData, modelica_metatype _exp, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandRange(threadData_t *threadData, modelica_metatype _exp, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandRange,2,0) {(void*) boxptr_NFExpandExp_expandRange,0}};
#define boxvar_NFExpandExp_expandRange MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandRange)


DLLDirection
modelica_metatype omc_NFExpandExp_expandTypename(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_NFExpandExp_expandTypename omc_NFExpandExp_expandTypename
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandTypename,2,0) {(void*) boxptr_NFExpandExp_expandTypename,0}};
#define boxvar_NFExpandExp_expandTypename MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandTypename)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCref4(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _comb, modelica_metatype _accum, modelica_metatype _restSubs, modelica_metatype _cref, modelica_metatype _crefType);
#define boxptr_NFExpandExp_expandCref4 omc_NFExpandExp_expandCref4
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref4,2,0) {(void*) boxptr_NFExpandExp_expandCref4,0}};
#define boxvar_NFExpandExp_expandCref4 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref4)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCref3(threadData_t *threadData, modelica_metatype _subs, modelica_metatype _cref, modelica_metatype _crefType, modelica_metatype _accum);
#define boxptr_NFExpandExp_expandCref3 omc_NFExpandExp_expandCref3
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref3,2,0) {(void*) boxptr_NFExpandExp_expandCref3,0}};
#define boxvar_NFExpandExp_expandCref3 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref3)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCref2(threadData_t *threadData, modelica_metatype _cref, modelica_boolean _backend, modelica_boolean _resize, modelica_metatype __omcQ_24in_5Fsubs);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandCref2(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype __omcQ_24in_5Fsubs);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref2,2,0) {(void*) boxptr_NFExpandExp_expandCref2,0}};
#define boxvar_NFExpandExp_expandCref2 MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref2)


DLLDirection
modelica_metatype omc_NFExpandExp_expandCref(threadData_t *threadData, modelica_metatype _crefExp, modelica_boolean _backend, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandCref(threadData_t *threadData, modelica_metatype _crefExp, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref,2,0) {(void*) boxptr_NFExpandExp_expandCref,0}};
#define boxvar_NFExpandExp_expandCref MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandCref)


DLLDirection
modelica_metatype omc_NFExpandExp_expandList(threadData_t *threadData, modelica_metatype _expl, modelica_boolean _abortOnFailure, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandList(threadData_t *threadData, modelica_metatype _expl, modelica_metatype _abortOnFailure, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandList,2,0) {(void*) boxptr_NFExpandExp_expandList,0}};
#define boxvar_NFExpandExp_expandList MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandList)


DLLDirection
modelica_metatype omc_NFExpandExp_expandArray(threadData_t *threadData, modelica_metatype _arr, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expandArray(threadData_t *threadData, modelica_metatype _arr, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArray,2,0) {(void*) boxptr_NFExpandExp_expandArray,0}};
#define boxvar_NFExpandExp_expandArray MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expandArray)


DLLDirection
modelica_metatype omc_NFExpandExp_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_boolean _backend, modelica_boolean _resize, modelica_boolean *out_expanded);
DLLDirection
modelica_metatype boxptr_NFExpandExp_expand(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fexp, modelica_metatype _backend, modelica_metatype _resize, modelica_metatype *out_expanded);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NFExpandExp_expand,2,0) {(void*) boxptr_NFExpandExp_expand,0}};
#define boxvar_NFExpandExp_expand MMC_REFSTRUCTLIT(boxvar_lit_NFExpandExp_expand)

#ifdef __cplusplus
}
#endif
#endif
