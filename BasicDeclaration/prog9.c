/* *
 * C program that accpets two integer from the user and calculates 
 * the sum of the two integers.
 * */

#include<stdio.h>

void addition(int *f_n, int *s_n){
	printf("Sum of the above integers = %i\n", *s_n + *f_n);
}

int main(){
	int f_num, s_num;

	printf("Type the first input: ");
	scanf("%i", &f_num);

	printf("Type the second input: ");
	scanf("%i", &s_num);

	addition(&f_num, &s_num);

	return 0;
}
