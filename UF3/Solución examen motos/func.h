
/*********************************MENU********************************************************/
int menu(){
	int opcion;
	do{
		printf("###### GESTION DE MOTOS ######\n");
		printf("MENU\n");
		printf("	1. Alta de moto\n	2. Modificar datos\n	3. Salir del programa\nIntroduce una opcion: ");
		scanf("%d",&opcion);
		fflush(stdin);
		if(opcion<1 || opcion>3){
			printf("\nError: Opcion no valida\n\n");
		}
	}while(opcion<1 || opcion>3);
	return opcion;
}
/**********************************CELDA_LIBRE******************************/
int celda_libre(struct motos moto[]){
	int i=0;
	while(moto[i].precio!=0 && i<MAX)
		i++;
	// en el caso que no haya ninguna celda libre, devolvemos -1
	if(i==MAX)
		return -1;
	else
		return i;
	
}
/*******************************ALTA_MOTO*********************************/
void alta_moto(struct motos *moto){
	
	printf("Marca de la moto: ");
	gets(moto->marca);
	printf("Modelo: ");
	gets(moto->modelo);
	do{
		printf("Cilindrada: ");
		scanf("%d",&moto->cilindrada);
		if(moto->cilindrada<49 || moto->cilindrada>1200){
			printf("\nError: la cilindrada debe estar entre 49 y 1200\n\n");
		}
	}while(moto->cilindrada<49 || moto->cilindrada>1200);
	do{
		printf("Precio: ");
		scanf("%f",&moto->precio);
		if(moto->precio<400 ||moto->precio>70000){
			printf("\nError: el precio debe ser mayor de 400 €\n\n");
		}
	}while(moto->precio<400 || moto->precio>70000);
}
/***************************************MODIFICAR**********************************/
bool modificar(struct motos *moto, char *mar, char *mod, int cilin, float *preu){
	int i=0;
	while((strcmp(moto->marca,mar)!=0 || strcmp(moto->modelo,mod)!=0 || moto->cilindrada!=cilin)  && i<MAX){
		i++;
		moto++;
	}
	if(i<MAX){ //se ha salido del bucle porqué se ha encontrado la moto
		do{
			printf("\nIntroduce el nuevo precio: ");
			scanf("%f",&moto->precio);
			if(moto->precio<400 ||moto->precio>70000){
				printf("\nError: el precio debe ser mayor de 400 €\n\n");
			}
		}while(moto->precio<400 || moto->precio>70000);
		*preu=moto->precio;
		return true;
	}
	else
		return false;
}
/***************************************CARGAR*************************************************/
void cargar(struct motos *moto){
	FILE *mo;
	if((mo=fopen("motos.dat","rb"))!=NULL){
		fread(moto,sizeof(struct motos),MAX,mo);
		fclose(mo);
	}
}
/**************************GUARDAR****************************************/
void guardar(struct motos *moto){
	FILE *mo;
	if((mo=fopen("motos.dat","wb"))!=NULL){
		fwrite(moto,sizeof(struct motos),MAX,mo);
		fclose(mo);
	}
}
