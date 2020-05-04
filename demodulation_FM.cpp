#include "demodulation_FM.h"

sin_t sin_lookup (int n){
	sin_t sin_table[DATA_SIZE/4+1] = {0,0.024541,0.049068,0.073565,0.098017,0.12241,0.14673,0.17096,0.19509,0.2191,0.24298,0.26671,0.29028,0.31368,0.33689,0.3599,0.38268,0.40524,0.42756,0.44961,0.4714,0.4929,0.5141,0.535,0.55557,0.57581,0.5957,0.61523,0.63439,0.65317,0.67156,0.68954,0.70711,0.72425,0.74095,0.75721,0.77301,0.78835,0.80321,0.81758,0.83147,0.84485,0.85773,0.87009,0.88192,0.89322,0.90399,0.91421,0.92388,0.93299,0.94154,0.94953,0.95694,0.96378,0.97003,0.9757,0.98079,0.98528,0.98918,0.99248,0.99518,0.99729,0.9988,0.9997,1};
	int idx;
	bool sign;
	if (n == DATA_SIZE){
		idx = 0;
		sign =0;
	}
	else if (n>=0 && n<=DATA_SIZE/4){
		idx = n;
		sign =0;
	}
	else if (n>=DATA_SIZE/4 && n<DATA_SIZE/2) {
		idx = DATA_SIZE/4-n%(DATA_SIZE/4);
		sign = 0;
	}
	else if (n>=DATA_SIZE/2 && n<3* DATA_SIZE/4){
		idx = n%(DATA_SIZE/4);
		sign =1;
	}
	else{
		idx = DATA_SIZE/4-n%(DATA_SIZE/4);
		sign =1;
	}
	if (sign)
	{
		return(-sin_table[idx]);
	}
	else
	{
		return(sin_table[idx]);
	}
}


cos_t cos_lookup (int n){
	cos_t cos_table[DATA_SIZE/4+1] = {1,0.9997,0.9988,0.99729,0.99518,0.99248,0.98918,0.98528,0.98079,0.9757,0.97003,0.96378,0.95694,0.94953,0.94154,0.93299,0.92388,0.91421,0.90399,0.89322,0.88192,0.87009,0.85773,0.84485,0.83147,0.81758,0.80321,0.78835,0.77301,0.75721,0.74095,0.72425,0.70711,0.68954,0.67156,0.65317,0.63439,0.61523,0.5957,0.57581,0.55557,0.535,0.5141,0.4929,0.4714,0.44961,0.42756,0.40524,0.38268,0.3599,0.33689,0.31368,0.29028,0.26671,0.24298,0.2191,0.19509,0.17096,0.14673,0.12241,0.098017,0.073565,0.049068,0.024541,0.0};
	int idx;
	bool sign;
	if (n == DATA_SIZE){
		idx = 0;
		sign =0;
	}
	else if (n>=0 && n<=DATA_SIZE/4){
		idx = n;
		sign =0;
	}
	else if (n>=DATA_SIZE/4 && n<DATA_SIZE/2) {
		idx = DATA_SIZE/4-n%(DATA_SIZE/4);
		sign = 1;
	}
	else if (n>=DATA_SIZE/2 && n<3* DATA_SIZE/4){
		idx = n%(DATA_SIZE/4);
		sign =1;
	}
	else{
		idx = DATA_SIZE/4-n%(DATA_SIZE/4);
		sign =0;
	}
	if (sign)
	{
		return(-cos_table[idx]);
	}
	else
	{
		return(cos_table[idx]);
	}
}



int demodulationFM(hls::stream<in_t> &y_I,hls::stream<in_t> &y_Q,hls::stream<in_t> &y_demod_d)
{

	//variable transportants les valeurs intermédiaires.
	in_t tmp_r;
	in_t tmp_i;
	in_t tmp_r_s;
	in_t tmp_i_s;
	in_t tmp_r_f;
	in_t tmp_i_f;

//	hls::stream<in_t> tmp_r_stm;
//	hls::stream<in_t> tmp_i_stm;
//	hls::stream<in_t> tmp_r_s_stm;
//	hls::stream<in_t> tmp_i_s_stm;
//	hls::stream<in_t> tmp_r_f_stm;
//	hls::stream<in_t> tmp_i_f_stm;

	//SHIFT variables
	in_t real;
	in_t imag;

	//convolution variable
	in_t hwin_I[LENGTH_WIN_CONV],hwin_Q[LENGTH_WIN_CONV]={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
	unsigned int n;
	const const_t c=0.0712 * DATA_SIZE;
	value_t value =-c;
	in_t value_r;
	in_t value_i;

	//demodulation variable
	in_t dii;
	in_t dqq;
	in_t ary_r_value_1;
	in_t ary_i_value_1;
	in_t value_d;
	in_t ary_r_value_0=0.0;
	in_t ary_i_value_0=0.0;
	int m=0;
	coeff_t coef[LENGTH_WIN_CONV] = {
			0.000411,
			0.001060,
			0.002105,
			0.003638,
			0.005724,
			0.008396,
			0.011635,
			0.015366,
			0.019457,
			0.023724,
			0.027939,
			0.031855,
			0.035221,
			0.037811,
			0.039443,
			0.040000,
			0.039443,
			0.037811,
			0.035221,
			0.031855,
			0.027939,
			0.023724,
			0.019457,
			0.015366,
			0.011635,
			0.008396,
			0.005724,
			0.003638,
			0.002105,
			0.001060,
			0.000411
	};
	HConvH:for (int l = 0; l < BK_SIZE; l++)
	{
		//Shift
		value = value +c;
		if (value>DATA_SIZE)
		{
			value = value - DATA_SIZE;
		}
		n = value;
		tmp_r = y_I.read();
		tmp_i = y_Q.read();
		real = cos_lookup(n) * tmp_r + sin_lookup(n) * tmp_i;
		imag = cos_lookup(n) * tmp_i - sin_lookup(n) * tmp_r;
		if (n == 0)
		{
			tmp_r = -real;
			tmp_i = -imag;
		}
		else if (n == 64)
		{
			tmp_r = -real;
			tmp_i = -imag;
		}
		else
		{
			tmp_r = real;
			tmp_i = imag;
		}

		// FIR
		in_t out_val_I = 0.0;
		in_t out_val_Q = 0.0;
		HConv:for(int i = 0; i < LENGTH_WIN_CONV; i++) {
			hwin_I[i] = i < LENGTH_WIN_CONV - 1 ? hwin_I[i + 1] : tmp_r;
			out_val_I += hwin_I[i] * coef[i]; //coeff est symétrique, c'est pourquoi nous pouvons utiliser cette formule
			hwin_Q[i] = i < LENGTH_WIN_CONV - 1 ? hwin_Q[i + 1] : tmp_i;
			out_val_Q += hwin_Q[i] * coef[i];
		}
		tmp_r = out_val_I;
		tmp_i = out_val_Q;

		// Decimation1 , Demodulation, Decimation2
		if(l%DECIM1==0)
		{
			ary_r_value_1=tmp_r;
			ary_i_value_1=tmp_i;
			dii = ary_r_value_1 - ary_r_value_0;
			dqq = ary_i_value_1 - ary_i_value_0;
			if (l%(DECIM1*DECIM2)==0)
			{
				m++;
				y_demod_d << (ary_r_value_1*dqq-ary_i_value_1*dii)/(ary_r_value_1*ary_r_value_1+ary_i_value_1*ary_i_value_1);
			}
			ary_r_value_0=ary_r_value_1;
			ary_i_value_0=ary_i_value_1;
		}
	}
	return 0;
}
