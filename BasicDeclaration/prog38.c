/* Prrogram that read two numbers and divides the first number by the second number. 
 * If division is not possible print "Division is not possible".
 * */


#include<stdio.h>

int main(){
	
	//Variable declaration
	float x_value, y_value;

	//Take x and y value
	printf("x: ");
	scanf("%f", &x_value);
	printf("y: ");
	scanf("%f", &y_value);

	if ( y_value != 0) { printf("%.1f\n", x_value/y_value); }
	else { printf("Division is not possible\n") ; }	

	return 0;
}
