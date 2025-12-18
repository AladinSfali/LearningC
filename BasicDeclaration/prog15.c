// Program to calculate the distance between two points

#include<stdio.h>

float squareroot(int *distance){
	int iterator = 0;
	float decimalsquare;
	int square;
	float dis = *distance + 0.0000;

	//Looks for the closest integer to the square number
	while(dis != iterator * iterator){
		int nextnum = (iterator + 1) * (iterator + 1);
		if (nextnum >= dis){
			square = iterator;
			break;		
		}
		iterator++;	
	}
	
	// Looks for the first decimal iterator
	float onedecite = square + 0.0;
	
	while(dis != onedecite * onedecite){
		int nextnum = (onedecite + 0.1) * (onedecite + 0.1);
		if (nextnum >= dis){
			decimalsquare = onedecite;
			break;		
		}
		onedecite = onedecite + 0.1; 	
	}
	
	// Looks for the first decimal iterator
	float twodecite = square + 0.00;
	
	while(dis != twodecite * twodecite){
		int nextnum = (twodecite + 0.01) * (twodecite + 0.01);
		if (nextnum >= dis){
			decimalsquare = twodecite;
			break;		
		}
		twodecite = twodecite + 0.01; 	
	}
	
	// Looks for the first decimal iterator
	float threedecite = square + 0.000;
	
	while(dis != threedecite * threedecite){
		int nextnum = (threedecite + 0.001) * (threedecite + 0.001);
		if (nextnum >= dis){
			decimalsquare = threedecite;
			break;		
		}
		threedecite = threedecite + 0.001; 	
	}
	
	// Looks for the first decimal iterator
	float fourdecite = square + 0.0000;
	
	while(dis != fourdecite * fourdecite){
		int nextnum = (fourdecite + 0.0001) * (fourdecite + 0.0001);
		if (nextnum >= dis){
			decimalsquare = fourdecite;
			break;		
		}
		fourdecite = fourdecite + 0.0001; 	
	}

	return decimalsquare;
}


int main(){
	int line, x1, y1, x2, y2;
	
	printf("Input x1: ");
	scanf("%i", &x1);
	printf("Input y1: ");
	scanf("%i", &y1);
	printf("Input x2: ");
	scanf("%i", &x2);
	printf("Input y2: ");
	scanf("%i", &y2);

	
	if ((x1 > x2) && (y1 > y2))
		line = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	else if ((x1 > x2) && (y2 > y1))
		line = ((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1));
	else if ((x2 > x1) && (y1 > y2))
		line = ((x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2));
	else
		line = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	printf("THe distance before square root is: %i\n", line);
	printf("Distance between the said points: %.4f\n", squareroot(&line));


	return 0;
}
