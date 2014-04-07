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

// Librerías
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>	// para especificar el lenguaje ESPAÑOL

// Es necesario devolver varios tipos de datos para usarlos en las otras funciones
// Debe hacerse con APUNTADORES o STRUCTS
/*
void introDatos(int edad, char sexo, float hemo)
{
	do
	{
		printf("\n\n Introduzca su edad: ");
		scanf("%d", &edad);
		fflush(stdin);	// para eliminar el búffer en teclado
	}while(edad < 0);
	
	do
	{
		printf(" Introduzca su sexo (M/m = Masculino | F/f = Femenino): ");
		sexo = getchar();	// scanf(" %c", &sexo);
		fflush(stdin);
	}while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
	
	do
	{
		printf(" Introduzca su nivel de hemoglobina (%%): ");
		scanf("%f", &hemo);
	}while(hemo < 0 || hemo > 100);
}
*/

/*
int introEdad(int edad)
{
	do
	{
		printf("\n\n Introduzca su edad: ");
		scanf("%d", &edad);
		fflush(stdin);	// para eliminar el búffer en teclado
	}while(edad < 0);
	return edad;
}

char introSexo(char sexo)
{
	do
	{
		printf(" Introduzca su sexo (M = Masculino | F = Femenino): ");
		sexo = getchar();	// scanf(" %c", &sexo);
		fflush(stdin);
	}while(sexo != 'M' || sexo != 'm' || sexo != 'F' || sexo != 'f');
	return sexo;
}

float introHemo(float hemo)
{
	do
	{
		printf(" Introduzca su nivel de hemoglobina (%%): ");
		scanf("%f", &hemo);
	}while(hemo < 0 || hemo > 100);
	return hemo;
}
*/

// Prototipos
bool analizarDatos(int edad, char sexo, float hemo);
void darResultado(int edad, char sexo, bool anemia);

void main()
{
	setlocale(LC_ALL, "spanish");
	
	int edad;	// unsigned short int ?
	bool anemia = false;
	char sexo;
	float hemo;

	printf("\n---- DIAGNÓSTICO DE ANEMIA ----");
	
	// introEdad(edad);
	do
	{
		printf("\n\n Introduzca su edad: ");
		scanf("%d", &edad);	// %u si unsigned short int
		fflush(stdin);	// para eliminar el búffer en teclado
	}while(edad < 0); // > 130 si unsigned short int
	
	//introSexo(sexo);
	do
	{
		printf(" Introduzca su sexo (M/m = Masculino | F/f = Femenino): ");
		sexo = getchar();	// scanf(" %c", &sexo);
		fflush(stdin);
	}while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

	// introHemo(hemo);
	do
	{
		printf(" Introduzca su nivel de hemoglobina (%%): ");
		scanf("%f", &hemo);
	}while(hemo < 0 || hemo > 100);
		
	anemia = analizarDatos(edad, sexo, hemo); // al devolver un resultado la función, es necesario almacenarlo en una variable	
	darResultado(edad, sexo, anemia);
	
	// Finalización del programa
	printf("\n\n");
	system("pause");
}

bool analizarDatos(int edad, char sexo, float hemo)
{
	if(edad == 0 || edad == 1)
	{
		if(hemo < 11 || hemo > 15)
			return true;
	}
	else if(edad > 1 && edad <= 15)
	{
		if(hemo < 11.5 || hemo > 15.5)
			return true;
	}
	else if(edad > 15 && (sexo == 'F' || sexo == 'f')) // tolower (F/f)
	{
		if(hemo < 12 || hemo > 16)
			return true;
	}
	else if(edad > 15 && (sexo == 'M' || sexo == 'm')) // tolower (M/m)
	{
		if(hemo < 14 || hemo > 18)
			return true;
	}
	return false;
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
		else if(edad > 15 && sexo == 'F' || sexo == 'f')
			printf("\n Su nivel de hemoglobina debería estar entre el 12%% y el 16%%.");
		else if(edad > 15 && sexo == 'M' || sexo == 'm')
			printf("\n Su nivel de hemoglobina debería estar entre el 14%% y el 18%%.");		
	}
	else
	{
		printf("\n\n El resultado del análisis es: NEGATIVO.");
		printf("\n Usted está dentro de los niveles adecuados de hemoglobina.");
	}
}
