#include <stdio.h>
#include <string.h>
#define MAX 20
struct motos{
	char marca[15];
	char modelo[10];
	int cilindrada;
	float precio;
};
#include "func.h"

void main(){
	struct motos moto[MAX];
	int i, opcion_menu, cilin, pos;
	float precio;
	char mar[15], mod[10];

	// inicializamos a 0 los precios de todas las motos, esta es la señal que me hago para saber qué posiciones del array no tienen datos
	for(i=0;i<MAX;i++){
		moto[i].precio=0;
	}
		
	cargar(moto);
	//llamamos a cargar para que aparezcan los datos de la ultima vez que utilizamos el programa

	do{
		opcion_menu=menu();
		switch(opcion_menu){
		case 1:
			printf("\nALTA DE MOTO\n");
			pos=celda_libre(moto);
			if(pos!=-1){
				alta_moto(&moto[pos]);
				printf("Moto dada de alta.\n");
			}else{
				printf("No podemos anyadir ninguna moto porque no tenemos espacio para más.\n");
			}
			printf("\n");
			break;

		case 2:
			printf("\nMODIFICAR DATOS\n");
			printf("Marca de la moto: ");
			gets(mar);
			printf("Modelo: ");
			gets(mod);
			do{
				printf("Cilindrada: ");
				scanf("%d",&cilin);
				if(cilin<49 || cilin>1200){
					printf("\nError: la cilindrada debe estar entre 50 y 1200\n\n");
				}
			}while(cilin<49 || cilin>1200);
			if(modificar(moto,mar,mod,cilin,&precio)==true){
				printf("\nPrecio de la moto actualizado a %.2f.\n", precio);
				printf("");
			}else{
				printf("\nMoto inexistente.\n");
			}
			printf("\n");
			break;

		case 3:
			printf("\n\n###### FINAL DE PROGRAMA ######");
			printf("\n");
			guardar(moto);
			break;
		}
	}while(opcion_menu!=3);
	fflush(stdin);
	getchar();
}