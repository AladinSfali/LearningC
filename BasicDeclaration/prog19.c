/* Program that accepts 4 integers p, q, r, s from the user where q, r, and s are positive and p is even.
 * If q is greater than r and s is greater that p and if the sum of r and s is greater than the sum of p and q prrint "Correct values", otherwise print "Wrong values"
 * */

#include<stdio.h>

int main(){

	int p, q, r, s;

	printf("Input the first integer: ");
	scanf("%i", &p);
	printf("Input the second integer: ");
	scanf("%i", &q);
	printf("Input the third integer: ");
	scanf("%i", &r);
	printf("Input the first integer: ");
	scanf("%i", &s);
	
	if((p % 2) == 0){ if (q > r && s > p )  if ( (r + s) > (p + q) )  printf ("Correct values\n");}
	else { printf("Wrong values\n") ; }
	
	return 0;
}
