#include <stdio.h>
 
int factorial(int n){
	
	int resultado=1;

		for(; n>1; n--){
			
			resultado=n*resultado;
		
		}
		
	return resultado;
}

float exponente (int a, int n){
	
	int i, resultado=1;

	     for(i=0; i<n; i++){
	
		 resultado=resultado*a;

		 }
		return resultado;
}

void main(){

	int n, a, i;
	float result=0;

	printf("\nViva las mates\n");
	do{
		printf("\nIntroduzca el valor de la aproximación\n");
		scanf("%d", &n);
	}while(n<0);

	printf("\nIntroduzca el exponente de e\n");
	scanf("%d", &a);

	for(i=0; i<=n; i++){
	
	result= result + (exponente(a, i)/factorial(i));

	}

	printf("\nEl resultado, e = %f", result);

fflush(stdin);
getchar();
}