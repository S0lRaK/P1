#include <stdio.h>

void main(){
	int num=10;
	int *apuntador;//apuntador será un apuntador a variables de tipo entero

	printf("La variable num tiene el valor %d y se le ha asignado la celda de memoria %p", num, &num);

	//para hacer que apuntador apunte a num,
	//es decir, que almacene la dirección de memoria
	//de num
	apuntador=&num;//apuntador toma por valor la dirección de memoria de num
	/*Si yo hago
	num++;
	lo que está dentro de la variable num se incrementa en uno, 
	como es un 10 se incrementa a 11
	Si yo hago
	apuntador++;
	lo que está dentro de la variable apuntador se incrementa en 1
	como es una dirección de memoria se incrementa a la siguiente dirección de memoria
	(al ser un entero se mueve 2 bytes, 2 celdas)*/
	(*apuntador)++;//incremento el contenido, es decir
	//lo que hay dentro de la direccón de memoria que tiene apuntador
	//se incrementa en 1
	//ahora num tiene un 11

	getchar();
}