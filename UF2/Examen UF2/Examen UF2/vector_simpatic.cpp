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
	printf("\n----- El vector �s de %d posicions -----\n", NUM_POS);
	
	// Crida a la funci� per a omplir el vector
	omplirVector(vector, NUM_POS);
	// Mostra el vector omplert
	printf("\n El vector cont� els seg�ents %d elements: ", NUM_POS);
	for(int i = 0; i < NUM_POS; i++)
		// Ajusta la precisi� dels elements a 2 decimals, accedint a la variable de tipus vector modificada
		printf("%.2f | ", vector[i]);
	
	// Comprova si el vector cont� el m�nim d'elements establerts
	if(minElements(vector, NUM_POS, MIN_POS))
	{
		printf("\n El vector cont� almenys %d elements.", MIN_POS);
		// Comprova que tots els elements del vector tinguin valors diferents
		if(diferenciarElements(vector, NUM_POS))
		{
			printf("\n Tots els elements del vector s�n diferents.");
			// Comproba si l'element amb valor m�xim est� a la 1� posici�
			if(max1Element(vector, NUM_POS, &max))
			{
				printf("\n El valor m�xim del vector �s %.2f i S� es troba a la 1� posici�.", max);
				printf("\n EL VECTOR NO MOLA...");
			}else{
				printf("\n El valor m�xim del vector �s %.2f i NO es troba a la primera posici�.", max);
				printf("\n EL VECTOR �S SIMPATIC!");
			}
		}else{
			printf("\n EL VECTOR NO MOLA perqu� no tots els elements del vector s�n diferents.");
		}
	}else
		printf("\n EL VECTOR NO MOLA perqu� no arriba a contenir el m�nim d'elements (%d).", MIN_POS);
	
	printf("\n\n");
	system("pause");
}
