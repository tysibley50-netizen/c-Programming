#include <stdio.h>

int main (void) {
	int integer;
	printf("Enter an integer: ");
	scanf("%d", &integer);

	int i;
	for (i = 0; i <= integer; i++){
		printf("%d\n", i);
	}

	return 0;
}
