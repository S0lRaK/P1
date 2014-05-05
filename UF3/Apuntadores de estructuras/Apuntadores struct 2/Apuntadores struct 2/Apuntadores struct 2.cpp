#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>	// para especificar el lenguaje ESPAÑOL

//	es necesario declarar la estructura antes de la biblioteca para que ésta pueda usarla

struct dir_persona
{
	char nombre[20];
	char apellidos[40];
	char direccion[40];
	short int numero;
	long int codigo_postal;
	char ciudad[40];
};
#include "recogerDatos.h"

void main()
{
	setlocale(LC_ALL, "spanish");
	struct dir_persona persona;

	introDatos(&persona);	// pasamos la estructura por referencia

	printf("\n\n Los datos introducidos de la persona son: ");
	printf("\n %s %s", persona.apellidos, persona.nombre);
	printf("\n %s, %u", persona.direccion, persona.numero);
	printf("\n %u (%s)", persona.codigo_postal, persona.ciudad);

	printf("\n\n");
	system("pause");
}