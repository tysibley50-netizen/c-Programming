#include <stdio.h>

int main(void){
	int function;
	int fNumber;
	int sNumber;
	printf("1: subtraction\n2: addition\n3: multiplication\n");
	printf("Select function: ");
	scanf("%d", &function);
	printf("Enter the first number: ");
	scanf("%d", &fNumber);
	printf("Enter the second number: ");
	scanf("%d", &sNumber);

	switch (function) {
		case 1: {
			printf("%d-%d=%d", fNumber, sNumber, fNumber - sNumber);
			break;
			}
		case 2: {
			printf("%d+%d=%d", fNumber, sNumber, fNumber + sNumber);
			break;
		       }
		case 3: {
			printf("%d*%d=%d", fNumber, sNumber, fNumber * sNumber);
			break;
			}
		default: {
			printf("An error has occurred while running the program.");
			break;
			 }
	}
	
	return 0;


}
