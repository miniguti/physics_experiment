//時定数RC = 0.0001[sec] 

#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, w_0, w_1, f_theo, p;
	double omega;
	double gammma;
	double isousa_theo;
	double isousa;
	double gosa_input = 0.05;
	double a, b, c, d;
	gammma = 1000; // 1 / RC 
	w_1 = 15650;// r / L
	p = 0.001565; // r / R
	//rc = 0.0001; //時定数
	w_0 = 100000; // 1 / sqrt(LC)
	double input = 10250; //入力電圧[mV]
	double frec[] = {2000.0, 3000.0, 5000.0, 7000.0, 10000.0, 12000.0, 14000.0, 15000.0, 15500.0, 15900.0, 16000.0, 17000.0, 18000.0, 20000.0, 25000.0, 30000.0}; // [Hz]
	double delt[] = {57.5, 47.5, 35, 25.6, 18.4, 14.1, 8.4, 3.3, 0.15, 2.90, 3.5, 7.9, 9.8, 10.4, 9.2, 7.7}; // 時間差[micro second]
	double delt_gosa[] = {22.5, 12.5, 5, 2.4, 1.0, 0.6, 0.3, 0.3, 0.15, 0.14, 0.3, 0.3, 0.4, 0.4, 0.4, 0.7}; //時間差の誤差
	double output[] = {18, 22, 40, 58, 115, 188, 372, 540, 592, 590, 580, 448, 332, 222.5, 115.5, 77.6}; //出力電圧[mV]の実測値
	double output_gosa[] = {10, 12, 8, 8, 9, 8, 12, 20, 16, 10, 12, 12, 8, 5.5, 5.5, 5.6}; //出力電圧の誤差
	printf("#frecency[Hz]  isousa[rad] isousa_gosa[rad] isousa_theory[rad] w/v[] w/v_gosa w/v_theory\n");
	int n, i;
	n = 16;
	for (i = 0; i < n ; i++){
		omega = frec[i]  * 2 * M_PI; //角周波数
		a = pow(w_0,2) + p*pow(w_0,2) - pow(omega,2);
		b = gammma * omega + omega*w_1;
		c = gammma * w_1;
		d = omega * gammma;
		f_theo = sqrt(pow(c, 2) + pow(d, 2)) / sqrt(pow(a, 2) + pow(b, 2)); //振幅比の理論値
		isousa_theo = atan( (a*d - b*c) / (a*c + b*d));
		//arg = atan(omega * rc);
		//isousa_theo = atan( (omega * (w_0 * w_0  + c * w_0 * w_0 - omega * omega) - w_1 * omega * (gammma + w_1) ) / (omega * omega *(gammma + w_1) + w_1 * (w_0 * w_0 + c * w_0 * w_0 - omega * omega) )); //位相差の理論値
		isousa = omega * delt[i] * 0.000001; //位相差の実験値
		
		printf("%lf %lf %lf %lf %lf %lf %lf\n", frec[i]*0.001, isousa, omega * delt_gosa[i] * 0.000001, isousa_theo, output[i] / input, output_gosa[i] / input, f_theo);
		
	}
	
	return 0;
}

