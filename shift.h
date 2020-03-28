#ifndef SHIFT_H_
#define SHIFT_H_

#define BK_SIZE 500
#define DATA_SIZE 256


#include <ap_fixed.h>

#define W_SIN   9
#define IW_SIN   1
#define W_COS   9
#define IW_COS   1
#define W_IN   32
#define IW_IN  16
#define W_OUT   32
#define IW_OUT  16
#define W_CONST   32
#define IW_CONST  1



typedef ap_fixed<W_SIN,IW_SIN> sin_t;
typedef ap_fixed<W_COS,IW_COS> cos_t;
typedef ap_fixed<W_OUT,IW_OUT> out_t;
typedef ap_fixed<W_OUT,IW_OUT> in_t;
typedef ap_fixed<W_CONST,IW_CONST> const_t;

void shift(in_t indata_r[BK_SIZE],in_t indata_i[BK_SIZE],out_t outdata_r[BK_SIZE],out_t outdata_i[BK_SIZE]);

sin_t sin_lookup (int n);

cos_t cos_lookup (int n);

#endif






