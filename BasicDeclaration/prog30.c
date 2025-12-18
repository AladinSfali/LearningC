// Program to find and print the square of all the even values from 1 to a specified values
//

#include<stdio.h>

int main(){
	
	int limit;
	
	printf("List of square of each one of the even values from 1 to a ");
	scanf("%i", &limit);

	for(int i = 0; i < limit; i++){	if(i % 2 == 0){ printf("%i^2 = %i\n", i, i*i); }}

	return 0;
}
			
