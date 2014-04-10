/*
Crear una estructura con los campos:
	- nombre
	- apellidos
	- direcci�n
	- n�mero
	- c�digo postal
	- ciudad
Pedir todos los datos de la direcci�n de una persona y una vez los teng�is 
mostrarlos por pantalla como si fu�ramos a escribirle una carta:
	- Nombre Apellidos
	- Direcci�n, n�mero
	- C�digo postal (ciudad)
*/

// Librer�as
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>	// para especificar el lenguaje ESPA�OL

struct dir_persona
{
	char nombre[20];
	char apellidos[40];
	char direccion[40];
	unsigned short int numero;
	unsigned short int codigo_postal;
	char ciudad[40];
};

void main()
{
	setlocale(LC_ALL, "spanish");
	struct dir_persona persona;

	printf("\n Introduzca el nombre de la persona: ");
	gets(persona.nombre);
	fflush(stdin);	// para eliminar el b�ffer en teclado
	printf("\n Introduzca sus apellidos: ");
	gets(persona.apellidos);
	fflush(stdin);
	printf("\n Introduzca su direcci�n (s�lo nombre de la calle): ");
	gets(persona.direccion);
	fflush(stdin);
	do
	{
		printf("\n Introduzca el n�mero de la direcci�n: ");
		scanf("%u", &persona.numero);
		fflush(stdin);
	}while(persona.numero < 0);
	do
	{
		printf("\n Introduzca el c�digo postal de la direcci�n: ");
		scanf("%u", &persona.codigo_postal);
		fflush(stdin);
	}while(persona.codigo_postal < 00000 || persona.codigo_postal > 99999);
	printf("\n Introduzca el nombre de la ciudad correspondiente: ");
	gets(persona.ciudad);
	fflush(stdin);

	printf("\n\n Los datos introducidos de la persona son: ");
	printf("\n %s %s", persona.apellidos, persona.nombre);
	printf("\n %s, %u", persona.direccion, persona.numero);
	printf("\n %u (%s)", persona.codigo_postal, persona.ciudad);

	printf("\n\n");
	system("pause");
}