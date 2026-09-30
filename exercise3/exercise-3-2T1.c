#include <stdio.h>

int main(void){
	float finnish_marka = 0;
	float conver_factor = 5.94573;
	float euro = 0;
	printf("Enter an amount in FIM: ");
	scanf("%f", &finnish_marka);
	euro = finnish_marka / conver_factor;
	printf("FIM converted to euro: %.2f\n", euro);
	return 0;
}
