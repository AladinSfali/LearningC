
/* Program to calculate a bike's average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number - 2 decimal points).
 * */

#include<stdio.h>

int main(){
	int distance;
	float fuelspent;

	printf("Input total distance in km: ");
	scanf("%i", &distance);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &fuelspent);

	printf("Average consumption (km/lt): %.2f\n", distance/fuelspent);

	return 0;
}

