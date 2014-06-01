#include <stdio.h>
#define NUM 3
struct notasalum{
	char nombre[25];
	float nota_lm;
	float nota_so;
	float nota_pb;
	float nota_fol;
};
#include "func.h"

void main(){
	
	struct notasalum alumno1[NUM];
	int i, numeroalu=0 ;
	float media[NUM],mediamayor=0,llm=0, prog=0;
	FILE *fp; //declaramos un apuntador a un fichero
	
	/*RECORDAR QUE EL NOMBRE DE UN ARRAY ES LA DIRECCIÓN DE 
	MEMORIA DE SU PRIMER ELEMENTO,
	ES DECIR ES LO MISMO ESCRIBIR
	ALUMNO1
	QUE &ALUMNO1[0]*/
	/*haremos que al abrir el programa si hay archivo con datos
	me mostrará los datos alamacenados y las medias...
	sino me pedirá los datos de los alumnos*/
	if((fp=fopen("alumnos.dat","rb"))!=NULL){
		fread(alumno1,sizeof(alumno1),1,fp);
		printf("\n ya tenemos los alumnos almacenados:");
		for(i=0;i<NUM;i++)
			printf("\nEl alumno %d se llama %s y su nota de lm es %f, la de so %f, la de pb %f, fol: %f", i+1, alumno1[i].nombre, alumno1[i].nota_lm, alumno1[i].nota_so, alumno1[i].nota_pb, alumno1[i].nota_fol);
		fclose(fp);
	}
	else
		leer(alumno1);
	for(i=0;i<NUM; i++){
		media[i]=(alumno1[i].nota_lm+alumno1[i].nota_so+alumno1[i].nota_pb+alumno1[i].nota_fol)/4;
		if(media[i]>mediamayor){
			mediamayor=media[i];
			}
		if(llm<alumno1[i].nota_lm)
		{
			llm=alumno1[i].nota_lm;
		}

		if(prog<alumno1[i].nota_pb)
		{
			prog=alumno1[i].nota_pb;
		}
	}
	
	for(i=0; i<NUM; i++)
	{
		if(mediamayor==media[i])
		{
			printf("Media mayor %.2f %s\n",mediamayor,alumno1[i].nombre);
		}

		if(llm==alumno1[i].nota_lm)
		{
			printf("La nota mas alta es de %s con %.2f en llm\n" , alumno1[i].nombre, llm);
		}
		if(prog==alumno1[i].nota_pb)
		{
			printf("La nota mas alta es de %s con %.2f en pb\n" , alumno1[i].nombre, prog);
		}
	}
	/*Para abrir un archivo se utiliza la función
	fp=fopen("alumnos.dat","wb");
	pero podemos tener muuuuuuuuchos errores: falta espacio en disco, no
	está conectado el dispositivo, si abro para leer que el archivo no exista....

	por eso esta instrucción la tendremos QUE PROTEGER siempre, 
	para que el programa no nos pete*/

	if( (fp=fopen("alumnos.dat","wb"))==NULL){
		printf("\nNo podemos guardar los datos del alumno en un archivo");
	}
	else{
		//guardamos los datos en el archivo
		/*para trabajar con archivos binarios el juego de
		instrucciones más utilizado es:
		fread -> leer datos del fichero y almacenarlos en memoria
		fwrite -> coger datos de memoria y escribirlos en un fichero
		*/
		fwrite(alumno1, sizeof(alumno1), 1,fp);

		/*Si en lugar de guardar toto el array en disco hubiera querido
		guardar sólo los datos de los 2 primeros alumnos:
		fwrite(alumno1, sizeof(struct notasalumn), 2, fp);*/
		//guardamos el archivo, se cierra de memoria y guarda los cambios
		fclose(fp);
	}

	
	fflush(stdin);
	getchar();

}