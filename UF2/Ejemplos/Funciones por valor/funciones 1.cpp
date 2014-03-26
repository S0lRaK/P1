#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*la funci�n es VOID porque no devuelve nada
si devolviera un entero ser�a INT, si devolviera un real ser�a FLOAT...
Si no se especifica nada el C supone que la funci�n devuelve un INT
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
	/*las variables declaradas dentro de una funci�n
	son locales a la funci�n, s�lo las reconoce �sta*/

	char cadena[20], cadena2[20];
	
	printf("Introduzca una cadena: ");
	gets(cadena);

	mayus(cadena);	//llamo a mi funci�n pas�ndole la cadena

	printf("\n Introduzca otra cadena: ");
	gets(cadena2);

	mayus(cadena2);	//llamo a la funci�n pas�ndole la cadena2
		
	fflush(stdin);
}
