#include<stdio.h>

#include<math.h>

int main(void){
	double v_0[] = {0.2, 0.4, 0.6, 0.8, 1.0, 1.2, 1.4, 1.6, 1.8, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	
	double v_1[] = {0.001, 0.022, 0.136, 0.297, 0.477, 0.663, 0.854, 1.042, 1.232, 1.429, 2.403, 3.387, 4.370, 5.365, 6.357, 7.35, 8.343, 9.34};
	
	int i, n;
	double res = 2201.0;
	double current, v;
	double i_0, current_theo, p;
	i_0 = 21000000000000.0;
	n = 18;
	printf("v_0[V] v_1[V] v[V] current[mA] \n");
	for(i=0;i< n;i++){
		v = v_0[i] - v_1[i];
		
		current = v_1[i] / res * 1000;
		p = 1.0 / 0.026; //  e / k / T
		current_theo = i_0 * exp(-1.1 / 0.026) * (exp(0.515 * p * v) - 1);
		
		printf("%lf %lf %lf %lf %lf\n", v_0[i], v_1[i], v, current, current_theo);
	}
	
	return 0;
}


		