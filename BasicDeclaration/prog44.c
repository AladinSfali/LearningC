/* Program to calculate the average mathematics marks of some students.
 * Input 0 (excluding to calculate the average) or a negative value to terminate the input process. *
 * */


#include<stdio.h>
#include<stdbool.h>

int main(){

	int student_amount = 0, mark;
	float accumulator = 0;

	printf("Input Mathmatics marks (0 to terminate): ");
	

	do{
		scanf("%i", &mark);
		if(mark != 0) { 
			accumulator += mark; 
			student_amount += 1; 
		}
		
	}while(mark != 0);
	
	float average = accumulator / student_amount;
	printf("Average marks in Mathematics: %.2f\n", average);


	

	return 0;
}
