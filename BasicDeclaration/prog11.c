/* C program that accepts two item's weight and number of purchases (floating points values)
 * and calculates their average value.
 * */

#include<stdio.h>

void average(){
	float item1, item2, weight1, weight2, averagevalue;

	printf("First item weight: ");
	scanf("%f", &weight1);	
	printf("Number of first items: ");
	scanf("%f", &item1);
	printf("Second item wight: ");
	scanf("%f", &weight2);
	printf("First item wight: ");
	scanf("%f", &item2);
	
	averagevalue = ((item1 * weight1) + (item2 * weight2)) / (item1+item2);
	printf("Average Value = %f\n", averagevalue);
}

int main(){
	
	average();

	return 0;
	
}
