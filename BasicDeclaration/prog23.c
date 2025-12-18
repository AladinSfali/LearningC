// C program that read three floating-point values and checks if it is possible to make a triangle with them.
// Determine the perimenter of the triangle if the given values are valid.

#include<stdio.h>

int main(){
	float list[3];

	for(int i = 0; i < 3; i++){ 
		printf("Input the #%i: ", i);
		scanf("%f", &list[i]); 
	}	


	if(list[0] + list[1] > list[2] && list[0] + list[2] > list[1] && list[1] + list[2] > list[0]){
		printf("Perimeter = %.1f\n", list[0] + list[1] + list[2]);
	}
	
	return 0;
}
