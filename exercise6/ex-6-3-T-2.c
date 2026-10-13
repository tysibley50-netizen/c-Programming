#include <stdio.h>

int main (void) {
	int integer = 0, sum = 0, n = 0;
	printf("The program calculates the average of scores you enter.\n End the program by typing a negative integer.");
	do{
		printf("Enter a number between 4-10");
		scanf("%d", &n);
		if (n>=4 && n<= 10) {
			sum = sum +n;
			integer++;
		}

	} while (n>=0);

	float average = 1.0f * sum / integer;
	printf("You entered a negative number, program ending. You entered %d scores.\nAverage score = %.2f", integer, average);
	return 0;

}
