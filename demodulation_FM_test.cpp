#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#include "demodulation_FM.h"

#ifdef FLOAT_DATA
#define ABS_ERR_THRESH 0.0
#else
#define ABS_ERR_THRESH 0.1
#endif

#define WINDOW_FN_DEBUG 1

int main(){

		unsigned err_cnt = 0;

		FILE *datain;
		FILE *fp;
		FILE *fp_r_s;
		FILE *fp_i_s;
		datain = fopen("FMcapture1.dat", "rb");
		fp=fopen("data6.dat","r");
//		fp_r_s=fopen("data2_r.dat","r");
//		fp_i_s=fopen("data2_i.dat","r");

		unsigned char char_I[BK_SIZE];
		unsigned char char_Q[BK_SIZE];
		unsigned short int ybb[BK_SIZE];
		double samp_I[BK_SIZE];
		double samp_Q[BK_SIZE];
//		double y_temp_r_s;
//		double y_temp_i_s;
		double y_temp;

//		Variable utilisées pour la lecture du signal brut à démoduler
		in_t ary_r[BK_SIZE];
		in_t ary_i[BK_SIZE];
		in_t hw_result[BK_SIZE/(DECIM1*DECIM2)];
		double sw_result[BK_SIZE/(DECIM1*DECIM2)];

//		Variables du signal déplacé en fréquence par le code C de vivado hls.
		in_t ary_r_s[BK_SIZE];
		in_t ary_i_s[BK_SIZE];

//		Variables du signal déplacé en fréquence par le code C de vivado hls.
//		double sw_result_r_s[BK_SIZE];
//		double sw_result_i_s[BK_SIZE];


		fread(ybb, sizeof(unsigned short int), BK_SIZE, datain);
		for (int p = 0; p < BK_SIZE; p++)
		{
			char_Q[p] = (ybb[p] & 0xFF00) >> 8;
			char_I[p] = (ybb[p]) & 0x00FF;
			samp_I[p] = (double)char_I[p] - 127.5;
			samp_Q[p] = (double)char_Q[p] - 127.5;
			ary_r[p]=samp_I[p];
			ary_i[p]=samp_Q[p];
		}



//		shift(ary_r,ary_i,ary_r_s,ary_i_s);
//
//		for (int i=0;i<BK_SIZE/(DECIM1*DECIM2);i++)
//		{
//			fscanf(fp,"%lf",&temp_r_s);
//
//		}


		for(int i=0;i<BK_SIZE/(DECIM1*DECIM2);i++)
		{
			fscanf(fp,"%lf",& y_temp);
			sw_result[i]=y_temp;
		}


		demodulationFM(ary_r,ary_i,hw_result);


//		   // Check results
//		   cout << "Checking results against a tolerance of " << ABS_ERR_THRESH << endl;
//		   cout << fixed << setprecision(5);
//////
		   for (unsigned i = 0; i < BK_SIZE/(DECIM1*DECIM2); i++) {
		      float abs_err = double(hw_result[i]) - sw_result[i];
		#if WINDOW_FN_DEBUG
		      cout << "i = " << i << "\t hw_result = " << hw_result[i];
		      cout << "\t sw_result = " << sw_result[i] << endl;
//		      cout << "i = " << i << "\t hw_result = " << ary_r[i];
//		     		      cout << "\t sw_result = " << ary_i[i] << endl;
		#endif
		      if (fabs(abs_err) > ABS_ERR_THRESH) {
		         cout << "Error threshold exceeded: i = " << i;
		         cout << "  Expected: " << sw_result[i];
		         cout << "  Got: " << hw_result[i];
		         cout << "  Delta: " << abs_err << endl;
		         err_cnt++;
		      }
		   }
//		   cout << endl;
//
//
//		   // Print final status message
//		   if (err_cnt) {
//		      cout << "!!! TEST FAILED - " << err_cnt;
//		      cout << " results out of tolerance." << endl;
//		   } else
//		      cout << "Test Passed" << endl;
//
//		   // Only return 0 on success
//		   return err_cnt;

		}
