#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_ALUM 2

struct alumno
{
	char nombre[20];
	float notaLM;
	float notaSO;
	float notaPB;
	float notaFOL;
};

void main()
{
	setlocale(LC_ALL, "Spanish");
	struct alumno clase[NUM_ALUM];
	float media_alum, max_media = 0;
	int i, cont_alum;

	for(i = 0; i < NUM_ALUM; i++)
	{
		printf("\n Introduzca el nombre del alumno %d: ", i+1);
		fflush(stdin);
		gets(clase[i].nombre);
		
		do
		{
			printf("\n Introduzca su nota de Lenguaje de Marcas: ");
			scanf("%f", &clase[i].notaLM);
		}while(clase[i].notaLM < 0 || clase[i].notaLM > 10);

		do
		{
			printf("\n Introduzca su nota de Sistemas Operativos: ");
			scanf("%f", &clase[i].notaSO);
		}while(clase[i].notaSO < 0 || clase[i].notaSO > 10);

		do
		{
			printf("\n Introduzca su nota de Programación Básica: ");
			scanf("%f", &clase[i].notaPB);
		}while(clase[i].notaPB < 0 || clase[i].notaPB > 10);

		do
		{
			printf("\n Introduzca su nota de FOL: ");
			scanf("%f", &clase[i].notaFOL);
		}while(clase[i].notaFOL < 0 || clase[i].notaFOL > 10);

		printf("\n ----------------------------------------------");
	}

	for(i = 0, cont_alum = 0; i < NUM_ALUM; i++)
	{
		media_alum = (clase[i].notaLM + clase[i].notaSO + clase[i].notaPB + clase[i].notaFOL)/4;
		if(media_alum > max_media)
		{
			max_media = media_alum;
			cont_alum++;
		}
	}
	printf("\n El alumno %d (%s), es quién tiene mejor nota media (%f).", cont_alum, clase[cont_alum-1].nombre, max_media);

	// Mostrar el nombre del alumno que tiene mejor nota de PB


	// Mostrar el nombre del alumno que tiene mejor nota de LM


	printf("\n\n");
	system("pause");
}