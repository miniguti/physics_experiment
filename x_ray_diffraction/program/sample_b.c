
#include<stdio.h>
#include<math.h>


int main(void)
{

	
	double sample_b[] = {25.61, 28.43, 28.49, 42.49, 47.29, 47.42, 56.11, 56.26, 69.12, 69.31, 76.36, 76.60, 88.02, 88.29, 94.95, 95.26, 106.69, 107.08, 114.09, 114.54};
	double sine;
    double alpha_1 = 1.54050;
	double alpha_2 = 1.54433;
	double d_kankaku;
    int i, j, k, l, m, n;
	n = 20;

	for (i = 0; i < n; i++){
		if(i % 2 == 0){
			sine =  sin(sample_b[i] / 2.0 * M_PI / 180.0);
			d_kankaku = alpha_1 / 2.0 / sine;
	    	
			printf("%lf %lf %lf\n", sample_b[i], sine, d_kankaku);
		}
		else{
			sine =  sin(sample_b[i] / 2.0 * M_PI / 180.0);
			d_kankaku = alpha_2 / 2.0 / sine;
			
			printf("%lf %lf %lf\n", sample_b[i], sine, d_kankaku);
		}
	}
	
	return 0;
}

