#include <stdio.h>
#include <math.h>
#include <complex.h>
#define BK_SIZE 40000
#define DATA_SIZE 256
#define LENGTH_WIN 31
#define pi 3.141592

// #define FS 2500000
// #define FC 20000

#define DECIM1 8
#define DECIM2 10


  // int BK_SIZE = 64;
  // const int DECIM1 =8;
  // const int DECIM2 =10;
  // double TE=1/FE;
  // double TC=1/FC;
  

  

  // FILE coeff_File = fopen("coefficient_fenetre.dat","r");

  // fread(coef_fen, sizeof(unsigned short int), BK_SIZE, datain);



void fir(double x[BK_SIZE],double y[BK_SIZE])
{
  int coeff[LENGTH_WIN] = {
    2,
4,
9,
15,
23,
34,
48,
63,
80,
97,
114,
130,
144,
155,
162,
164,
162,
155,
144,
130,
114,
97,
80,
63,
48,
34,
23,
15,
9,
4,
2
  };

  for (int j=0;j<LENGTH_WIN;j++)
  {
    y[j]=x[j];
  }
  for (int l=LENGTH_WIN;l<BK_SIZE;l++)
  {
    int somme_r =0;
    for (int k=0;k<LENGTH_WIN;k++)
    {
      somme_r=somme_r+coeff[k]*x[l-k];
    }
    y[l]=somme_r;
  } 
}

