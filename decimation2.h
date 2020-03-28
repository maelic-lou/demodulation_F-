#ifndef DECIMATION2_H_
#define DECIMATION2_H_

#define BK_SIZE 4000
#define DECIM1 8
#define DECIM2 10


#include <ap_fixed.h>

#define W_IN   32
#define IW_IN  16
#define W_OUT   32
#define IW_OUT  16


typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_OUT,IW_OUT> in_t;


void decimation2(in_t ary[BK_SIZE/DECIM1],out_t new_ary[BK_SIZE/(DECIM1*DECIM2)]);

#endif
