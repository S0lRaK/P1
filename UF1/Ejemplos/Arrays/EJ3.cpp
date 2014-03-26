#define NUM 20
#include <stdio.h>

void main(){
	int num1[NUM];
	int inv[NUM];
	int tot[NUM];
	int i, j, p;

	printf("Introduzca los numeros del primer vector: \n");
	for(i=0;i<NUM;i++){
			printf("\nNum %d: ", i+1);
			scanf("%d", &num1[i]);
}
	printf("\n\nIntroduzca los numeros del segundo vector vector: \n");
	for(i=0;i<NUM;i++){
			printf("\nNum %d: ", i+1);
			scanf("%d", &inv[i]);
}
	printf("\n\nMULTIPLICACIONS");
	printf("\n -----------------");
	for(i=0, j=NUM-1;i<NUM;i++, j--){
		tot[i]=inv[j]*num1[i];
		printf("\n resultat %d :: %d * %d = %d ", i+1, num1[i], inv[j], tot[i]);
	}


	fflush(stdin);
	getchar();
}