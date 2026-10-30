#include <stdio.h>

int days = 0;

int main (void){
	printf("The program calculates the total hours worked during\na specific period and the average length of a day.");
	printf("How many days: ");
	scanf("%d",&days);

	if (days > 30) return 0;

	float hours[days];
	int i;

	for (i = 0;i < days; i++){
		printf("Enter the working hours for day %d", i+1);
		scanf("%f", &hours);
	}
	
	float total = 0.0;
	for (i = 0; i < days; i++) total += hours[i];
	printf("\nTotal hours worked: %.1f", total);

	float average = total/days;

	printf("\nAverage length of day: %.1f", average);

	printf("Hours entered: ");
	for (i = 0; i < days; i++) printf(" %.1f", hours[i]);

	return 0;
}
