#include <stdio.h>

#define MAX 30
#define SIZE_FREQ 11

/*

5. Realitzar un programa on es demanem una seqüència de notes (números enters entre 0 i 10). La 
seqüència termina quan s’introdueix un número menor que 0 o superior a 10, o si hem introduït 30 
notes. El programa ha d’obtenir la llista de freqüències (nombre de repeticions) de cadascuna de les 
notes. 

El programa ha de tenir les següents funcions:

· Una funció per introduir les notes en un vector i que retorni el nombre de notes 
introduïdes. 
· Una funció que retorni la freqüència de cadascuna de les notes del vector anterior. 
· Una funció per mostrar les freqüències per pantalla.

*/

int introduir_notes(int *notes) {
	int i=0;
	do{
			printf("\n Introduce las notas del alumno %d: ", i+1);
			scanf("%d", notes);
			i++;
			notes++;
	}while((*(notes-1)>=0 && *(notes-1)<=10) && i <MAX);
	if(*(notes-1)>=0 && *(notes-1)<=10)
		return i;
	else
		return i-1;
}

void show_notes(int *notes) {
	for(int i = 0; i < MAX; ++i) {
		printf("\n %d", *(notes+i));
	}
}


void show_freq(int *freq) {
	for(int i = 0; i < SIZE_FREQ; ++i) {
		printf("\n hay %d %d", *(freq+i), i);
	}
}

void calc_freq(int *notes, int *freq, int numalum) {
	//int nota;
	for(int i = 0; i < numalum; ++i) {
		/*
		nota=*notes;
		freq=freq+nota;
		(*freq)++;
		freq=freq-*notes;
		notes++;
		*/
		(*(freq+*(notes+i)))++;
	}
}

void main(){
	
	int notes[MAX];

	int freq[SIZE_FREQ]={0}, num;

	num=introduir_notes(notes);

	//printf("%d", final);

	calc_freq(notes, freq, num);

	show_freq(freq);

	fflush(stdin);
	getchar();

}