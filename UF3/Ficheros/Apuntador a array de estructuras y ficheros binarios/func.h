void leer(struct notasalum *notas)
{
	int i;
	for(i=0;i<NUM;i++){
		printf("\nIntroduce el nombre del alumno %d: ",i+1);
		gets(notas->nombre);
		fflush(stdin);

		do{
			printf("\nIntroduce la nota de Lenguaje de Marcas del alumno %d: ",i+1);
			scanf("%f",&notas->nota_lm);
			fflush(stdin);
				if(notas->nota_lm<0 || notas->nota_lm>10)
				{
					printf("La nota no puede ser negativa");
				}
		}while(notas->nota_lm<0 || notas->nota_lm>10);
		
		do{
			printf("\nIntroduce la nota de Sistemas Operativos del alumno %d: ",i+1);
			scanf("%f",&notas->nota_so);
			fflush(stdin);
				if(notas->nota_so<0 || notas->nota_so>10)
				{
					printf("La nota no puede ser negativa");
				}
		}while(notas->nota_so<0 || notas->nota_so>10);
	

		do{
			printf("\nIntroduce la nota de Programacion Basica del alumno %d: ",i+1);
			scanf("%f",&notas->nota_pb);
			fflush(stdin);
				if(notas->nota_pb<0 || notas->nota_pb>10)
				{
					printf("La nota no puede ser negativa");
				}	
		}while(notas->nota_pb<0 || notas->nota_pb>10);
		

		do{
			printf("\nIntroduce la nota de FOL del alumno %d: ",i+1);
			scanf("%f",&notas->nota_fol);
			fflush(stdin);
				if(notas->nota_fol<0 || notas->nota_fol>10)
				{
					printf("La nota no puede ser negativa");
				}
		}while(notas->nota_fol<0 || notas->nota_fol>10);
	notas++;
	}
}