#include <stdio.h>

int largest(int first, int second, int third);
int smallest(int first, int second, int third);

int main (void) {
	int first = 0, second = 0, third = 0;
	printf("Enter the first number: ");
	scanf("%d",&first);
	printf("Enter the second number: ");
	scanf("%d",&second);
	printf("Enter the third number: ");
	scanf("%d",&third);

	int largest_num = largest(first,second,third);
	int smallest_num = smallest(first,second,third);

	printf("Among your selection of numbers, the largest was %d and the smallest was %d", largest_num, smallest_num);
	
	return 0;

}

int largest(int first, int second, int third){
	int result = first;
	if (result > second) result = second;
	if (result > third) result = third;
	return result;
}
int smallest(int first, int second, int third){
	int result = first;
	if (result < second) result = second;
	if (result < third) result = third;
	return result;
}

