#include <stdio.h>

	int integer = 0;
	printf("Please give me an integer to count to: ");
	scanf("%d", &integer);

	int i;
	for (i=1; i <= integer; i++) {
		printf("%d\n", i);
	}

	return 0;

}

