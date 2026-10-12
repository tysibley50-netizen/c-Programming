#include <stdio.h>

int main (void) {
	int integer;
	printf("Enter an integer plz: ");
	scanf("%d", &integer);

	int i;
	for (i = 1; i <= integer; i++){
		printf("%d\n", i);
	}

	return 0;

}
