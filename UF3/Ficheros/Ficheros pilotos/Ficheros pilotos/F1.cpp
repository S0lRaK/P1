// Librerías propias
#include <stdio.h>

#define MAX 22

// Estructuras
struct pilotos
{
	int dorsal;
	char nombre[25];
	char escuderia[25];
	float altura;
	float peso;
	char nacionalidad[25];
};

// Librerías personalizadas
#include "F1.h"


void main()
{
	struct pilotos piloto[MAX];
	// Inicializamos los datos de los pilotos: numéricos a 0 y carácteres vacío
	for(int i = 0; i < MAX; i++)
	{
		piloto[i].dorsal = 0;
		piloto[i].nombre = '\0';
	}