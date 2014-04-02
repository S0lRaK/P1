#include <stdio.h>
#include "fac.h"

void main(){
	int num;

	printf("Introduzca el número para calcular su factorial: ");
	scanf("%d", &num);
	printf("\nEl factorial de %d es %d", num, factorial(num));
	fflush(stdin);
	getchar();
}