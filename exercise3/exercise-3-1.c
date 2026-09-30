#include <stdio.h>

int main(void){
	int number = 0;
	float dNumber = 0;
	printf("Enter an integer: ");
	scanf("%d", &number);
	printf("Enter a decimal number: ");
	scanf("%f", &dNumber);
	printf("You entered the integer:%d\n", number);
	printf("You entered the decimal number, rounded to two decimal places:%.2f\n", dNumber);
	return 0;
	
}
