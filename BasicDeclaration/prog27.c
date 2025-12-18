// Program that read 5 number and counts the number of positive numbers and negative numbers.

#include<stdio.h>

int main(){
	int posnum = 0, negnum = 0, usernum;
	
	for(int i = 0; i < 5; i++){ 
		printf("Input #%i number: ", i);
		scanf("%i", &usernum);
		
		if(usernum < 0) { negnum++ ; }
		else { posnum++ ; }
	}

	printf("Number of positive numbers: %i\n", posnum);
	printf("Number of negative numbers: %i\n", negnum);

}
