#ifndef DEMODULATION_H_
#define DEMODULATION_H_

#define BK_SIZE 4000
#define DECIM1 8


#include <ap_fixed.h>

#define W_IN   32
#define IW_IN  16
#define W_OUT   32
#define IW_OUT  16


typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_OUT,IW_OUT> in_t;


void demodulation(in_t ary_r[BK_SIZE/DECIM1],in_t ary_i[BK_SIZE/DECIM1],out_t ary_demod[BK_SIZE/DECIM1]);
#endif
