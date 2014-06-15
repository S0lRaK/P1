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
	
	// Mostra les posicions a omplir del vector
	printf("\n----- El vector és de %d posicions -----\n", NUM_POS);
	
	// Crida a la funció per a omplir el vector
	omplirVector(vector, NUM_POS);
	// Mostra el vector omplert
	printf("\n El vector conté els següents %d elements: ", NUM_POS);
	for(int i = 0; i < NUM_POS; i++)
		// Ajusta la precisió dels elements a 2 decimals, accedint a la variable de tipus vector modificada
		printf("%.2f | ", vector[i]);
	
	// Comprova si el vector conté el mínim d'elements establerts
	if(minElements(vector, NUM_POS, MIN_POS))
	{
		printf("\n El vector conté almenys %d elements.", MIN_POS);
		// Comprova que tots els elements del vector tinguin valors diferents
		if(diferenciarElements(vector, NUM_POS))
		{
			printf("\n Tots els elements del vector són diferents.");
			// Comproba si l'element amb valor màxim està a la 1ª posició
			if(max1Element(vector, NUM_POS, &max))
			{
				printf("\n El valor màxim del vector és %.2f i SÍ es troba a la 1ª posició.", max);
				printf("\n EL VECTOR NO MOLA...");
			}else{
				printf("\n El valor màxim del vector és %.2f i NO es troba a la primera posició.", max);
				printf("\n EL VECTOR ÉS SIMPATIC!");
			}
		}else{
			printf("\n EL VECTOR NO MOLA perquè no tots els elements del vector són diferents.");
		}
	}else
		printf("\n EL VECTOR NO MOLA perquè no arriba a contenir el mínim d'elements (%d).", MIN_POS);
	
	printf("\n\n");
	system("pause");
}
