#include <stdio.h>

int main(void){
	int int_number=0;
	float float_number=0;

	printf("Enter your integer here: ");
	scanf("%d", &int_number);

	printf("Enter your decimal number here: ");
	scanf("%f", &float_number);

	printf("Your integer is %d\n", int_number);
	printf("Your decimal number, rounded to the second place is %.2f\n", float_number);
	return 0;
}
