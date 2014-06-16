// Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constantes
#define MAX 5 // 50+1

struct pisos{
	char direccion[15];
	int superficie;
	float precio;
};
// Se añade el archivo con las funciones posterior a la declaracion de la estructura para que este pueda manejarla
#include "functions.h"

void main(){
	struct pisos piso[MAX];
	int opcion, superf;
	char direc[15];
	float precio;
	
	// Se inicializan a 0 los precios, señal para saber qué posiciones del array no tienen datos
	for(int i = 0; i < MAX; i++){
		piso[i].precio = 0;
	}

	// Carga de datos previos
	cargar(piso);
	do{
		opcion = menu();
		switch(opcion){
			case 1:
				printf("\n----- Alta de piso -----\n");
				altaPiso(piso);
				break;
			case 2:
				printf("\n----- Eliminar piso -----\n");
				eliminaPiso(piso);
				break;
			case 3:
				printf("\n----- Saliendo del programa -----\n");
				// Al salir siempre guarda los datos
				guardar(piso);
				break;
			}
	}while(opcion != 3);	// mientras no se presione la opcion de 'salir'

	// Finalización del programa
	printf("\n\n");
	system("pause");
}