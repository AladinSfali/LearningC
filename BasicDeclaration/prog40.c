/* Program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
 * */


#include<stdio.h>

int main(){
	
	//Declaring the variables
	int min_range, max_range;

	//Input x and y values
	printf("Input the first integer: ");
	scanf("%i", &min_range);
	printf("Input the second integer: ");
	scanf("%i", &max_range);

	//Loop to find the integers
	for(int i = min_range; i <= max_range; i++) { if ( i % 7 == 2 || i % 7 == 3) { printf("%i\n", i); } }


	return 0;
}
