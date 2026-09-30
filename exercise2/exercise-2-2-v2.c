#include <stdio.h>

int main(void){
	int number=0;
	int sNumber=0;
	printf("Enter a number here: ");
	scanf("%d", &number);
	sNumber=number*number;
	printf("Your number is %d\n", sNumber);
	return 0;
}
