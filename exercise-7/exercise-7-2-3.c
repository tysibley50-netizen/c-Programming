#include <stdio.h>

int main (void) {
	int function = 0, fnum = 0, snum = 0;

	do {
		printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n> 0: terminate the program\nSelect the calculation: ");
			scanf("%d", &function);
			if (function < 0) break;
			
			printf("Enter the first number: ");
			scanf("%d", &fnum);
                       	printf("Enter the second number: ");
			scanf("%d", &snum); 


			switch (function) {
				case 1:
					printf("%d + %d = %d\n", fnum, snum, fnum + snum);
					break;
				case 2:	
					printf("%d + %d = %d\n", fnum, snum, fnum + snum);
					break;

				case 3:
					printf("%d + %d = %d\n", fnum, snum, fnum + snum);
					break;
				default:
	                                printf("Invalid function selected.");
			}

	} while (function >= 0);

	printf("\nTerminating program!");

	return 0;
}
