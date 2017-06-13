#include<stdio.h>
#include<math.h>


int main(void)
{

	double nacl[28] = {27.34, 28.56, 31.69, 40.85, 45.43, 53.86, 53.99, 56.45, 56.47, 56.61, 66.22, 66.41, 73.05, 73.26, 75.28, 75.49, 83.97, 84.23, 90.40, 90.67, 101.15, 101.50, 107.78, 108.17, 110.05, 110.47, 119.47, 119.97}; //nacl, 2theta
	double sine; // sin(\theta)
    double wave_length = 1.542415; // wave length of x-ray
	double d_kankaku; // menkankaku
	double a;
    int i, j, k, l, m, n;
	n = 28;
	printf("#2theta  sin(theta)  menkankaku sin(theta)/wave_length\n");
	for (i = 0; i < n; i++){
		sine =  sin(nacl[i] / 2.0 * M_PI / 180.0);
		d_kankaku = wave_length / 2.0 / sine;
	    a = sine / wave_length;
		printf("%lf %lf %lf %lf\n", nacl[i], sine, d_kankaku, a);
	}
	
	return 0;
}

