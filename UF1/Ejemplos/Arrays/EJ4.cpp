#include <stdio.h>

void main(){
	
	int num[7], num2[5], i, j, aux, k, numtotal[12], f;
	int numi, numi2;
	printf("ONE\n");
	for(i=0; i<7; i++){
		printf("Introduce los numeros de la primera linea\n");
		scanf("%d", &num[i]);
	}

	for(i=0; i<7-1; i++){
		for(j=0; j<7-i-1;j++){
			if(num[j]>num[j+1]){
			aux=num[j];
			num[j]=num[j+1];
			num[j+1]=aux;
			}
		}
	}
	for(i=0; i<7; i++){
		printf("%d ", num[i]);
	}

	printf("\nTWO\n");

	for(i=0; i<5; i++){
		printf("Introduce los numeros de la segunda linea\n");
		scanf("%d", &num2[i]);
	}

	for(i=0; i<5-1; i++){
		for(j=0; j<5-i-1;j++){
			if(num2[j]>num2[j+1]){
			aux=num2[j];
			num2[j]=num2[j+1];
			num2[j+1]=aux;
			}
		}
	}
	for(i=0; i<5; i++){
		printf("%d ", num2[i]);
	}

	

	for(k=0, numi=0, numi2=0; k<12; k++){
		if(numi2>=5 || (numi<7 && num[numi]<num2[numi2])){
			numtotal[k]=num[numi];
			numi++;
		}
		else {
			numtotal[k]=num2[numi2];
			numi2++;
		}
	/*for(k=0, numi=0, numi2=0; k<12; k++){
		if(numi2>=5){
			numtotal[k]=num[numi];
			numi++;
		}
		else if(numi>=7) {
			numtotal[k]=num2[numi2];
			numi2++;
		}	
	else if(num[numi]<num2[numi2]){
			numtotal[k]=num[numi];
			numi++;
		}
		else{
			numtotal[k]=num2[numi2];
			numi2++;
		}
		}*/
	}
	printf("\n");
	for(f=0; f<12; f++){
		printf("\n%d", numtotal[f]);
	}



	fflush(stdin);
	getchar();
}