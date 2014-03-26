#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*la función es VOID porque no devuelve nada
si devolviera un entero sería INT, si devolviera un real sería FLOAT...
Si no se especifica nada el C supone que la función devuelve un INT
*/
void mayus(char c[20])
{
	int i;
	for(i = 0; i < strlen(c); i++)
	{
		c[i] = toupper(c[i]);
	}
	printf(c);
}

void main()
{
	/*las variables declaradas dentro de una función
	son locales a la función, sólo las reconoce ésta*/

	char cadena[20], cadena2[20];
	
	printf("Introduzca una cadena: ");
	gets(cadena);

	mayus(cadena);	//llamo a mi función pasándole la cadena

	printf("\n Introduzca otra cadena: ");
	gets(cadena2);

	mayus(cadena2);	//llamo a la función pasándole la cadena2
		
	fflush(stdin);
}
