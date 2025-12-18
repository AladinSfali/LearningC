// Program that accepts some integers from the user and finds the highest values and the input position
//

#include<stdio.h>

int main(){
	
	int usernum, high = 0, pos = 0;

	for(int i = 0; i < 5; i++){
		scanf("%i", &usernum);
		if(usernum > high) {
			high = usernum;
			pos = i + 1;
		}
	}
	
	printf("Highest value: %i\n", high);
	printf("Position: %i\n", pos);
	
	return 0;
}
