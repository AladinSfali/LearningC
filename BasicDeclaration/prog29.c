// Program that read 5 numbers and sum of all odd values between them.
//

#include<stdio.h>

int main(){
	int total = 0, usernum;

	for(int i = 0; i < 5; i++){
		printf("Input the #%i number: ", i);
		scanf("%i", &usernum);
	       	
		if (usernum % 2 != 0) { total += usernum ; }
	}
	
	printf("Sum of all odd values: %i\n", total);

	return 0;
}	
