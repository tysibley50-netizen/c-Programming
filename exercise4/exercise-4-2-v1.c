#include <stdio.h>

int main(void){
	int uInteger=0;
	printf("Enter an integer: ");
	scanf("%d", &uInteger);
	int result = uInteger % 2;
	printf("The number is %d\n", result);

	return 0;

}
