#include<stdio.h>
#include<math.h>

int main(void){

	int i, n;
	n = 27;
	double l[] = {8, 19.2, 36.8, 48.8, 59.2, 39.2, 67.2, 230, 464, 912, 1330, 2000, 2560, 2960, 3340, 3560, 3640, 3720, 3760, 3680, 3600, 3380, 3020, 2480, 1920, 1520, 824}; // mv
	double u[] = {29.6, 42.4, 52.8, 69.6, 78.4, 63.2, 92.0, 270, 508, 968, 1410, 2140, 2660, 3100, 3560, 3740, 3960, 4040, 4080, 4000, 3880, 3560, 3220, 2620, 2060, 1640, 880}; // mv
	double amp[n];
	double gosa[n];
	double input = 11.2; // mv
	double input_gosa = 1.2;
	double amp_ratio[n];
	double gosa_denpa[n];
	for (i=0;i<n;i++){
		amp[i] = (u[i] + l[i]) / 2;
		gosa[i] = (u[i] - l[i]) / 2;
		amp_ratio[i] = amp[i] / input;
		
		gosa_denpa[i] = sqrt(pow(gosa[i], 2) + pow(amp[i] / input * input_gosa, 2)) / input;
		
		printf("%lf %lf %lf %lf\n", amp[i], gosa[i] / input, amp_ratio[i], gosa_denpa[i]);
	}
	
	return 0;
}
