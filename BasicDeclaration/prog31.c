// Program to check whether a given integer is positive even, negative even, positive odd or negative odd.
// Print even if the number is 0.

#include <stdio.h>

int main(){

	int usernum;

	printf("Input an integer: ");
	scanf("%i", &usernum);

	if(usernum > 0){
		if(usernum % 2 == 0 ) { printf("Positive even\n"); }
		else { printf("Positive odd\n"); }
	}else {	
		if(usernum % 2 == 0 ) { printf("Negative even\n"); }
		else { printf("Negative odd\n"); }
	}

	return 0;
}
