// Program that convert a given integers (in days) to years, months and days, assuming that all months have 30 days and all years have 365

#include<stdio.h>

int main(){
	int days;

	printf("Input number of days: ");
	scanf("%i", &days);

	printf("%i Year(s)\n%i Month(s)\n%i Day(s)\n", days/365, (days%365)/30, (days%365)%30);

	return 0;
}

