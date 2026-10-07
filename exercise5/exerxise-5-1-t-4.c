#include <stdio.h>

int main(void){
	int integer;
	printf("Enter an integer pleaseeee: ");
	scanf("%d",&integer);

	if (integer % 2){
		printf("This number %d is oddddd.", integer);
	} else {
		printf("this number %d is evvvveeen.", integer);
	}

	return 0;


}
