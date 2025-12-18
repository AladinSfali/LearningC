#include <stdio.h>
#include <stdlib.h>

void printList(int aList[]){	
	for (int i = 0; i < 11; i++){
		if (aList[i] == 0) printf(" ");
		else printf("#");
	}
	printf("\n");
}



int main(){

	int letter_f[8] = { 6, 1, 1, 5, 1, 1, 1}; 

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < letter_f[i]; j++) printf("#");	
		
		printf("\n");
	}

	unsigned int insidelist[11] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0};
	unsigned int outsidelist[11] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1};
	unsigned int innerlist[11] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	printList(insidelist);
	printList(outsidelist);
	for (int i = 0; i < 5; i++) printList(innerlist);
	printList(outsidelist);
	printList(insidelist);

	return EXIT_SUCCESS;

}

