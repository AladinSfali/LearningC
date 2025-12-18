/* C program to print a number,
 * its square and cube, starting with 1 and printing n lines.
 * Accpet the number of lines (n, integer) from the user
 * */


#include<stdio.h>

int main(){

	// Declaring the variable
	int user_value, counter = 1;

	printf("Input number of lines: ");
	scanf("%i", &user_value);
	
	for(int i = 1; i <= user_value; i++){ printf("%i %i %i\n", i, i*i, i*i*i) ; }
		

	return 0;
}
