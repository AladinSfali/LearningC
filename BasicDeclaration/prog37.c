/*
 * Program to read the coordinates (x,y) (in the Cartesian system)
 * and find the quadrant to which it belongs (Quadrant - I, Quadrant - II, 
 * Quadrant - III, Quadrant - IV).
 * Note: A Cartesian coordinate system is a coordinate system
 * that specifies each point uniquely in a plane by a pair of numerical coordinates.
 * These are often numbered from 1st to 4th and denoted by Roman numerals:
 * I (where he signs of the (x,y) coordinates are I(+,+),II(-,+), III(-,-) and IV(+,-).
 * */

#include<stdio.h>

int main(){
	
	//Initialization of x and y
	int x_value, y_value;
	
	//Takes x and y inputs from user
	printf("Input the coordinate(x,y):\n");
	printf("x: ");
	scanf("%i", &x_value);
	printf("y: ");
	scanf("%i", &y_value);
	
	//Checks which quadrant the coordinates belongs to
	if(x_value > 0){
		if(y_value > 0) { printf("Quadrant - I(+,+)\n") ; }
		else { printf("Quadrant - IV(+,-)\n") ; }
	}else{
		if(y_value > 0) { printf("Quadrant - II(-,+)\n") ; }
		else { printf("Quadrant - III(-,-)\n") ; }
	}

	return 0;
}
			

