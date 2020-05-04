#ifndef DEMODULATION_FM_H_
#define DEMODULATION_FM_H_

#include <ap_fixed.h>
#include "hls_stream.h"
#include "hls_stream.h"




#define BK_SIZE 100000
#define LENGTH_WIN_CONV 31
#define DATA_SIZE 256
#define DECIM1 8
#define DECIM2 10




#define W_SIN   9
#define IW_SIN   1
#define W_COS   9
#define IW_COS   1
#define W_CONST   12
#define IW_CONST  5
#define W_IN    18
#define IW_IN   6
#define W_VALUE  18
#define IW_VALUE  10
#define W_COEFF  14
#define IW_COEFF 0


typedef ap_fixed<W_SIN,IW_SIN> sin_t;
typedef ap_fixed<W_COS,IW_COS> cos_t;
typedef ap_ufixed<W_CONST,IW_CONST> const_t;
typedef ap_fixed<W_IN,IW_IN> in_t;
typedef ap_fixed<W_VALUE,IW_VALUE> value_t;
typedef ap_ufixed<W_COEFF,IW_COEFF> coeff_t;



sin_t sin_lookup (int n);

cos_t cos_lookup (int n);

void shift(in_t tmp_r,in_t tmp_i,in_t tmp_r_s,in_t tmp_i_s,unsigned int n);

int demodulationFM(hls::stream<in_t> &y_I,hls::stream<in_t> &y_Q,hls::stream<in_t> &y_demod_d);
//int demodulationFM(hls::stream<in_t> &y_I,hls::stream<in_t> &y_Q,hls::stream<in_t> &y_demod_d);

#endif
