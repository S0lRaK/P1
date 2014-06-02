#include <stdio.h>
#include "funciones.h"
#define POS 5
//Si quisieramos cambiar el num de posiciones del vector cambiariamos el DEFINE

void main(){
	float vec[POS],max=0;
	int i;

	printf("######### EXAMEN #########\n\n");
	printf("Rellenamos el vector: ");
	//Llamamos a intro_datos (funcion para introducir floats en el vector)
	intro_datos( vec, POS );
	printf("\nHecho.\n");
	
	printf("\nNuestro vector sera: \n");
	for(i=0;i<POS;i++){
		printf(" %.2f ", vec[i]);
	}
	printf("\n");
	//Ahora hacemos las comprobaciones 
	//Tenemos que comprobar que se cumplen las tres condiciones a la vez para que sea simpatico
	
	// Comprobacion de que tiene 2 o más elementos
	if((elem_2( vec, POS )==true)){
		printf("\nTe 2 o mes elements.");

		// Comprobacion de que no se repiten elementos
		if((diferents( vec, POS )==true)){
			printf("\nNo es repeteixen elements.");

				// Comprobacion de donde esta el numero mas grande.
				if ( maximo( vec, POS, &max )== false ){
					printf("\nEl valor maxim %.2f es troba a la primera posicio.", max);
					printf("\n\nNo es un vector simpatic.");
				}else{
					printf("\nEl valor maxim %.2f no es troba a la primera posicio.\n",max);
					printf("\n\nEs un vector simpatic.");
				}
		}else{
			printf("\nNo es un vector simpatic perque es repeteixen elements.");
		}
	}else{
		printf("No es un vector simpatic, perque li falten elements.");
	}
	fflush(stdin);
	getchar();
}





	/*Mostrar vector

	for(i=0;i<pos;i++){
		printf(" %.2f ", vec[i]);
	}


	
	if((elem_2( vec, POS )==true)){
		printf("\nTe 2 o mes elements.");
	}else{
		printf("No es un vector simpatic, perque li falten elements.");
	}

	// Comprobacion de que no se repiten elementos
	if((diferents( vec, POS )==true)){
		printf("\nNo es repeteixen elements.");
	}else{
		printf("\nNo es un vector simpatic perque es repeteixen elements.");
	}


	// Comprobacion de donde esta el numero mas grande.
	if ( maximo( vec, POS, &max )== true ){
		printf("\nEl valor maxim %.2f es troba a la primera posicio.", max);
	}else{
		printf("\nEl valor maxim %.2f no es troba a la primera posicio.",max);
	}


	*/
