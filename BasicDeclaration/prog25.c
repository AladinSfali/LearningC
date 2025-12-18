// Program that read an integer between 1 and 12 and prints the month of the year in English
//

#include <stdio.h>

int main(){

	char months[13][9] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int user_opt;

	printf("Input a number between 1 to 12 to get the month name: ");
	scanf("%i", &user_opt);
	
	for(int i = 0; i < 13; i++){ if(user_opt == i) { printf("%s\n", months[i - 1]); } }

}
