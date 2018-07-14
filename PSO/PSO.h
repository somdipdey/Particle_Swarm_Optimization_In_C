/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: PSO.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

#ifndef PSO_H
#define PSO_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "PSO_types.h"

/* Function Declarations */
extern void PSO(double costFunction, short NVar, double varMin, double varMax,
                int maxIt, int NPop, double W, double wDamp, double C1, double
                C2, boolean_T showIterInfo, struct0_T *out);

#endif

/*
 * File trailer for PSO.h
 *
 * [EOF]
 */
