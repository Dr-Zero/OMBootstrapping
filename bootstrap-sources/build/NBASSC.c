#include "omc_simulation_settings.h"
#include "NBASSC.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(2)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT0}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(10)),_OMC_LIT0}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(5)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT5,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(3)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT5 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(-2)),MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT8,2,1) {MMC_IMMEDIATE(MMC_TAGFIXNUM(8)),_OMC_LIT7}};
#define _OMC_LIT8 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"

#include "NBASSC_includes.h"



void omc_NBASSC_printMatrix(threadData_t *threadData)
{

  ASSC_printMatrix();
  return;
}

void omc_NBASSC_freeMatrix(threadData_t *threadData)
{

  ASSC_freeMatrix();
  return;
}

void omc_NBASSC_setMatrix(threadData_t *threadData, modelica_integer _nv, modelica_integer _ne, modelica_integer _nz, modelica_metatype _adj, modelica_metatype _val)
{
  int _nv_ext;
  int _ne_ext;
  int _nz_ext;
  modelica_metatype _adj_ext;
  modelica_metatype _val_ext;
  _nv_ext = (int) _nv;
  _ne_ext = (int) _ne;
  _nz_ext = (int) _nz;
  _adj_ext = (modelica_metatype) _adj;
  _val_ext = (modelica_metatype) _val;
  ASSC_setMatrix(_nv_ext, _ne_ext, _nz_ext, _adj_ext, _val_ext);
  return;
}
void boxptr_NBASSC_setMatrix(threadData_t *threadData, modelica_metatype _nv, modelica_metatype _ne, modelica_metatype _nz, modelica_metatype _adj, modelica_metatype _val)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  tmp1 = mmc_unbox_integer(_nv);
  tmp2 = mmc_unbox_integer(_ne);
  tmp3 = mmc_unbox_integer(_nz);
  omc_NBASSC_setMatrix(threadData, tmp1, tmp2, tmp3, _adj, _val);
  return;
}

DLLDirection
void omc_NBASSC_main(threadData_t *threadData, modelica_metatype _eqns, modelica_metatype _vars)
{
  modelica_metatype _indices = NULL;
  modelica_metatype _values = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _indices has no default value.
  // _values has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _indices = arrayCreate(((modelica_integer) 3), tmpMeta1);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _values = arrayCreate(((modelica_integer) 3), tmpMeta2);

  arrayUpdate(_indices,((modelica_integer) 1),_OMC_LIT1);

  arrayUpdate(_values,((modelica_integer) 1),_OMC_LIT2);

  arrayUpdate(_indices,((modelica_integer) 2),_OMC_LIT3);

  arrayUpdate(_values,((modelica_integer) 2),_OMC_LIT4);

  arrayUpdate(_indices,((modelica_integer) 3),_OMC_LIT6);

  arrayUpdate(_values,((modelica_integer) 3),_OMC_LIT8);

  omc_NBASSC_setMatrix(threadData, ((modelica_integer) 3), ((modelica_integer) 3), ((modelica_integer) 5), _indices, _values);

  omc_NBASSC_freeMatrix(threadData);
  _return: OMC_LABEL_UNUSED
  return;
}

