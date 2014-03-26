#include <stdio.h>
#include <stdlib.h>
#define MAX 15




void main()
{
	int num[MAX], i, num2[MAX], x;

	printf("\n\n\tARRAYS: Orden Inverso");
	printf("\n\t------------------------");
	printf("\n\t------------------------");

	for(i=0, x=MAX-1; i<MAX; i++, x--)
	{
		printf("\n\n\tCelda %d: ", i);
		scanf("%d", &num[i]);
		num2[x]=num[i];

	}

	system("cls");
	for(x=0;x<MAX;x++)
	{
		printf("%d ", num2[x]);
	}

	fflush(stdin);
	getchar();
}