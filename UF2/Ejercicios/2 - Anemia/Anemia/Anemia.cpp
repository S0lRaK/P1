/*
Para que un médico determine si una persona tiene anemia, se ha de tener en cuenta la edad, el sexo i la cantidad de hemoglobina en sangre.
El médico diagnostica que el paciente tiene anemia si el nivel de hemoglobina es inferior al mínimo o superior al máximo de los rangos determinados en la siguiente tabla:

	Edad y sexo				Nivel mínimo Hemoglobina	Nivel máximo Hemoglobina

	<= 1 año 						11 %						15 %
	> 1 y <= 15 años				11.5%						15.5 %
	Mujeres (m) > 15 años			12 %						16 %
	Hombres (h) > 15 años			14 %						18%

Escribir un programa que diga si un paciente tiene anemia o no y en que intervalo (nivel mínimo y nivel máximo) debería estar su hemoglobina.
Para programar este ejercicio debemos implementar la función siguiente:
	Una función que dada la edad, el sexo y el nivel de hemoglobina nos devuelva si tiene anemia o no y el nivel mínimo y máximo de hemoglobina.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>	// Librería necesaria para especificar el lenguaje ESPAÑOL

/*-- Es necesario devolver varios tipos de datos para usarlos en las otras funciones
	 Debe hacerse con APUNTADORES o STRUCTS

void introDatos(int edad, char sexo, float hemo)
{
	printf("\n\n Introduzca su edad: ");
	scanf("%d", &edad);
	fflush(stdin);	// para eliminar el búffer en teclado
	printf(" Introduzca su sexo (M = Masculino | F = Femenino): ");
	sexo = getchar();	// scanf(" %c", &sexo);
	fflush(stdin);
	printf(" Introduzca su nivel de hemoglobina (%%): ");
	scanf("%f", &hemo);
}
*/

bool analizarDatos(int edad, char sexo, float hemo, bool anemia)
{
	if(edad == 0 || edad == 1)
	{
		if(hemo < 11 || hemo > 15)
			anemia = true;
		else
			anemia = false;
	}
	else if(edad > 1 && edad <= 15)
	{
		if(hemo < 11.5 || hemo > 15.5)
			anemia = true;
		else
			anemia = false;
	}
	else if(edad > 15 && (sexo == 'F' || sexo == 'f')) // tolower (F/f)
	{
		if(hemo < 12 || hemo > 16)
			anemia = true;
		else
			anemia = false;
	}
	else if(edad > 15 && (sexo == 'M' || sexo == 'm')) // tolower (M/m)
	{
		if(hemo < 14 || hemo > 18)
			anemia = true;
		else
			anemia = false;
	}
	return anemia;
}

void darResultado(int edad, char sexo, bool anemia)
{
	if(anemia == true)
	{
		printf("\n\n El resultado del análisis es: POSITIVO.");
		if(edad <= 1)
			printf("\n Su nivel de hemoglobina debería estar entre el 11%% y el 15%%.");
		else if(edad > 1 && edad <= 15)
			printf("\n Su nivel de hemoglobina debería estar entre el 11.5%% y el 15.5%%.");
		else if(edad > 15 && sexo == 'F')
			printf("\n Su nivel de hemoglobina debería estar entre el 12%% y el 16%%.");
		else if(edad > 15 && sexo == 'M')
			printf("\n Su nivel de hemoglobina debería estar entre el 14%% y el 18%%.");		
	}
	else
	{
		printf("\n\n El resultado del análisis es: NEGATIVO.");
		printf("\n Usted está dentro de los niveles adecuados de hemoglobina.");
	}
}

void main()
{
	setlocale(LC_ALL, "spanish");
	
	int edad;
	bool anemia = false;
	char sexo;
	float hemo;

	printf("\n---- DIAGNÓSTICO DE ANEMIA ----");
	
	printf("\n\n Introduzca su edad: ");
	scanf("%d", &edad);
	fflush(stdin);	// para eliminar el búffer en teclado
	printf(" Introduzca su sexo (M = Masculino | F = Femenino): ");
	sexo = getchar();	// scanf(" %c", &sexo);
	fflush(stdin);
	printf(" Introduzca su nivel de hemoglobina (%%): ");
	scanf("%f", &hemo);
		
	analizarDatos(edad, sexo, hemo, anemia);	
	darResultado(edad, sexo, anemia);
	
	// Finalización del programa
	printf("\n\n");
	system("pause");
}