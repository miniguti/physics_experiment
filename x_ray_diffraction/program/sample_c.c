
#include<stdio.h>
#include<math.h>


int main(void)
{

	double sample_c[22] = {24.67, 27.34, 27.40, 40.79, 45.36, 45.48, 53.75, 53.90, 66.06, 66.24, 72.87, 73.07, 83.73, 83.98, 90.11, 90.39, 100.79, 101.13, 107.36, 107.75, 118.92, 119.40};
	double sample_d[] = {};
	double sample_e[] = {};
	double sine;
    double wave_length = 1.542415;
	double d_kankaku;
    int i, j, k, l, m, n;
	n = 22;

	for (i = 0; i < n; i++){
		sine =  sin(sample_c[i] / 2.0 * M_PI / 180.0);
		d_kankaku = wave_length / 2.0 / sine;
	    
		printf("%lf %lf %lf\n", sample_c[i], sine, d_kankaku);
	}
	
	return 0;
}

