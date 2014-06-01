struct datos{

	char nombre[20];
	char apellidos[30];
	char direccion[40];
	int numero;
	char codigo[6];
	char ciudad[35];


};
#include <stdio.h>
#include "funcionesest.h"


void main (){

	struct datos datos1;
	
	leer(&datos1);

	


	printf("\n %s %s", datos1.nombre,datos1.apellidos);
	printf("\n %s, %d", datos1.direccion,datos1.numero);
	printf("\n %s (%s)", datos1.codigo,datos1.ciudad);

	fflush(stdin);
	getchar();
}
