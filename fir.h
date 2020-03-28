#ifndef FIR_H_
#define FIR_H_

#define BK_SIZE 100
#define LENGTH_WIN_CONV 31

#include <ap_fixed.h>

#define W_IN    32
#define IW_IN   16
#define W_OUT   32
#define IW_OUT  16
#define W_COEF  32
#define IW_COEF 16

typedef ap_fixed<W_IN,IW_IN> in_t;
typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_COEF,IW_COEF> coef_t;

void fir(in_t indata[BK_SIZE],out_t outdata[BK_SIZE]);

#endif