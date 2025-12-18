// Program to check if two numbers in pair are in ascendinf order or descending order
//

#include<stdio.h>
#include<stdbool.h>

int main(){
	int usernum;

	while (true){
		printf("Input the password: ");
		scanf("%i", &usernum);
		if(usernum == 1234) { 
			printf("Correct password\n");
			break;
		}
		printf("Incorrect password\n");
	}
	
	return 0;
}
