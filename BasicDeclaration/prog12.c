
/* Program that accepts an employee's ID, total worked houts in a month 
 * and the amount he received per hour. Print the ID and salary (with two decimals places) 
 * of the employee for a particular month
 * */

#include<stdio.h>

int main(){

	char empID[10];
        int total_hours, inc_p_hour;
	double salary;

	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", empID);

	printf("Input the working hrs: ");
	scanf("%i", &total_hours);

	printf("Salary amount/hr: ");
	scanf("%i", &inc_p_hour);

	salary = total_hours * inc_p_hour;

	printf("Employees ID = %s\n", empID);
	printf("Salary = U$ %.2f\n", salary);

}
