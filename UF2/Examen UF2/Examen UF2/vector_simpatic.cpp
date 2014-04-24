// Llibreries
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vector_simpatic.h"

// Variables globals
#define NUM_POS 5
#define MIN_POS 2

void main()
{
	setlocale(LC_ALL, "Catalan");

	float vector[NUM_POS];
	float max;
	
	omplirVector(vector, NUM_POS);
	
	if(comprobar2(vector, NUM_POS, MIN_POS))
		printf("\n El vector conté almenys %d elements.", MIN_POS);
	else
		printf("\n El vector no arribar a contenir el mínim d'elements (%d).", MIN_POS);
	
	if(diferenciar(vector, NUM_POS))
		printf("\n Tots els elements del vector són diferents.");
	else
		printf("\n No tots els elements del vector són diferents.");

	if(max1(vector, NUM_POS, &max))
		printf("\n El valor màxim del vector és %f i SI es troba a la primera posició.", max);
	else
		printf("\n El valor màxim del vector és %f i NO es troba a la primera posició.", max);
	
	// avalua les funcions correctament si es comparen a FALSE, pero no a TRUE
	/*
	if(comprobar2 == false && diferenciar == false && max1 == false)
		printf("\n EL VECTOR ÉS SIMPATIC!");
	else
		printf("\n EL VECTOR NO MOLA...");
	*/
	printf("\n\n");
	system("pause");
