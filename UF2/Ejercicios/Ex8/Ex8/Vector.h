#include <stdio.h>

int introDades (int *vector)
{
	int i, pos;
	printf("\n De quantes posicions vols el vector?: ");
	scanf("%d", pos);
	for(i = 0; i < pos; i++)
	{
		printf("\n Introdueix un valor enter per a la posicio %d: ", i+1);
		scanf("%d", vector);
	}
	return *vector;
}

void mostrar (int *vector, int *pos)
{
	printf("\n El vector te %d posicions.", pos);
	printf("\n Fins a quina posicio vols mostrar?: ");
	scanf("%d", pos);
	int i;
	for (i = 0; i < *pos; i++)
	{
		printf("%d, ", *vector);
	}
}

int ordAsc (int *vector)
{

}