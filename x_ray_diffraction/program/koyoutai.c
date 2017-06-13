
#include<stdio.h>
#include<math.h>


int main(void)
{

	double koyoutai[44] = {21.55, 28.36, 28.42, 30.67, 30.69, 30.75, 37.76, 37.80, 37.83, 40.54, 40.63, 43.91, 44.02, 49.43, 49.55, 54.53, 54.68, 58.62, 63.85, 64.03, 66.37, 66.56, 68.24, 68.42, 72.47, 72.52, 72.69, 76.61, 76.85, 80.68, 80.95, 88.72, 89.02, 94.52, 94.83, 100.82, 101.54, 104.90, 105.29, 108.59, 109.00, 113.36, 113.76, 117.79}; //koyoutai
	double sine;
    double wave_length = 1.542415;
	double d_kankaku;
    int i, j, k, l, m, n;
	n = 44;

	for (i = 0; i < n; i++){
		sine =  sin(koyoutai[i] / 2.0 * M_PI / 180.0);
		d_kankaku = wave_length / 2.0 / sine;
	    
		printf("%lf %lf %lf\n", koyoutai[i], sine, d_kankaku);
	}
	
	return 0;
}

