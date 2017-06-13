#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, f_theo;
	rc = 0.00001; //’è”
	double t[] = {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000};
	double output[] = {};
	printf("#output_theory\n");
	int n, i;
	n = 10;
	for (i = 0; i < n ; i++){
		//f_theo = omega * rc / sqrt(1 + pow(omega * rc, 2)); //U•”ä‚Ì—˜_’l
		f_theo = 20.15 * exp(-t[i] * 0.0000001/rc);
		printf("%lf\n", f_theo);
		
	}
	
	return 0;
}
