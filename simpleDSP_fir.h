/* begin simpleDSP_fir.h */
#ifndef _SIMPLEDSP_FIR_H
#define _SIMPLEDSP_FIR_H

#include "simpleDSP_Global.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int coefBLen;
    float *coefsB;
    float *dlyX;
}FIR;

void init(FIR *fir, int coefBLen, float *coefsB);
float filt(FIR *fir, int input);

#endif /*end simpleDSP_fir.h */
