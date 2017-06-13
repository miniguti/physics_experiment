#include<stdio.h>

int main(void){
	double v_0[] = {1.0, 1.2, 1.4, 1.6, 1.8, 2.0};
	
	double v_1_bc[] = {0.335, 0.518, 0.704, 0.893, 1.087, 1.280};
	double v_1_be[] = {0, 0, 0, 0, 0, 0};
	int i, n;
	double res = 1001; // o-mu
	double current_bc, current_be, v_bc, v_be;
	n = 6;
	printf("v_0[V] v_1_bc[V] v_1_be[V] v_bc v_be current_bc[mA] current_be[mA] \n");
	for(i=0;i< n;i++){
		v_be = v_0[i] - v_1_be[i];
		v_bc = v_0[i] - v_1_bc[i];
		current_be = v_1_be[i] / res * 1000;
		current_bc = v_1_bc[i] / res * 1000;
		printf("%lf %lf %lf %lf %lf %lf %lf\n", v_0[i], v_1_bc[i], v_1_be[i],  v_bc, v_be,  current_bc, current_be);
	}
	
	return 0;
}


		