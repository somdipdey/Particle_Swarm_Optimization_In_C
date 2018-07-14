/*
 * Copyright @ Somdip Dey, 2018
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_PSO_api.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

#ifndef _CODER_PSO_API_H
#define _CODER_PSO_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_PSO_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_emxArray_struct1_T
#define typedef_emxArray_struct1_T

typedef struct {
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_struct1_T;

#endif                                 /*typedef_emxArray_struct1_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  real_T Cost;
  real_T Position;
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_struct1_T *pop;
  struct3_T BestSol;
  emxArray_real_T *BestCosts;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void PSO(real_T costFunction, int16_T NVar, real_T varMin, real_T varMax,
                int32_T maxIt, int32_T NPop, real_T W, real_T wDamp, real_T C1,
                real_T C2, boolean_T showIterInfo, struct0_T *out);
extern void PSO_api(const mxArray * const prhs[11], int32_T nlhs, const mxArray *
                    plhs[1]);
extern void PSO_atexit(void);
extern void PSO_initialize(void);
extern void PSO_terminate(void);
extern void PSO_xil_terminate(void);

#endif

/*
 * File trailer for _coder_PSO_api.h
 *
 * [EOF]
 */
