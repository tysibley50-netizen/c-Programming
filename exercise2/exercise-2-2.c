#include <stdio.h>
/* this program is going to square the user's input*/

int main(void){
	int uNumber;
	printf("Enter an integer: ");
	scanf("%d", &uNumber);
	int sNumber = uNumber * uNumber;
	printf("The square of the number you entered is %d\n", sNumber);
	return 0;

}
