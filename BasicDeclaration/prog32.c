// Program to print all numbers between 1 and 100 which are divide by a specified number and the remainder will be 3
//

#include<stdio.h>

int main(){

	int usernum;
	
	printf("Input an integer: ");
	scanf("%i", &usernum);

	for(int i = 1; i < 101; i++ ){ if (i % usernum == 3) { printf("%i\n", i) ; } }; 

	return 0;
}
