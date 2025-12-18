// Program that read two integers and checks whether they are multiplied or not.

#include <stdio.h>

int main(){
	int f_num, s_num;

	printf("Input the first number: ");
	scanf("%i", &f_num);

	printf("Input the second number: ");
	scanf("%i", &s_num);

	if(s_num % f_num == 0){ printf("Multiplied\n"); }
}

