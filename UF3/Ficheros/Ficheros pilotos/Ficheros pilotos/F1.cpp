// Librer�as propias
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

// Librer�as personalizadas
#include "F1.h"


void main()
{
	struct pilotos piloto[MAX];
	// Inicializamos los datos de los pilotos: num�ricos a 0 y car�cteres vac�o
	for(int i = 0; i < MAX; i++)
	{
		piloto[i].dorsal = 0;
		piloto[i].nombre = '\0';
	}