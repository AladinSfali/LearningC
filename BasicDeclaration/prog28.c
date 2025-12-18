// Program Reads 5 numbers, counts the numbers of positive numbers, and prints out the average of all positive values
//

#include <stdio.h>

int main(){

	int counter = 0, usernum = 0;
	float average, total = 0.00;
		
	for(int i = 0; i < 5; i++){
		printf("Input the #%i number: ", i);
		scanf("%i", &usernum);

		if (usernum > 0){
			counter++;
			total += usernum;
		}
	}
	
	average = total/counter;
	printf("Number of positive numbers: %i\n", counter);
	printf("Average valuea of the said positive number: %.2f\n", average);
}


