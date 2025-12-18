// Program to compute the sum of consecutive odd numbers from a given pair of integers.

#include<stdio.h>

int main(){
	int f_num, s_num, accum = 0;

	printf("Input a pair of numbers (for example 10,2): \n");
	printf("Input first number of the pair: ");
	scanf("%i", &f_num);
	printf("Input second number of the pair: ");
	scanf("%i", &s_num);
	
	printf("List of odd number: ");
	for(int i = s_num; i <= f_num; i++){
		if (i % 2 != 0) { 
			printf("%i\n", i);
			accum +=i;
		}
	}
	
	printf("Sum=%i\n",accum);
	return 0;
}
