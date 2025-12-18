/* Program that read two integers p and q,
 * prints p number of lines in a sequence of 1 to b in a lines. *
 * */


#include<stdio.h>

int main(){

	//Declaring variables
	int lines_numbers, char_per_line, counter = 1;

	//Assigning number of lines and number of characters per line
	printf("Input number of lines: ");
	scanf("%i", &lines_numbers);	
	printf("Number of character in a line: ");
	scanf("%i", &char_per_line);

	//Loop that print the varaibles
	for(int i = 0; i < lines_numbers; i++){
		for(int j = 0; j < char_per_line; j++) {
			printf("%i ", counter);
			counter+=1;
		}
		puts(" ");
	}

	return 0;
}
