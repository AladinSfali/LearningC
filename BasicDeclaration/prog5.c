/* C Program to compute the perimeter and area of a rectangle with a height of 7 inches
 * and width of 5 inches
 *
 */
#include <stdio.h>

int main(){
	int height = 7;
	int width = 5;

	printf("Perimeter of the rectangle = %d\n", height+width+height+width);
	printf("Area of the rectangle = %d\n", height*width);
	
	return 0;
}



