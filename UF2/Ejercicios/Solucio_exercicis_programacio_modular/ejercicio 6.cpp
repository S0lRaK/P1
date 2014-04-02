#include<stdio.h>
#include<ctype.h>
#define NUM 11

/*funció que fa server el toupper i obliga a l'usuari
a afegir la llibreria ctype quan vulgui utilitzar la nostra funció*/
void mayuscula(char *cadena1, char *cadena2)
{
	

	while(*cadena1!=0)
	{
		*cadena2=toupper(*cadena1);
		cadena1++;
		cadena2++;
	}
	*cadena2=0;
}

/*funció sense toupper, ens faltaria afegir els
if de ñ, ç i caràcters accentuats i amb dièresi*/
void mayuscula2(char *cadena1, char *cadena2)
{
	

	while(*cadena1!=0)
	{
		if(*cadena1>='a' && *cadena1<='z')
			*cadena2=(*cadena1)-32 ;
		cadena1++;
		cadena2++;
	}
	*cadena2=0;
}

void main()
{
	int x;
	char cadena1[NUM], cadena2[NUM];

	printf("Introduzca una cadena en letras minuscula (10 letras maximo): ");
	gets(cadena1);
	fflush(stdin);

	mayuscula2(cadena1, cadena2);
	printf("%s", cadena2);
	getchar();
}