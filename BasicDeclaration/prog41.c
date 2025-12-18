/* Program that print 3 numbers on a line,
 * starting with 1 and printing n lines.
 * Accepts the number of liines (n, integer) from the user.
 * */


#include<stdio.h>

int main(){

	// Declaring the variable
	int user_value, counter = 1;

	printf("Input number of lines: ");
	scanf("%i", &user_value);
	
	for(int i = 0; i < user_value; i++){
		printf("%i %i %i\n", counter, counter+1, counter+2);
		counter += 3;
	}
		

	return 0;
}
