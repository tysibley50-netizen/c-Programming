#include <stdio.h>

int main (void) {
	int function = 0, num_1 = 0, num_2 = 0;
	do{
		printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n< 0: terminate the program\nSelect the calculation: ");
		scanf("%d", &function);
		if (function < 0) break;
		printf("Enter the first number: ");
		scanf("%d", &num_1);
		printf("enter the first number: ");
		scanf("%d", &num_2);

		switch (function){
			case 1: 
			 printf("%d+%d=%d\n", num_1, num_2, num_1 + num_2);
			 break;
			case 2:
			 printf("%d-%d=%d\n", num_1, num_2, num_1 - num_2);
			 break;
			case 3:
			 printf("%d*%d=%d\n", num_1, num_2, num_1 * num_2); 
		}


	}while (function >= 0);
	printf("< 0 # entered, terminating program.");
	return 0;
	
}
