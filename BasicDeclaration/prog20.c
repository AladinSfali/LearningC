// Program to print the roots of Bashkara's formula from the given three floating numbers. Display a message if it is not possible to find the roots

#include<stdio.h>
#include<math.h>

int main(){
	float f_input, s_input, t_input, inSquare, f_res, s_res;
	printf("Input the first number(a): ");
	scanf("%f", &f_input);
	printf("Input the second number(a): ");
	scanf("%f", &s_input);
	printf("Input the third number(a): ");
	scanf("%f", &t_input);
	
	inSquare =  sqrt((s_input * s_input) - (4 * t_input * f_input)); 
	if(inSquare > 0 ) {
		f_res = (-s_input + inSquare) / (2 * f_input);
		s_res = (-s_input - inSquare) / (2 * f_input);
		printf("Root1 = %.5f\n", f_res);
		printf("Root2 = %.5f\n", s_res);
	}else {	printf("Its not possible to find the roots"); }
		
	return 0;
}
