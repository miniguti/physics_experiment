//’è”RC = 0.0001[sec] 

#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, f_theo;
	rc = 0.00001; //’è”
	double t[] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500};
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
