/*	Queremos guardar para cada alumno: 
	- Su nombre 
	- La nota de Lenguaje de marcas 
	- La nota de Sistemas operativos 
	- La nota de Programación Básica 
	- La nota de FOL 
 
	Pediremos la información de 2 alumnos y mostraremos: 
	- El nombre del alumno que tiene mejor nota media. 
	- El nombre del alumno que tiene mejor nota de Programación Básica. 
	- El nombre del alumno que tiene mejor nota de Lenguaje de Marcas. */#include <stdio.h>#include <stdlib.h>#include <locale.h>#define NUM_ALUM 2struct alumno
{
	char nombre[20];
	float notaLM;
	float notaSO;
	float notaPB;
	float notaFOL;
};void main(){	setlocale(LC_ALL, "Spanish");	struct alumno alumno1, alumno2;	printf("\n\n");	system("pause");}