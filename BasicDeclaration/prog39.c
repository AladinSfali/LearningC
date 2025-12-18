/* Program that reads two numbers and divides the first number by the second number.
 * If division is not possible print "Division is not possible".
 * */


#include<stdio.h>

int main(){
	
	//Declaring the variables
	int first_int, second_int, sum = 0;

	//Taking the inputs from the user
	printf("Input the first integer: ");
	scanf("%i", &first_int);
	printf("Input the second integer: ");
	scanf("%i", &second_int);

	//Loop from the range of the values
	for(int i = first_int; i <= second_int; i++){ if(i % 17 != 0) { sum += i ; } }

	printf("Sum: %i\n", sum);	

	return 0;
}
