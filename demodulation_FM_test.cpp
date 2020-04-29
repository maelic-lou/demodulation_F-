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

int main()
{
	unsigned err_cnt = 0;
	for (int i=0;i<1;i++) //boucle réalisant la démodulation sur 100000 valeurs
	{
		// input variables
		in_t ary_r[BK_SIZE];
		in_t ary_i[BK_SIZE];

		//output variables
		in_t hw_result[BK_SIZE/(DECIM1*DECIM2)];
		double sw_result[BK_SIZE/(DECIM1*DECIM2)];


		// Load input data from files
		char buf[100];
		FILE *datain;
		snprintf(buf, sizeof(buf), "values_FMcapture/values_%d.dat", i);
		datain = fopen(buf, "r");
		if (datain == NULL)
		{
			printf("errreur lecture fichier");
		}

		else
		{

			unsigned short int tmp;
			//
			for (int p = 0; p < 2*BK_SIZE; p++)
			{
				fscanf(datain, "%hu", &tmp);

				if (p%2==0)
				{
					ary_r[p/2] = tmp-127.5;
					// fprintf(file1r, "%lf,", ary_I[p/2]);
				}
				else
				{
					ary_i[(p-1)/2] = tmp-127.5;
				}
			}
		}

		// Execute the function tested
		demodulationFM(ary_r,ary_i,hw_result);

		//		char buf6[22];
		//		snprintf(buf6, sizeof(buf6), "data6_%d.csv", i);
		//		FILE *file6 = fopen(buf6, "w");
		//		if (file6 != NULL)
		//		{
		//			for (int z = 0; z < BK_SIZE / (DECIM1 * DECIM2) - 1; z++)
		//			{
		//				double temp = hw_result[z];
		//				fprintf(file6, "%lf,",temp);
		//			}
		//			double temp = hw_result[BK_SIZE / (DECIM1 * DECIM2) - 1];
		//			fprintf(file6, "%lf\n",temp);
		//			fclose(file6);
		//		}
		//		else
		//		{
		//			printf("erreur fichier");
		//		}


		// load espected output data from files
		FILE *data6file = fopen("data6.dat","r");
		if (data6file!=NULL)
		{
			for (int j=0;j<BK_SIZE/(DECIM1*DECIM2);j++)
			{
				double tmp;
				fscanf(data6file,"%lf",&tmp);
				sw_result[j]=tmp;
			}
		}
		else
		{
			printf("erreur lecture fichier");
		}







		// Check results compute error mean.
		cout << "Checking results against a tolerance of " << ABS_ERR_THRESH << endl;
		cout << fixed << setprecision(5);
		double mean_abs_err;
		for (unsigned i = 0; i < BK_SIZE/(DECIM1*DECIM2); i++) {
			float abs_err = abs(double(hw_result[i]) - sw_result[i]);

			if (fabs(abs_err) < ABS_ERR_THRESH) {
				mean_abs_err= mean_abs_err + (DECIM1*DECIM2)*abs_err/BK_SIZE;
#if WINDOW_FN_DEBUG
				cout << "i = " << i << "\t hw_result = " << hw_result[i];
				cout << "\t sw_result = " << sw_result[i] ;
				cout << "\t err = " << abs_err;
				cout << "\t mean_err" << mean_abs_err << endl;
			}

#endif
			else  {
				cout << "Error threshold exceeded: i = " << i;
				cout << "  Expected: " << sw_result[i];
				cout << "  Got: " << hw_result[i];
				cout << "  Delta: " << abs_err << endl;
				err_cnt++;
			}

			cout << mean_abs_err ;
			cout << endl;
		}

		// Print final status message
		if (err_cnt) {
			cout << "!!! TEST FAILED - " << err_cnt;
			cout << " results out of tolerance." << endl;
		} else
			cout << "Test Passed" << endl;

		// Only return 0 on success

	}
	return err_cnt;
}




