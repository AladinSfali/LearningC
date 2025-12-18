// C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
 
#include <stdio.h>

int main(){
	
	int module, amount;

	printf("Input the amount: ");
	scanf("%i", &amount);

	printf("%i Notes(s) of 100\n", amount / 100);
	module = amount % 100;
	printf("%i Notes(s) of 50\n", module / 50);
	module = module % 50;
	printf("%i Notes(s) of 20\n", module / 20);
	module = module % 20;
	printf("%i Notes(s) of 10\n", module / 10);
	module = module % 10;
	printf("%i Notes(s) of 5\n", module / 5);
	module = module % 5;
	printf("%i Notes(s) of 2\n", module / 2);
	module = module % 2;
	printf("%i Notes(s) of 1\n", module / 1);

	return 0;
}


