
#include<stdio.h>
#include<math.h>


int main(void)
{

	
	double cscl[40] = {19.55, 21.64, 27.73, 27.75, 30.75, 30.82, 37.87, 37.96, 44.00, 44.11, 49.49, 49.63, 54.58, 54.73, 63.91, 64.08, 68.28, 68.47, 72.53, 72.73, 76.68, 76.92, 80.77, 81.01, 84.78, 85.04, 88.78, 89.06, 96.80, 97.12, 100.84, 101.20, 104.94, 105.33, 109.14, 109.50, 113.40, 113.87, 117.83, 118.31}; // cscl, 2theta
	double mirror[] = {1, 1};
	double sine;
    double alpha_1 = 1.54050;
	double alpha_2 = 1.54433;
	double ave = 1.54178;
	double beta = 1.3922;
	double d_kankaku;
    int i, j, k, l, m, n;
	n = 40;

	for (i = 0; i < n; i++){
		if(i % 2 == 0){
			
			sine =  sin(cscl[i] / 2.0 * M_PI / 180.0);
			d_kankaku = alpha_1 / 2.0 / sine;
			
			printf("%lf %lf %lf\n", cscl[i], sine, d_kankaku);
		} else{
			sine =  sin(cscl[i] / 2.0 * M_PI / 180.0);
			d_kankaku = alpha_2 / 2.0 / sine;
			
			printf("%lf %lf %lf\n", cscl[i], sine, d_kankaku);
		}
	}
	
	return 0;
}

