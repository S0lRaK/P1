#include <stdio.h>
#define NUM 15

void main (){
int serie[NUM], num, inv, aux;

	for(num=0; num<NUM; num++){
		printf ("introduzca el numero %d: " , num+1);
		scanf ("%d", &serie[num]);
		}
	for (num=0, inv=NUM-1;num<NUM/2; inv--, num++){
		aux=serie[num];
		serie[num]=serie[inv];
		serie[inv]=aux;
	}

	for(inv=0; inv<NUM;	inv++){
		printf ("\n%d", serie[inv]);

	}
fflush (stdin);
getchar();

}