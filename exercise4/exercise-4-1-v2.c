#include <stdio.h>

int main(void){
	int fNumber = 0;
	int sNumber = 0;
	printf("Enter your first number, no decimals: ");
	scanf("%d", &fNumber);
	printf("Enter your second number, no decimals: ");
	scanf("%d", &sNumber);
	int sum = fNumber + sNumber;
	int difference = fNumber - sNumber;
	int product = fNumber * sNumber;
	printf("%d + %d = %d\n"
	       "%d - %d = %d\n"
	       "%d * %d = %d\n",
	       fNumber,sNumber,sum,
	       fNumber,sNumber,difference,
	       fNumber,sNumber,product);
	return 0;
}
