#include <stdio.h>
void intercambio(int *ap1, int *ap2){
	int aux;
	aux= *ap2;
	*ap2=*ap1;
	*ap1=aux;
}

void main(){
	int num1=2, num2=5, num3=20, num4=66;

	printf("Inicialmente las variables tienen el valor %d %d %d %d", num1, num2, num3, num4);
	intercambio(&num1, &num2);
	printf("\nDespués de llamar a la función pasándole num1 y num2 tengo en las variables %d %d %d %d", num1, num2, num3, num4);
	intercambio(&num3, &num4);
	printf("\nDespués de llamar a la función pasándole num3 y num4 tengo en las variables %d %d %d %d", num1, num2, num3, num4);
	fflush(stdin);
	getchar();
}