#include <stdio.h>

int main (void){
	int cups;
	char drink;
	printf("Do you drink coffee or tea?c/t? ");
	scanf("%c",&drink);
	printf("How many cups a day? ");
	scanf("%d", &cups);

	if (drink == c && cups >= 0 && cups <= 2){
		printf("You dont drink a lot of coffee, do you?\n");
	} else if (drink == c && cups >= 3 && cups <= 20){
		printf("You drink a lot of coffee, don't you!\n");
	} else if (drink == t && cups >= 0 && cups <= 2){
		printf("You dont drink a lot of tea, do you?\n");
	} else if (drink == t && cups >= 3 && cups <= 20){
		printf("You drink a lot of tea, don't you!\n")
	} else {
		printf("An error has occurred!\n");

	return 0;




}
