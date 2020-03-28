#include "demodulation_FM.h"

void fir(in_t x[BK_SIZE], out_t y[BK_SIZE])
{
	coef_t coef[LENGTH_WIN_CONV] = {
			-0.000011,
			-0.000078,
			-0.000230,
			-0.000434,
			-0.000502,
			0.000000,
			0.001791,
			0.005790,
			0.012893,
			0.023638,
			0.037853,
			0.054444,
			0.071422,
			0.086246,
			0.096391,
			0.100000,
			0.096391,
			0.086246,
			0.071422,
			0.054444,
			0.037853,
			0.023638,
			0.012893,
			0.005790,
			0.001791,
			0.000000,
			-0.000502,
			-0.000434,
			-0.000230,
			-0.000078,
			-0.000011};
	for (int j = 0; j < LENGTH_WIN_CONV; j++)
	{
		y[j] = x[j];
	}
	for (int l = LENGTH_WIN_CONV; l < BK_SIZE; l++)
	{
		out_t somme_r = 0.0;
		for (int k = 0; k < LENGTH_WIN_CONV; k++)
		{
			somme_r = somme_r + coef[k] * x[l - k];
		}
		y[l] = somme_r;
	}
}

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


void shift(in_t ary_r[BK_SIZE],in_t ary_i[BK_SIZE],out_t ary_r_s[BK_SIZE],out_t ary_i_s[BK_SIZE])
{
	for (int m = 0 ; m<BK_SIZE ; m++)
	{
		int n=m*178*DATA_SIZE/(2500);
		n=n%DATA_SIZE;
		in_t real=cos_lookup(n)*ary_r[m]+sin_lookup(n)*ary_i[m];
		in_t imag=cos_lookup(n)*ary_i[m]-sin_lookup(n)*ary_r[m];
		if(n==0)
		{
			ary_r_s[m]=-real;
			ary_i_s[m]=-imag;
		}
		else
		{
			ary_r_s[m]=real;
			ary_i_s[m]=imag;
		}
	}
	return ;
}

void decimation1(in_t ary[BK_SIZE],out_t new_ary[BK_SIZE/DECIM1])
{
	for (int n =0; n<BK_SIZE/DECIM1;n++)
	{
		new_ary[n]=ary[n*DECIM1];
	}
}

void decimation2(in_t ary[BK_SIZE/DECIM1],out_t new_ary[BK_SIZE/(DECIM1*DECIM2)])
{
	for (int n =0; n<BK_SIZE/(DECIM1*DECIM2);n++)
	{
		new_ary[n]=ary[n*DECIM2];
	}
}



void demodulation(in_t ary_r[BK_SIZE/DECIM1],in_t ary_i[BK_SIZE/DECIM1],out_t ary_demod[BK_SIZE/DECIM1])
{
	in_t dii;
	in_t dqq;
	ary_demod[0]=0;
	for (int q=1; q < BK_SIZE/DECIM1; q++)
	{
		dii = ary_r[q] - ary_r[q-1];
		dqq = ary_i[q] - ary_i[q-1];
		ary_demod[q] = (ary_r[q]*dqq-ary_i[q]*dii)/(ary_r[q]*ary_r[q]+ary_i[q]*ary_i[q]);
	}
}

