// Program that reads 5 numbers and sums all odd values between them.

#include<stdio.h>

int main(){
	int acumulator = 0, checknumber;

	for (int i = 0; i < 5; i++){
		printf("Input the %i# number: ", i);
		scanf("%i", &checknumber);
		if(checknumber % 2 != 0){
			acumulator += checknumber;
		}
	}

	printf("Sum of all odd values: %i\n", acumulator);

	return 0;

}
