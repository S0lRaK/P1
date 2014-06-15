// Displays the menu
int menu(){
	int option;
	do{
		printf("\n----- Motorcycle Sales -----\n");
		printf("\n 1) New");
		printf("\n 2) Modify");
		printf("\n 3) Exit");
		printf("\n\n Select an option: ");
		// Clears keyboard's buffer
		fflush(stdin);
		scanf("%d", &option);
		// Notify if an incorrect option is selected
		if(option < 1 || option > 3)
			printf("\n Error: Invalid option. \n");
	}while(option < 1 || option > 3);
	return option;
}

// Search for a free cell in the vector...
int freeCell(struct motorbikes motorbike[]){
	int i = 0;
	// ...which is the one with a '0' in the prize property
	while(motorbike[i].prize != 0 && i < MAX)
		i++;
	// If the index has arrived to the MAX...
	if(i == MAX)
		// ...the vector has no free cells
		return -1;
	else
		// The free position
		return i;
}



// Loads previous data
void load(struct motorbikes *motorbike){
	FILE *mb;
	if((mb = fopen("motorbikes.dat", "rb")) != NULL){
		fread(motorbike, sizeof(struct motorbikes), MAX, mb);
		fclose(mb);
	}
}

// Saves data
void save(struct motorbikes *motorbike){
	FILE *mb;
	if((mb = fopen("motorbikes.dat", "wb")) != NULL){
		fwrite(motorbike, sizeof(struct motorbikes), MAX, mb);
		fclose(mb);
	}
}