int demodulationFM(in_t y_I[BK_SIZE],in_t y_Q[BK_SIZE],in_t y_demod_d[BK_SIZE])
{





	// SHIFT du signal

//	FILE *file1r=fopen("data1_r.csv", "w");
//	FILE *file1i=fopen("data1_i.csv", "w");
//	if (file1r!=NULL)
//	{
//		for (int r=0; r<BK_SIZE-1; r++){
//			double y_I_samp=y_I[r];
//			fprintf(file1r, "%lf,", y_I_samp);
//		}
//		double y_I_samp=y_I[BK_SIZE-1];
//		fprintf(file1r, "%lf\n", y_I_samp);
//
//		for (int s=0; s<BK_SIZE-1; s++){
//			double y_Q_samp=y_Q[s];
//			fprintf(file1i, "%lf,", y_Q_samp);
//		}
//		double y_Q_samp=y_Q[BK_SIZE-1];
//		fprintf(file1i, "%lf\n", y_Q_samp);
//		fclose(file1r);
//		fclose(file1i);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}

	in_t y_I_s[BK_SIZE];
	in_t y_Q_s[BK_SIZE];

	shift(y_I,y_Q,y_I_s,y_Q_s);

//	FILE *file2r=fopen("data2_r.csv", "w");
//	FILE *file2i=fopen("data2_i.csv", "w");
//	if (file2r!=NULL)
//	{
//		for (int s=0; s<BK_SIZE-1; s++){
//			double y_r_s_samp=y_I_s[s];
//			fprintf(file2r, "%lf,", y_r_s_samp);
//		}
//		double y_r_s_samp=y_I_s[BK_SIZE-1];
//		fprintf(file2r, "%lf\n", y_r_s_samp);
//
//		for (int t=0; t<BK_SIZE-1; t++){
//			double y_i_s_samp=y_Q_s[t];
//			fprintf(file2i, "%lf,", y_i_s_samp);
//		}
//		double y_i_s_samp=y_Q_s[BK_SIZE-1];
//		fprintf(file2i, "%lf\n", y_i_s_samp);
//		fclose(file2r);
//		fclose(file2i);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}

	in_t y_I_fpb[BK_SIZE];
	in_t y_Q_fpb[BK_SIZE];

	fir(y_I_s,y_I_fpb);
	fir(y_Q_s,y_Q_fpb);


//	FILE *file3_r=fopen("data3_r.csv", "w");
//	FILE *file3_i=fopen("data3_i.csv", "w");
//	if (file3_r!=NULL)
//	{
//		for (int u=0; u<BK_SIZE-1; u++){
//			double y_r_fpb_samp=y_I_fpb[u];
//			fprintf(file3_r, "%lf,", y_r_fpb_samp);
//		}
//		double y_r_fpb_samp=y_I_fpb[BK_SIZE-1];
//		fprintf(file3_r, "%lf\n",y_r_fpb_samp);
//		for (int v=0; v<BK_SIZE-1; v++){
//			double y_i_fpb_samp=y_Q_fpb[v];
//			fprintf(file3_i, "%lf,", y_i_fpb_samp);
//		}
//		double y_i_fpb_samp=y_Q_fpb[BK_SIZE-1];
//		fprintf(file3_i, "%lf\n", y_i_fpb_samp);
//
//		fclose(file3_r);
//		fclose(file3_i);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}

	in_t y_I_d[BK_SIZE/DECIM1];
	in_t y_Q_d[BK_SIZE/DECIM1];
	decimation1(y_I_fpb,y_I_d);
	decimation1(y_Q_fpb,y_Q_d);

//	FILE *file4_i=fopen("data4_i.csv", "w");
//	FILE *file4_r=fopen("data4_r.csv", "w");
//	if (file4_r!=NULL)
//	{
//		for (int w=0; w<BK_SIZE/DECIM1-1; w++){
//			double y_r_d_samp=y_I_d[w];
//			fprintf(file4_r, "%lf,", y_r_d_samp);
//		}
//		double y_r_d_samp=y_I_d[BK_SIZE-1];
//		fprintf(file4_r, "%lf\n", y_r_d_samp);
//		for (int x=0; x<BK_SIZE/DECIM1-1; x++){
//			double y_i_d_samp=y_Q_d[x];
//			fprintf(file4_i, "%lf,", y_i_d_samp);
//		}
//		double y_i_d_samp=y_Q_d[BK_SIZE/DECIM1-1];
//		fprintf(file4_i, "%lf\n", y_i_d_samp);
//
//		fclose(file4_r);
//		fclose(file4_i);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}

	in_t y_demod_nd[BK_SIZE/DECIM1];
	demodulation(y_I_d, y_Q_d,y_demod_nd);

//	FILE *file5=fopen("data5.csv", "w");
//	if (file5!=NULL)
//	{
//		for (int y=0; y<BK_SIZE/DECIM1-1; y++){
//			double y_demod_samp=y_demod_nd[y];
//			fprintf(file5, "%lf,", y_demod_samp);
//		}
//		double y_demod_samp=y_demod_nd[BK_SIZE/DECIM1-1];
//		fprintf(file5, "%lf\n", y_demod_samp);
//		fclose(file5);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}

	// fir(y_demod,len_wind,FC,FE/8,BK_SIZE/DECIM1);



	decimation2(y_demod_nd,y_demod_d);

//	FILE *file6=fopen("data6.csv", "w");
//	if (file6!=NULL)
//	{
//		for (int z=0; z<BK_SIZE/(DECIM1*DECIM2)-1; z++){
//			double y_demod_d_samp=y_demod_d[z];
//			fprintf(file6, "%lf,", y_demod_d_samp);
//		}
//		double y_demod_d_samp=y_demod_d[BK_SIZE/(DECIM1*DECIM2)-1];
//		fprintf(file6, "%lf\n", y_demod_d_samp);
//		fclose(file6);
//	}
//	else
//	{
//		printf("erreur fichier");
//	}


	return 0;
}


