// Program that read an integer and checks the specified range to which it belongs.
// Print an error message if the number is negative and greater than 80.

#include<stdio.h>

int main(){
	int inputnum;

	printf("Input an integer: ");
	scanf("%i", &inputnum);
	
	if(inputnum > 0 && inputnum < 80){
		while(inputnum != 0 && inputnum < 80){
			if(inputnum  % 10 == 0){
				printf("Range [%i, %i]\n", inputnum - 20, inputnum);
		       		break;	
			}
			inputnum++;
		}
	}else{ printf("You've type a wrong number\n") ; }
	

	return 0;
}


	


