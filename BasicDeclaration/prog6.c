// C program to compute the perimeter and area of a circle of a given radius
 
#include<stdio.h>

int main(){
	const float pi = 3.141517;
	int radius;

	printf("Input a radius: ");
	scanf("%i", &radius);
	
	printf("Perimeter of the Circle = %f\n", 2*pi*radius);
	
	printf("Area of the Circle = %f\n", pi*radius*radius);

	return 0;
}
