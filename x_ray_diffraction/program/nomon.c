
#include<stdio.h>
#include<math.h>
int main(void)
{
	double d_1, x;
	double right_0[] = {19, 22, 24, 32, 33, 37, 50, 51, 54, 55, 71, 74, 87, 91};
	double left_0[] = {22, 31.0, 33.3, 33.5, 46.0, 47.0, 50.8, 52.0, 65.0, 68.0, 68.5, 78.0, 81.8, 113.0, 128.0};
	double k[] = {33.3, 22.0, 22.0, 32.0, 55.0};
	
	double d_0 = 42.3;
	d_1 = 100.0;
	int i;
	int n;
	n = 5;
	for (i=0; i< n;i++){
		x = d_1 * (sqrt(pow(d_0 / k[i], 2) + 1) - d_0 / k[i]);
		printf("%lf %lf\n",k[i], x /2.0);
	}
	
	return 0;
}

