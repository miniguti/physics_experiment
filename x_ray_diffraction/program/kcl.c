
#include<stdio.h>
#include<math.h>


int main(void)
{

	double kcl[22] = {24.60, 25.66, 28.45, 28.52, 40.62, 40.72, 50.29, 50.41, 58.74, 58.90, 66.48, 66.67, 73.79, 74.01, 87.74, 88.02, 94.61, 94.93, 101.54, 101.90, 108.67, 109.03}; // kcl, 2theta
	double sine;
    double alpha_1 = 1.54050;
	double alpha_2 = 1.54433;
	double d_kankaku;
	double kousiteisuu;
	double a;
    int i, j, k, l, m, n;
	n = 22;
	printf("#2theta  sin(theta)  menkankaku sin(theta)/wave_length\n");
	for (i = 0; i < n; i++){
		if(i % 2 == 0){
			
			sine =  sin(kcl[i]/ 2.0 * M_PI / 180.0);
			d_kankaku = alpha_1 / 2.0 / sine;
			a = sine / alpha_1;
			printf("%lf %lf %lf %lf\n", kcl[i], sine, d_kankaku, a);
		}
		else{
			sine =  sin(kcl[i]/ 2.0 * M_PI / 180.0);
			d_kankaku = alpha_2 / 2.0 / sine;
			a = sine / alpha_2;
			printf("%lf %lf %lf %lf\n", kcl[i], sine, d_kankaku, a);
		}
	}
	
	return 0;
}

