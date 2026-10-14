#include <stdio.h>

int main (void) {
	int count = 0;
	int sum = 0;
	int n = 0;
	printf("theee program calculates the average of scores you enter.\nEnd with a negative integer plz.");
		do{
			printf("Enter a score (4-10): ");
			scanf("%d", &n);
			if (n>=4 && n<=10){
				sum = sum + n;
				count++;
			}
		} while (n>0);
	float average = 1.0f * sum/count;
	printf("You entered %d scores.\nAverage Score: %.2f", count, average);
	return 0;
}
