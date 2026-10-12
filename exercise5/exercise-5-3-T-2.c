#include <stdio.h>

int main(void) {
	int fnumber;
	int snumber;
	int func;
	printf("1: Subtraction\n2: Addition\n3: Multiplication\nSelect Function: ");
	scanf("%d", &func);
	printf("Enter the first number: ");
	scanf("%d", &fnumber);
	printf("Enter the second number: ");
	scanf("%d", &snumber);

	switch(func){
		case 1: printf("%d - %d = %d ", fnumber, snumber, fnumber - snumber);
			break;
		case 2: printf("%d + %d = %d ", fnumber, snumber, fnumber + snumber);
			break;
		case 3: printf("%d + %d = %d ", fnumber, snumber, fnumber * snumber);
			break;
		default: printf("The program has experienced an error. Please try again!");
	}
	return 0;


}
