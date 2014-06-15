// Global variables
#define MAX 2 // 20

struct motorbikes{
	char brand[15];
	char model[10];
	int cc;
	float prize;
};

// Libraries
#include <stdio.h>
#include "functions.h"

void main(){
	struct motorbikes motorbike[MAX];
	char brand[15], model[10];
	int option, cc, position;
	float prize;

	// Starts at 0 all the prizes, to know which positions has no data
	for(int i = 0; i < MAX; i++){
		motorbike[i].prize = 0;
	}

	// Loads previous data
	load(motorbike);

	// Executes the menu
	do{
		option = menu();
		switch(option){
		case 1:
			printf("\n 1) New motorbike \n");
			position = freeCell(motorbike);
			// There are no free cells
			if(position != -1){
				newMoto(&motorbike[position];


	}while(option != 3);
}