#include<stdio.h>
#include<math.h>


int main(void){
	
	int i;
	
	for(i = 0; i < 50; i++){
		printf("%d %lf\n", i, sqrt(i));
	}
	
	return 0;
}

