
#include<stdio.h>
#include<math.h>
int main(void)
{
    double l_1, l_2;
	double correction_angle;
	double d_0 = 57.3;
	scanf("%lf %lf", &l_1, &l_2);
	
	
	correction_angle = (atan(l_1 / d_0) - atan(l_2 / d_0)) / 4.0 * 180.0 / M_PI;
	
	printf("%lf", correction_angle);
	
	return 0;
	
}

