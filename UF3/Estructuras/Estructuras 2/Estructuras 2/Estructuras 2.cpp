/*	Queremos guardar para cada alumno: 
	- Su nombre 
	- La nota de Lenguaje de marcas 
	- La nota de Sistemas operativos 
	- La nota de Programación Básica 
	- La nota de FOL 
 
	Pediremos la información de 2 alumnos y mostraremos: 
	- El nombre del alumno que tiene mejor nota media. 
	- El nombre del alumno que tiene mejor nota de Programación Básica. 
	- El nombre del alumno que tiene mejor nota de Lenguaje de Marcas. */// Librerías#include <stdio.h>#include <stdlib.h>#include <locale.h>// Prototipos de funcionesfloat notaMedia(float LM, float SO, float PB, float FOL);void comparaMedia(float media1, char *nombre1, float media2, char *nombre2);struct alumno
{
	char nombre[20];
	float notaLM;
	float notaSO;
	float notaPB;
	float notaFOL;
};void main(){	// Declaración de variables	setlocale(LC_ALL, "Spanish");	struct alumno alumno1, alumno2;	float media1, media2, maxPB, maxLM;	// Alumno 1	printf("\n Introduce el nombre del alumno 1: ");	fflush(stdin);	gets(alumno1.nombre);	do
	{
		printf("\n Introduzca su nota de Lenguaje de Marcas: ");
		scanf("%f", &alumno1.notaLM);
	}while(alumno1.notaLM < 0 || alumno1.notaLM > 10);

	do
	{
		printf("\n Introduzca su nota de Sistemas Operativos: ");
		scanf("%f", &alumno1.notaSO);
	}while(alumno1.notaSO < 0 || alumno1.notaSO > 10);

	do
	{
		printf("\n Introduzca su nota de Programación Básica: ");
		scanf("%f", &alumno1.notaPB);
	}while(alumno1.notaPB < 0 || alumno1.notaPB > 10);

	do
	{
		printf("\n Introduzca su nota de FOL: ");
		scanf("%f", &alumno1.notaFOL);
	}while(alumno1.notaFOL < 0 || alumno1.notaFOL > 10);	// Alumno 2	printf("\n Introduce el nombre del alumno 2: ");	fflush(stdin);	gets(alumno2.nombre);	do
	{
		printf("\n Introduzca su nota de Lenguaje de Marcas: ");
		scanf("%f", &alumno2.notaLM);
	}while(alumno2.notaLM < 0 || alumno2.notaLM > 10);

	do
	{
		printf("\n Introduzca su nota de Sistemas Operativos: ");
		scanf("%f", &alumno2.notaSO);
	}while(alumno2.notaSO < 0 || alumno2.notaSO > 10);

	do
	{
		printf("\n Introduzca su nota de Programación Básica: ");
		scanf("%f", &alumno2.notaPB);
	}while(alumno2.notaPB < 0 || alumno2.notaPB > 10);

	do
	{
		printf("\n Introduzca su nota de FOL: ");
		scanf("%f", &alumno2.notaFOL);
	}while(alumno2.notaFOL < 0 || alumno2.notaFOL > 10);	// Cálculo de la nota media	media1 = notaMedia(alumno1.notaLM, alumno1.notaSO, alumno1.notaPB, alumno1.notaFOL);	media2 = notaMedia(alumno2.notaLM, alumno2.notaSO, alumno2.notaPB, alumno2.notaFOL);	comparaMedia(media1, alumno1.nombre, media2, alumno2.nombre);	// Quién tiene mejor nota de PB?	if(alumno1.notaPB > alumno2.notaPB)		printf("\n El alumno 1 (%s) tiene la mejor nota de PB (%f.2)", alumno1.nombre, alumno1.notaPB);	else if(alumno1.notaPB < alumno2.notaPB)		printf("\n El alumno 2 (%s) tiene la mejor nota de PB (%f.2)", alumno2.nombre, alumno2.notaPB);	else		printf("\n Los dos alumnos tienen la misma nota de PB (%f.2)", alumno1.notaPB);	// Quién tiene mejor nota de LM?	if(alumno1.notaLM > alumno2.notaLM)		printf("\n El alumno 1 (%s) tiene la mejor nota de LM (%f.2)", alumno1.nombre, alumno1.notaLM);	else if(alumno1.notaLM < alumno2.notaLM)		printf("\n El alumno 2 (%s) tiene la mejor nota de LM (%f.2)", alumno2.nombre, alumno2.notaLM);	else		printf("\n Los dos alumnos tienen la misma nota de LM (%f.2)", alumno1.notaLM);	// Finalización del prograna	printf("\n\n");	system("pause");}float notaMedia(float LM, float SO, float PB, float FOL){	float media;	media = (LM + SO + PB + FOL)/4;	return media;}void comparaMedia(float media1, char *nombre1, float media2, char *nombre2){	if(media1 > media2)		printf("\n El alumno 1 (%s) tiene mejor nota media (%f.2).", nombre1, media1);	else		printf("\n El alumno 2 (%s) tiene mejor nota media (%f.2).", nombre2, media2);}