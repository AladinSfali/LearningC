/* Program to calculate the value of S where S = 1 + 1/2 + 1/3 + ... + 1/50 *
 * */


#include<stdio.h>

int main(){

	float accumulator = .0000;

	for(int i = 1; i <= 50; i++) { accumulator += (1.0000/i) ; }

	printf("%.2f\n", accumulator);

	return 0;
}
