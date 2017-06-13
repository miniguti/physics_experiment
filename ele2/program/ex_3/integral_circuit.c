// 丸山1 RC = 10^(-4)
#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, f, arg;
	double omega;
	double isousa_theo;
	double isousa;
	double input = 10.7;
	double gosa_input = 0.2;
	double output_gosadenpa;
	rc = 0.0001;
	double frec[] = {200.0, 300.0, 500.0, 700.0, 1000.0, 1500.0, 2000.0, 3000.0, 5000.0, 7000.0, 10000.0, 15000.0}; // [Hz]
	double delt[] = {125, 115, 104, 99, 92, 82, 73, 57.4, 39.8, 30.4, 22.6, 15.6}; // 時間差[micro second]
	double delt_gosa[] = {5, 5, 4, 3, 2, 2, 1, 0.6, 0.6, 0.4, 0.6, 0.4}; //時間差の誤差
	double output[] = {10.75, 10.55, 10.05, 9.65, 8.9, 7.65, 6.58, 5.00, 3.20, 2.36, 1.66, 1.12}; //出力電圧[mV]の実測値
	double output_gosa[] = {0.15, 0.15, 0.45, 0.35, 0.3, 0.15, 0.14, 0.12, 0.08, 0.08, 0.04, 0.04}; //出力電圧の誤差
	printf("#frecency[kHz]  isousa[rad] isousa_gosa[rad] isousa_theory[rad] w/v[] w/v_gosa w/v_theory[]\n");

	int n, i;
	n = 12;
	for (i = 0; i < n ; i++){
		f = 1 / sqrt(1 + pow(frec[i]*2*M_PI * rc, 2));
		
		//arg = atan(omega * rc);
		omega = frec[i]  * 2 * M_PI;
		isousa_theo = atan(omega * rc);
		isousa = omega * delt[i] * 0.000001;
		output_gosadenpa = sqrt(pow(output_gosa[i], 2) + pow(output[i] / input * gosa_input, 2)) / input;
		printf("%lf %lf %lf %lf %lf %lf %lf %lf\n", frec[i] * 0.001, isousa, omega * delt_gosa[i] * 0.000001, isousa_theo, output[i] / input, output_gosadenpa, f, output_gosadenpa);
		
	}
	
	return 0;
}

