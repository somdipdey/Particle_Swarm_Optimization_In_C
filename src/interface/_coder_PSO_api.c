/*
 * Copyright @ Somdip Dey, 2018
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_PSO_api.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

/* Include Files */
#include <string.h>
#include "tmwtypes.h"
#include "_coder_PSO_api.h"
#include "_coder_PSO_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "PSO",                               /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int16_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NVar,
  const char_T *identifier);
static int16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *maxIt,
  const char_T *identifier);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *costFunction,
  const char_T *identifier);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T u);
static void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel);
static void emxFreeStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct);
static void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);
static void emxFree_struct1_T(const emlrtStack *sp, emxArray_struct1_T
  **pEmxArray);
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static void emxInit_struct1_T(const emlrtStack *sp, emxArray_struct1_T
  **pEmxArray, int32_T numDimensions, boolean_T doPush);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *showIterInfo, const char_T *identifier);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static int16_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *NVar
 *                const char_T *identifier
 * Return Type  : int16_T
 */
static int16_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NVar,
  const char_T *identifier)
{
  int16_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(NVar), &thisId);
  emlrtDestroyArray(&NVar);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int16_T
 */
static int16_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int16_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *maxIt
 *                const char_T *identifier
 * Return Type  : int32_T
 */
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *maxIt,
  const char_T *identifier)
{
  int32_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(maxIt), &thisId);
  emlrtDestroyArray(&maxIt);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *costFunction
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *costFunction,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(costFunction), &thisId);
  emlrtDestroyArray(&costFunction);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct0_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "pop", "BestSol", "BestCosts" };

  const mxArray *b_y;
  int32_T iv0[1];
  static const char * sv1[4] = { "Position", "Velocity", "Cost", "Best" };

  int32_T i;
  int32_T b_j0;
  emxArray_real_T *b_u;
  const mxArray *c_y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 0, 0 };

  static const char * sv2[2] = { "Cost", "Position" };

  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 0, 0 };

  int32_T i0;
  static const char * sv3[2] = { "Position", "Cost" };

  const mxArray *d_y;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 0, 0 };

  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  iv0[0] = u.pop->size[0];
  emlrtAssign(&b_y, emlrtCreateStructArray(1, iv0, 4, sv1));
  emlrtCreateField(b_y, "Position");
  emlrtCreateField(b_y, "Velocity");
  emlrtCreateField(b_y, "Cost");
  emlrtCreateField(b_y, "Best");
  i = 0;
  for (b_j0 = 0; b_j0 < u.pop->size[0U]; b_j0++) {
    c_y = NULL;
    m0 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&c_y, m0);
    emlrtSetFieldR2017b(b_y, i, "Position", c_y, 0);
    c_y = NULL;
    m0 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&c_y, m0);
    emlrtSetFieldR2017b(b_y, i, "Velocity", c_y, 1);
    c_y = NULL;
    m0 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&c_y, m0);
    emlrtSetFieldR2017b(b_y, i, "Cost", c_y, 2);
    c_y = NULL;
    emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 2, sv3));
    d_y = NULL;
    m0 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&d_y, m0);
    emlrtSetFieldR2017b(c_y, 0, "Position", d_y, 0);
    d_y = NULL;
    m0 = emlrtCreateNumericArray(2, iv5, mxDOUBLE_CLASS, mxREAL);
    emlrtAssign(&d_y, m0);
    emlrtSetFieldR2017b(c_y, 0, "Cost", d_y, 1);
    emlrtSetFieldR2017b(b_y, i, "Best", c_y, 3);
    i++;
  }

  emxInit_real_T(sp, &b_u, 1, true);
  emlrtSetFieldR2017b(y, 0, "pop", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv2));
  c_y = NULL;
  m0 = emlrtCreateDoubleScalar(u.BestSol.Cost);
  emlrtAssign(&c_y, m0);
  emlrtSetFieldR2017b(b_y, 0, "Cost", c_y, 0);
  c_y = NULL;
  m0 = emlrtCreateDoubleScalar(u.BestSol.Position);
  emlrtAssign(&c_y, m0);
  emlrtSetFieldR2017b(b_y, 0, "Position", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "BestSol", b_y, 1);
  i0 = b_u->size[0];
  b_u->size[0] = u.BestCosts->size[0];
  emxEnsureCapacity_real_T(sp, b_u, i0);
  b_j0 = u.BestCosts->size[0];
  for (i0 = 0; i0 < b_j0; i0++) {
    b_u->data[i0] = u.BestCosts->data[i0];
  }

  b_y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[2])b_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m0);
  i0 = 0;
  i = 0;
  emxFree_real_T(sp, &b_u);
  while (i < u.BestCosts->size[0]) {
    pData[i0] = u.BestCosts->data[i];
    i0++;
    i++;
  }

  emlrtAssign(&b_y, m0);
  emlrtSetFieldR2017b(y, 0, "BestCosts", b_y, 2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T *emxArray
 *                int32_T oldNumel
 * Return Type  : void
 */
static void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex2018a(sp, (void *)emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct0_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct)
{
  emxFree_struct1_T(sp, &pStruct->pop);
  emxFree_real_T(sp, &pStruct->BestCosts);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex2018a(sp, (void *)(*pEmxArray)->data);
    }

    emlrtFreeMex2018a(sp, (void *)(*pEmxArray)->size);
    emlrtFreeMex2018a(sp, (void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_struct1_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_struct1_T(const emlrtStack *sp, emxArray_struct1_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_struct1_T *)NULL) {
    emlrtFreeMex2018a(sp, (void *)(*pEmxArray)->size);
    emlrtFreeMex2018a(sp, (void *)*pEmxArray);
    *pEmxArray = (emxArray_struct1_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct0_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush)
{
  emxInit_struct1_T(sp, &pStruct->pop, 1, doPush);
  emxInit_real_T(sp, &pStruct->BestCosts, 1, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2018a(sp, (void *)pEmxArray, (void (*)(const
      void *, void *))emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_struct1_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_struct1_T(const emlrtStack *sp, emxArray_struct1_T
  **pEmxArray, int32_T numDimensions, boolean_T doPush)
{
  emxArray_struct1_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_struct1_T *)emlrtMallocMex(sizeof(emxArray_struct1_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2018a(sp, (void *)pEmxArray, (void (*)(const
      void *, void *))emxFree_struct1_T);
  }

  emxArray = *pEmxArray;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int32_T
 */
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *showIterInfo
 *                const char_T *identifier
 * Return Type  : boolean_T
 */
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *showIterInfo, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(showIterInfo), &thisId);
  emlrtDestroyArray(&showIterInfo);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : boolean_T
 */
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : int16_T
 */
static int16_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int16_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int16", false, 0U, &dims);
  ret = *(int16_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : int32_T
 */
static int32_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : boolean_T
 */
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray * const prhs[11]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void PSO_api(const mxArray * const prhs[11], int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T out;
  real_T costFunction;
  int16_T NVar;
  real_T varMin;
  real_T varMax;
  int32_T maxIt;
  int32_T NPop;
  real_T W;
  real_T wDamp;
  real_T C1;
  real_T C2;
  boolean_T showIterInfo;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &out, true);

  /* Marshall function inputs */
  costFunction = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "costFunction");
  NVar = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "NVar");
  varMin = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "varMin");
  varMax = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "varMax");
  maxIt = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "maxIt");
  NPop = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "NPop");
  W = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "W");
  wDamp = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "wDamp");
  C1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "C1");
  C2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "C2");
  showIterInfo = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "showIterInfo");

  /* Invoke the target function */
  PSO(costFunction, NVar, varMin, varMax, maxIt, NPop, W, wDamp, C1, C2,
      showIterInfo, &out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, out);
  emxFreeStruct_struct0_T(&st, &out);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PSO_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  PSO_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PSO_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PSO_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_PSO_api.c
 *
 * [EOF]
 */
