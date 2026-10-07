#include <stdio.h>

int main(void) {
	int integer;
	printf("Enter an integer: ");
	scanf("%d", &integer);
	
	if (integer % 2) {
		printf("The number %d is odd.", integer);
	} else {
		printf("The number %d is even." , integer);
	}

	return 0;
	

}
