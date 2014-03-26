#define NUM 30

#include <stdio.h>

void main(){

	int nota;
	int c=0;
	int vector[11]={0};//RELLENA TODO EL VECTOR DE 0
	/*en otros compiladores
	int vector[11]={0,0,0,0,0,0,0,0,0,0,0};
	int vector(11,0);
	...
	*/
	
   /* for(c=0; c<=10; c++)
	{
		vector[c]=0;
	}*/
	c=0;
	do{
	  printf("\n Introdueix un numero. Intents %d: ", c+1);
	  scanf("%d", &nota);
	  if(nota>=0 && nota<=10)
	   vector[nota]++;
	  c++;
	}while(c<NUM && nota>=0 && nota<=10);

	for(c=0; c<=10; c++){
		if(vector[c]>0){
			printf("\n Es mostraran les notes: ");
			printf("Nota: %d  Repeticio: %d", c, vector[c]);
		}
	}

fflush(stdin);
getchar();

}