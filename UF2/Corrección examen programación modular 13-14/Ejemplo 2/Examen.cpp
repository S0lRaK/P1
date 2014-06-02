#include <stdio.h>
#include "libreria.h"
#define MAX 5

void main(){

	float vec[MAX];
	float maxim = 0;

	printf("\nIntrodueix els reals del vector:\n");
	
	introduir_vector(vec, MAX);

	if( minim_dos(vec, MAX) && diferents(vec, MAX) && !maxim_no_primera2(vec, MAX, &maxim)) printf("\nEs simpatic");
	else printf("\nNo simpatic");

	fflush(stdin);
	getchar();
	
}