double sin_lookup (int n){
double sin_table[DATA_SIZE/4+1] = {0,0.024541,0.049068,0.073565,0.098017,0.12241,0.14673,0.17096,0.19509,0.2191,0.24298,0.26671,0.29028,0.31368,0.33689,0.3599,0.38268,0.40524,0.42756,0.44961,0.4714,0.4929,0.5141,0.535,0.55557,0.57581,0.5957,0.61523,0.63439,0.65317,0.67156,0.68954,0.70711,0.72425,0.74095,0.75721,0.77301,0.78835,0.80321,0.81758,0.83147,0.84485,0.85773,0.87009,0.88192,0.89322,0.90399,0.91421,0.92388,0.93299,0.94154,0.94953,0.95694,0.96378,0.97003,0.9757,0.98079,0.98528,0.98918,0.99248,0.99518,0.99729,0.9988,0.9997,1};
int idx;
_Bool sign;
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

double cos_lookup (int n){
double cos_table[DATA_SIZE/4+1] = {1,0.9997,0.9988,0.99729,0.99518,0.99248,0.98918,0.98528,0.98079,0.9757,0.97003,0.96378,0.95694,0.94953,0.94154,0.93299,0.92388,0.91421,0.90399,0.89322,0.88192,0.87009,0.85773,0.84485,0.83147,0.81758,0.80321,0.78835,0.77301,0.75721,0.74095,0.72425,0.70711,0.68954,0.67156,0.65317,0.63439,0.61523,0.5957,0.57581,0.55557,0.535,0.5141,0.4929,0.4714,0.44961,0.42756,0.40524,0.38268,0.3599,0.33689,0.31368,0.29028,0.26671,0.24298,0.2191,0.19509,0.17096,0.14673,0.12241,0.098017,0.073565,0.049068,0.024541,0.0};
int idx;
_Bool sign;
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




void shift(double ary_r[BK_SIZE],double ary_i[BK_SIZE],double ary_r_s[BK_SIZE],double ary_i_s[BK_SIZE])
{
  for (int m = 0 ; m<BK_SIZE ; m++)
  {
    int n=m*178*DATA_SIZE/(2500);
    n=n%DATA_SIZE;
    double real=cos_lookup(n)*ary_r[m]+sin_lookup(n)*ary_i[m];
    double imag=cos_lookup(n)*ary_i[m]-sin_lookup(n)*ary_r[m];
    ary_r_s[m]=real;
    ary_i_s[m]=imag;
  }
  // int n=(BK_SIZE-1)*CONST*DATA_SIZE/(2*pi);
  // n=n%DATA_SIZE;
  // double real=cos_lookup(n)*ary_r[BK_SIZE-1]+sin_lookup(n)*ary_i[BK_SIZE-1];
  // double imag=cos_lookup(n)*ary_i[BK_SIZE-1]-sin_lookup(n)*ary_r[BK_SIZE-1];
  // ary_r[BK_SIZE-1]=real;
  // ary_i[BK_SIZE-1]=imag;
  // printf("%lf",list_const_cos[1]);
  // fprintf(real_FILE1, "%lf",real);
  // fclose(real_FILE1);
  // fclose(arg_FILE);
  return ;
}




void decimation1(double ary[BK_SIZE],double new_ary[BK_SIZE/DECIM1])
{
  for (int n =0; n<BK_SIZE/DECIM1;n++)
  {
    new_ary[n]=ary[n*DECIM1];
  }
}

void decimation2(double new_ary[BK_SIZE/(DECIM1*DECIM2)],double ary[BK_SIZE/(DECIM1)])
{
  for (int o =0; o<BK_SIZE/(DECIM1*DECIM2);o++)
  {
    new_ary[o]=ary[o*DECIM2];
  }
} 






void loadFile(char filename[BK_SIZE], double ary_I[BK_SIZE],double ary_Q[BK_SIZE])
{
 FILE *datain;
 datain = fopen(filename, "rb");
 unsigned char char_I[BK_SIZE];
 unsigned char char_Q[BK_SIZE];

  unsigned short int ybb[BK_SIZE] ;
  fread(ybb, sizeof(unsigned short int), BK_SIZE, datain);
  for (int p=0 ; p<BK_SIZE ; p++)
  {
    char_Q[p]= (ybb[p] & 0xFF00)>>8;
    char_I[p]=  (ybb[p]) & 0x00FF;
    ary_I[p]=(double)char_I[p]-127.5;
    ary_Q[p]=(double)char_Q[p]-127.5;
  }

  
   
}

void demodulation(double ary_r[BK_SIZE/DECIM1],double ary_i[BK_SIZE/DECIM1],double ary_demod[BK_SIZE/DECIM1])
{
  double dii;
  double dqq;
  ary_demod[0]=0;
	for (int q=1; q < floor(BK_SIZE/DECIM1); q++)
  {
		dii = ary_r[q] - ary_r[q-1];
		dqq = ary_i[q] - ary_i[q-1];
		ary_demod[q] = (ary_r[q]*dqq-ary_i[q]*dii)/(ary_r[q]*ary_r[q]+ary_i[q]*ary_i[q]);
  }
}

int main() {
  
  double y_I[BK_SIZE];
  double y_Q[BK_SIZE];
  loadFile("FMcapture1.dat",y_I,y_Q);
// SHIFT du signal

  FILE *file1r=fopen("data1_r.dat", "w");
  FILE *file1i=fopen("data1_i.dat", "w");
if (file1r!=NULL)
{
  for (int r=0; r<BK_SIZE-1; r++){
    fprintf(file1r, "%lf\n", y_I[r]);
  }
  fprintf(file1r, "%lf\n", y_I[BK_SIZE-1]);
  for (int s=0; s<BK_SIZE-1; s++){
    fprintf(file1i, "%lf\n", y_Q[s]);
  }
  fprintf(file1i, "%lf\n", y_Q[BK_SIZE-1]);
  fclose(file1r);
  fclose(file1i);
 }
 else
 {
   printf("erreur fichier");
 }

double y_I_s[BK_SIZE];
double y_Q_s[BK_SIZE];

  shift(y_I,y_Q,y_I_s,y_Q_s);

   FILE *file2r=fopen("data2_r.dat", "w");
  FILE *file2i=fopen("data2_i.dat", "w");
if (file2r!=NULL)
{
  for (int s=0; s<BK_SIZE-1; s++){
    fprintf(file2r, "%lf\n", y_I_s[s]);
  }
  fprintf(file2r, "%lf\n", y_I_s[BK_SIZE-1]);
  for (int t=0; t<BK_SIZE-1; t++){
    fprintf(file2i, "%lf\n", y_Q_s[t]);
  }
  fprintf(file2i, "%lf\n", y_Q_s[BK_SIZE-1]);
  fclose(file2r);
  fclose(file2i);
 }
 else
 {
   printf("erreur fichier");
 }

double y_I_fpb[BK_SIZE];
double y_Q_fpb[BK_SIZE];

fir(y_I_s,y_I_fpb);
fir(y_Q_s,y_Q_fpb);


  FILE *file3_r=fopen("data3_r.dat", "w");
  FILE *file3_i=fopen("data3_i.dat", "w");
if (file3_r!=NULL)
{
  for (int u=0; u<BK_SIZE-1; u++){
    fprintf(file3_r, "%lf\n", y_I_fpb[u]);
  }
  fprintf(file3_r, "%lf\n", y_I_fpb[BK_SIZE-1]);
  for (int v=0; v<BK_SIZE-1; v++){
    fprintf(file3_i, "%lf\n", y_Q_fpb[v]);
  }
  fprintf(file3_i, "%lf\n", y_Q_fpb[BK_SIZE-1]);

  fclose(file3_r);
  fclose(file3_i);
 }
 else
 {
   printf("erreur fichier");
 }

  double y_I_d[BK_SIZE/DECIM1];
  double y_Q_d[BK_SIZE/DECIM1];
  decimation1(y_I_fpb,y_I_d);
  decimation1(y_Q_fpb,y_Q_d);

  FILE *file4_i=fopen("data4_i.dat", "w");
   FILE *file4_r=fopen("data4_r.dat", "w");
if (file4_r!=NULL)
{
  for (int w=0; w<BK_SIZE/DECIM1-1; w++){
    fprintf(file4_r, "%lf\n", y_I_d[w]);
  }
  fprintf(file4_r, "%lf\n", y_I_d[BK_SIZE/DECIM1-1]);
  for (int x=0; x<BK_SIZE/DECIM1-1; x++){
    fprintf(file4_i, "%lf\n", y_Q_d[x]);
  }
  fprintf(file4_i, "%lf\n", y_Q_d[BK_SIZE/DECIM1-1]);

  fclose(file4_r);
  fclose(file4_i);
 }
 else
 {
   printf("erreur fichier");
 }

  double y_demod[BK_SIZE/DECIM1];
  demodulation(y_I_d, y_Q_d,y_demod);

  FILE *file5=fopen("data5.dat", "w");
if (file5!=NULL)
{
  for (int y=0; y<BK_SIZE/DECIM1-1; y++){
    fprintf(file5, "%lf\n", y_demod[y]);
  }
  fprintf(file5, "%lf\n", y_demod[BK_SIZE/DECIM1-1]);
  fclose(file5);
 }
 else
 {
   printf("erreur fichier");
 }

  // fir(y_demod,len_wind,FC,FE/8,BK_SIZE/DECIM1);


  double y_demod_d[BK_SIZE/(DECIM2*DECIM1)];
  decimation2(y_demod_d,y_demod);

    FILE *file6=fopen("data6.dat", "w");
if (file6!=NULL)
{
  for (int z=0; z<BK_SIZE/(DECIM1*DECIM2)-1; z++){
    fprintf(file6, "%lf\n", y_demod_d[z]);
  }
  fprintf(file6, "%lf\n", y_demod_d[BK_SIZE/(DECIM1*DECIM2)-1]);
  fclose(file6);
 }
 else
 {
   printf("erreur fichier");
 }




//   // decimation(y_I,y_Q,DECIM1,DECIM1,DECIM1);

 

  


  return 0;
   
}
    





//   FILE *file2=fopen("data1.dat", "w");
// if (file2!=NULL)
// {
//   for (int i=0; i<BK_SIZE-1; i++){
//     fprintf(file2, "%lf,", y_I[i]);
//   }
//   fprintf(file2, "%lf\n", y_I[BK_SIZE-1]);
//   for (int i=0; i<BK_SIZE-1; i++){
//     fprintf(file2, "%lf,", y_Q[i]);
//   }

//  }
//  else
//  {
//    printf("erreur fichier");
//  }

// void fir(double ary_r[BK_SIZE],double ary_i[BK_SIZE],int long_fen, int freq_c, int freq_e)
// {
//   double passe_bas[long_fen];
//   double ham[long_fen];
//   double fenetre[long_fen];
//   double new_ary_r[BK_SIZE];
//   double new_ary_i[BK_SIZE];
//   int rapport;
//   rapport = freq_e/freq_c;
//   int retard = long_fen/2;
//   // FILE * fen_1 = fopen("passe_bas.dat","w");
//   // FILE * fen_2 = fopen("ham.dat","w");
//   // FILE * fen_3 = fopen("fenetre.dat","w");
//   for(int i=0 ; i<long_fen;i++)
//   {
//     if (i==retard)
//     // if (i==0)
//     {
//       passe_bas[i]=1;
//       // passe_bas[i]=2*(freq_c/freq_e)*sin(2*M_PI*i*freq_c/freq_e)/(2*M_PI*i*freq_c/freq_e);
//       passe_bas[i]=1;
//       ham[i]=0.5-0.46*cos(2*M_PI*i/(long_fen-1));
//       fenetre[i]=passe_bas[i]*ham[i];
//       // fprintf(fen_1, "%lf,", passe_bas[i]);
//       // fprintf(fen_2, "%lf,", ham[i]);
//       // fprintf(fen_3, "%lf,", fenetre[i]);
//     }
//     else
//     {
//       // passe_bas[i]=sin(2*M_PI*(i-retard)*freq_c/freq_e)/(2*M_PI*(i-retard)*freq_c/freq_e);
//       passe_bas[i]=sin(2*M_PI*(i-retard)*freq_c/freq_e)/(2*M_PI*(i-retard)*freq_c/freq_e);
//       // passe_bas[i]=2*(freq_c/freq_e)*sin(2*M_PI*i*freq_c/freq_e)/(2*M_PI*i*freq_c/freq_e);
//       ham[i]=0.5-0.46*cos(2*M_PI*i/(long_fen-1));
//       fenetre[i]=passe_bas[i]*ham[i];
//       // fprintf(fen_1, "%lf,", passe_bas[i]);
//       // fprintf(fen_2, "%lf,", ham[i]);
//       // fprintf(fen_3, "%lf,", fenetre[i]);
//     }
//   }
//   for (int j=0;j<long_fen;j++)
//   {
//     new_ary_i[j]=ary_i[j];
//     new_ary_r[j]=ary_r[j];
//   }
//   for (int l=long_fen;l<BK_SIZE;l++)
//   {
//     double somme_i =0;
//     double somme_r =0;
//     for (int k=0;k<long_fen;k++)
//     {
//       somme_i=somme_i+fenetre[k]*ary_i[l-k];
//       somme_r=somme_r+fenetre[k]*ary_r[l-k];
//     }
//     new_ary_i[l]=somme_i;
//     new_ary_r[l]=somme_r;
//   } 

//   for(int w=0 ; w<BK_SIZE ; w++)
//   {
//     ary_i[w]=new_ary_i[w];
//     ary_r[w]=new_ary_r[w];
//   }
  
  
// }