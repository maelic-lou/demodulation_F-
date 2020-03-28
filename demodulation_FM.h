#ifndef DEMODULATION_FM_H_
#define DEMODULATION_FM_H_

#include <ap_fixed.h>


#define BK_SIZE 40000
#define LENGTH_WIN_CONV 31
#define DATA_SIZE 256
#define DECIM1 8
#define DECIM2 10


#define W_SIN   9
#define IW_SIN   1
#define W_COS   9
#define IW_COS   1
#define W_CONST   32
#define IW_CONST  1
#define W_IN    32
#define IW_IN   16
#define W_OUT   32
#define IW_OUT  16
#define W_COEF  32
#define IW_COEF 16


typedef ap_fixed<W_SIN,IW_SIN> sin_t;
typedef ap_fixed<W_COS,IW_COS> cos_t;
typedef ap_fixed<W_CONST,IW_CONST> const_t;
typedef ap_fixed<W_IN,IW_IN> in_t;
typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_COEF,IW_COEF> coef_t;

void fir(in_t indata[BK_SIZE],out_t outdata[BK_SIZE]);

void shift(in_t indata_r[BK_SIZE],in_t indata_i[BK_SIZE],out_t outdata_r[BK_SIZE],out_t outdata_i[BK_SIZE]);

sin_t sin_lookup (int n);

cos_t cos_lookup (int n);

void demodulation(in_t ary_r[BK_SIZE/DECIM1],in_t ary_i[BK_SIZE/DECIM1],out_t ary_demod[BK_SIZE/DECIM1]);

void decimation2(in_t ary[BK_SIZE/DECIM1],out_t new_ary[BK_SIZE/(DECIM1*DECIM2)]);

void decimation1(in_t ary[BK_SIZE],out_t new_ary[BK_SIZE/DECIM1]);

int demodulationFM(in_t y_I[BK_SIZE],in_t y_Q[BK_SIZE],in_t y_demod[BK_SIZE]);

#endif
