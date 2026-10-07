#include <stdio.h>

int main(void){
	int cups;
	char drinks;
	printf("Do you drink coffee or tea (c/t)? ");
	scanf("%c", &drinks);
	printf("How many cups do you drink daily: ");
	scanf("%d", &cups);

	if (drinks=='c' && cups >= 0 && cups <= 2){
		printf("You don't drink a lot of coffee, do you?\n");
	} else if (drinks == 'c' && cups >= 3 && cups <= 20) {
	  	printf("You drink a lot of coffee!\n");
	} else if (drinks == 't' && cups >= 0 && cups <= 2) {
		printf("You do not drink a lot of tea.\n");
	} else if (drinks == 't' && cups >= 3 && cups <= 20) {
		printf("You drink a lot of tea!\n");
	} else {
		printf("An error occurred in the program!\n");
	}

	return 0;
}
