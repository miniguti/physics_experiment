//���1 RC = 10^(-5)

#include<stdio.h>
#include<math.h>
int main(void)
{
	
	double rc, output_theo, arg;
	double omega;
	double isousa_theo;
	double isousa;
	double isousa_gosa;
	double output_gosadenpa;
	double input;
	double gosa_input = 0.2;
	input = 10.7;
	rc = 0.00001;
	double frec[] = {2000.0, 3000.0, 5000.0, 7000.0, 10000.0, 15000.0, 20000.0, 30000.0, 50000.0, 70000.0, 100000.0, 150000.0}; // [Hz]
	double delt[] = {10.4, 9.75, 9.7, 9.3, 8.85, 7.95, 7.12, 5.68, 3.97, 3.04, 2.25, 1.57}; //���ԍ��̑���l[micro second]
	double delt_gosa[] = {0.4, 0.25, 0.2, 0.2, 0.15, 0.15, 0.08, 0.08, 0.05, 0.04, 0.03, 0.03};//���ԍ��̌n���덷
	double output[] = {10.6, 10.6, 10.2, 9.8, 9.0, 7.56, 6.40, 4.84, 3.10, 2.26, 1.615, 1.085};//�o�͂̑���l[mV]
	double output_gosa[] = {0.4, 0.4, 0.3, 0.3, 0.3, 0.2, 0.16, 0.12, 0.10, 0.08, 0.045, 0.035};//�o�͂̌n���덷
	
	printf("frecency[Hz] isousa[rad] isousa_gosa isousa_theory w/v w/v_gosa w/v_theory\n");
	int n, i;
	n = 12;
	for (i = 0; i < n ; i++){
		output_theo = 1 / sqrt(1 + pow(frec[i]*2*M_PI * rc, 2)); //w/v�̗��_�l
		
		//arg = atan(omega * rc);
		omega = frec[i]  * 2 * M_PI; //�p���g��
		isousa_theo = atan(omega * rc); //�ʑ����̗��_�l
		isousa = omega * delt[i] * 0.000001;
		isousa_gosa = omega * delt_gosa[i] * 0.000001;
		output_gosadenpa = sqrt(pow(output_gosa[i], 2) + pow(output[i] / input * gosa_input, 2)) / input;
		printf("%lf %lf %lf %lf %lf %lf %lf\n", frec[i] * 0.001, isousa, isousa_gosa, isousa_theo, output[i] / input, output_gosadenpa, output_theo);
		
	}
	
	return 0;
}

