/* Program that accepts three integers and finds the maximum of three
 */

#include<stdio.h>

int main(){
	int fval, sval, tval;

	printf("Type the first value: ");
	scanf("%i", &fval);
	printf("Type the second value: ");
	scanf("%i", &sval);
	printf("Type the third value: ");
	scanf("%i", &tval);

	if ((fval > sval) && (fval > tval))
	       printf("The highest value is: %i\n", fval);
	else if (sval > tval)
		printf("The highest value is: %i\n", sval);
	else
		printf("The highest value is: %i\n", tval);

	return 0;
}
