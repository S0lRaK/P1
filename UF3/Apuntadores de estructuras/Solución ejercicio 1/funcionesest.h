void leer(struct datos *dat){
	printf("\nIntroduzca su nombre: ");
	gets(dat->nombre);

	printf("\nIntroduzca su apellido: ");
	gets(dat->apellidos);

	printf("\nIntroduzca su direccion: ");
	gets(dat->direccion);

	do{
		printf("\nIntroduzca su numero de vivienda: ");
		scanf("%d", &dat->numero);
	}while(dat->numero<0);

	fflush(stdin);


	printf("\nIntroduzca su numero postal: ");
	gets(dat->codigo);
	
	fflush(stdin);

	printf("\nIntroduzca su ciudad: ");
	gets(dat->ciudad);
}