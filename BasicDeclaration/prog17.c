// Program that convert a given integer (in seconds) to hours, minutes and seconds.

#include<stdio.h>

int main(){
	int seconds;

	printf("Input seconds: ");
	scanf("%i", &seconds);

	printf("H:M:S - %i:%i:%i\n", seconds/3600, (seconds%3600)/60, (seconds%3600)%60);

	return 0;
}

