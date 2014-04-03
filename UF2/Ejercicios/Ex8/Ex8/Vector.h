#include <stdio.h>

void menu(*vector)
{
	int op;

	do
	{
		printf("\n [1] Introduir les dades del vector");
		printf("\n [2] Mostrar el vector");
		printf("\n [3] Ordenar el vector de forma ascendent");
		printf("\n [4] Mostrar la mitja aritmetica dels elements del vector");
		printf("\n [5] Mostrar l'enter minim del vector");
		printf("\n [6] Mostrar l'enter maxim del vector");
		printf("\n [7] Copiar el vector en un altre");
		printf("\n [8] Buscar un element en el vector");
		printf("\n\n");
		scanf("%d", &op);

		switch(op)
		{
		case 1: introDades(vector);
			break;
		case 2: mostrar(vector);
			break;
		case 3: 
		case 4: 
		case 5: 
		case 6: 
		case 7: 
		case 8: 
		}
	}while (op !=9)
}

int introDades (int *vector)
{
	int i;
	for(i = 0; i < MAX; i++)
	{
		printf("\n Introdueix un valor enter per a la posicio %d: ", i+1);
		scanf("%d", vector);
	}
	return *vector;
}

void mostrar (int *vector, int pos)
{
	printf("\n El vector te %d posicions.", pos);
	printf("\n Fins a quina posicio vols mostrar?: ");
	scanf("%d", pos);
	int i;
	for (i = 0; i < pos; i++)
	{
		printf("%d, ", *vector);
	}
}

int ordAsc (int *vector)
{

}