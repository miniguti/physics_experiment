//時定数RC = 0.0001[sec] 

#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, f_theo;
	double omega;
	double isousa_theo;
	double isousa;
	rc = 0.0001; //時定数
	double input = 10.60; //入力電圧[mV]
	double gosa_input = 0.2; //入力電圧誤差[mV]
	double output_gosadenpa;
	double frec[] = {200.0, 300.0, 500.0, 700.0, 1000.0, 1500.0, 2000.0, 3000.0, 5000.0, 7000.0, 10000.0, 15000.0, 20000.0}; // [Hz]
	double delt[] = {1125, 725, 396, 259, 159, 83.5, 52.2, 25.8, 9.85, 5.15, 2.55, 1.19, 0.7}; // 時間差[micro second]
	double delt_gosa[] = {55, 25, 8, 3, 3, 1.5, 1.0, 0.4, 0.35, 0.25, 0.15, 0.11, 0.1}; //時間差の誤差
	double output[] = {1.33, 2.00, 3.20, 4.32, 5.68, 7.32, 8.45, 9.4, 10.15, 10.5, 10.65, 10.65, 10.65}; //出力電圧[mV]の実測値
	double output_gosa[] = {0.03, 0.04, 0.06, 0.12, 0.12, 0.12, 0.35, 0.4, 0.35, 0.4, 0.35, 0.35, 0.35}; //出力電圧の誤差
	printf("#frecency[Hz]  isousa[rad] isousa_gosa[rad] isousa_theory[rad] w/v[] w/v_gosa w/v_theory[]\n");
	int n, i;
	n = 13;
	for (i = 0; i < n ; i++){
		//arg = atan(omega * rc);
		omega = frec[i]  * 2 * M_PI; //角周波数
		isousa_theo = atan( 1.0 / omega / rc); //位相差の理論値
		isousa = omega * delt[i] * 0.000001; //位相差の実験値
		f_theo = omega * rc / sqrt(1 + pow(omega * rc, 2)); //振幅比の理論値
		output_gosadenpa = sqrt(pow(output_gosa[i], 2) + pow(output[i] / input * gosa_input, 2)) / input;
		printf("%lf %lf %lf %lf %lf %lf %lf\n", frec[i] * 0.001, isousa, omega * delt_gosa[i] * 0.000001, isousa_theo, output[i] / input, output_gosadenpa, f_theo);
		
	}
	
	return 0;
}

