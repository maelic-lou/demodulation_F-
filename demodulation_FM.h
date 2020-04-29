#ifndef DEMODULATION_FM_H_
#define DEMODULATION_FM_H_

#include <ap_fixed.h>




#define BK_SIZE 100000
#define LENGTH_WIN_CONV 31
#define DATA_SIZE 256
#define DECIM1 8
#define DECIM2 10




#define W_SIN   9
#define IW_SIN   1
#define W_COS   9
#define IW_COS   1
#define W_CONST   32
#define IW_CONST  8
#define W_IN    32
#define IW_IN   16
#define W_OUT   32
#define IW_OUT  8
#define W_COEFF  32
#define IW_COEFF 16


typedef ap_fixed<W_SIN,IW_SIN> sin_t;
typedef ap_fixed<W_COS,IW_COS> cos_t;
typedef ap_fixed<W_CONST,IW_CONST> const_t;
typedef ap_fixed<W_IN,IW_IN> in_t;
typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_COEFF,IW_COEFF> coeff_t;



sin_t sin_lookup (int n);

cos_t cos_lookup (int n);

int demodulationFM(in_t y_I[BK_SIZE],in_t y_Q[BK_SIZE],in_t y_demod_d[BK_SIZE/(DECIM1*DECIM2)]);
//int demodulationFM(hls::stream<in_t> &y_I,hls::stream<in_t> &y_Q,hls::stream<in_t> &y_demod_d);

#endif
