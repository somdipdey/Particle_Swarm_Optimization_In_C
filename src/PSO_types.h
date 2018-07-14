/*
 * Copyright @ Somdip Dey, 2018
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: PSO_types.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

#ifndef PSO_TYPES_H
#define PSO_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
} emxArray_struct1_T;

#endif                                 /*typedef_emxArray_struct1_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  double Cost;
  double Position;
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
#endif

/*
 * File trailer for PSO_types.h
 *
 * [EOF]
 */
