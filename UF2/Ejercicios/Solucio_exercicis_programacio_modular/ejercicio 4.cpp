/*
Realitzar un programa que introdueixi números enters en un primer vector de 7 posicions, números 
enters en un segon vector de 5 posicions, ordeni els dos vectors i el barregi ordenament en un tercer 
vector. S’han de fer les següents funcions: 
Funció per introduir dades en un vector donats el vector i el seu nombre de posicions. 
Funció per ordenar un vector donats el vector i el seu nombre de posicions. 
Funció per mostrar un vector donats el vector i el seu nombre de posicions. 
*/
#include <stdio.h>

void intro (int *vector, int num)
{
	int i;
	for(i=0;i<num;i++,vector++)
	{
		printf("Introduce un valor para la posicion %d: ", i+1);
		scanf("%d", vector);
	}
}

void ordena (int *vector, int num)
{
	int i, j, temp;
	for (i=0; i<num-1; i++){
		for (j=0 ; j<num-1-i; j++, vector++)
		{
			if (*vector > *(vector+1))
			{
				temp = *vector;
				*vector = *(vector+1);
				*(vector+1) = temp;
			}
		}
		vector=vector-j;
	}
}

void muestra (int *vector, int num)
{
	int i;
	for (i=0;i<num;i++,vector++)
	{
		printf("%d, ", *vector);
	}
	printf("\n\n\n");

}

void main()
{
	int i, j, vector1[7], vector2[5], vector3[12], k, numi, numi2;


	printf(" ##### EJERCICIO 4 ##### \n");
	printf("Introduce los datos del primer vector. \n");
	intro(vector1, 7);
	printf("Introduce los datos del segundo vector. \n");
	intro(vector2, 5);
	

	ordena(vector1, 7);
	ordena(vector2, 5);
	
	for(k=0, numi=0, numi2=0; k<12; k++)
	{
		if(numi2>=5 || (numi<7 && vector1[numi]<vector2[numi2]))
		{
			vector3[k]=vector1[numi];
			numi++;
		}
		else
		{
			vector3[k]=vector2[numi2];
			numi2++;
		}
	}
	muestra(vector1, 7);
	muestra(vector2, 5);
	muestra(vector3, 12);

	fflush(stdin);
	getchar();
}