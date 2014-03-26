#include <stdio.h>
/*Función a la que pasándole la base y el exponente ésta nos muestra el resultado

void exponente(int base, int expo)
{
	int  resultado = 1;

	for(; expo > 0; expo--)
		resultado *= base; // resultado = resultado * base

	printf("\n El resultado es %d", resultado);
}
*/
int exponente(int base, int expo);
void main(){
	int b, e;
	printf("\nIntroduzca la base:");
	scanf("%d", &b);
	printf("\nIntroduzca el exponente:");
	scanf("%d", &e);

	printf("\n%d",exponente(b, e));

	fflush(stdin);
	getchar();
}

/*Función a la que pasándole la base y el exponente
ésta nos devuelva el resultado*/

/*El c hace la llamada POR VALOR con las variables
simples, es decir: base y exponente son variables
nuevas que recogen el valor que enviamos de b y e.
EL VALOR no la variable.
Los cambios que haga dentro de la función con 
estas variables no afectan al resto del programa*/
int exponente(int base, int expo){
	int  resultado=1;

	if(expo<0){
		printf("El exponente no puede ser negativo");
		return -1;
	}
	for(; expo>0; expo--)
		resultado *= base;//resultado= resultado * base

	return resultado;
}