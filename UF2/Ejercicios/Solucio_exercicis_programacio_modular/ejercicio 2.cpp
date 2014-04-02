#include <stdio.h>


bool hemoglobina (float anyos, char sexoo, float hemoglo,float *min, float *max){

	if (anyos <= 1) {
		*min=11;
		*max=15;
		if((hemoglo<11 || hemoglo>15))
			return true;
	}

	else if (anyos>1 && anyos<=15){
		*min=11.5;
		*max=15.5;
		if((hemoglo<11.5 || hemoglo>15.5))
			return true;
	}
	else if (anyos>15 && sexoo=='m'){
		*min=12;
		*max=16;
		if( hemoglo<12 || hemoglo>16)
			return true;
	}
	else if (anyos>15 && sexoo=='h') {
		*min=14;
		*max=18;
		if (hemoglo<14 || hemoglo>18)
			return true;
	}

	return false;
	

}


void main (){
	float edad,minimo,maximo; 
	char sexo;
	float hemo;

	printf("Bienvenido al programa que dice si tienes o no anemia");

	do{
		printf("\n Introduzca la edad: ");
		fflush(stdin);
		scanf("%f", &edad);
	}while(edad<0 || edad>130);

	
	do{
		printf("\n Introduzca h/m: ");
		fflush(stdin);
		scanf("%c", &sexo);
	}while(sexo!='h' && sexo!='m');

	do{
		printf("\n Introduzca el nivel de hemoglobina: ");
		fflush(stdin);
		scanf("%f", &hemo);
	}while(hemo<0 || hemo>20);

	if (hemoglobina(edad,sexo,hemo,&minimo,&maximo)==true){
		printf("\n Usted tiene anemia");
	}
	else{
		printf("\n Usted no tiene anemia");
	}
	printf("\n Su nivel minimo es %.2f y su nivel maximo es %.2f",minimo,maximo);



	

	fflush(stdin);
	getchar();



}
