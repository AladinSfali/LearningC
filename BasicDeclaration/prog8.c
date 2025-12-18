/* C program that conver specified days into years, weeks and days
 *
 */

#include<stdio.h>



void datereturner(int *n_days){
	int years = *n_days / 365;
	int res_days = *n_days % 365;
	int weeks = res_days / 7;
	res_days = res_days % 7;

	printf("Years: %i\nWeeks: %i\nDays: %i\n", years, weeks, res_days);

}

int main(){

	int days;

	printf("Number of days: ");
	scanf("%i", &days);

	datereturner(&days);

	return 0;

}
