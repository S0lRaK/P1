// Muestra el menu
int menu(){
	int opcion;
	do{
		printf("\n----- Pisos en venta -----\n");
		printf("\n 1) Dar de alta un nuevo piso.");
		printf("\n 2) Eliminar los datos de un piso.");
		printf("\n 3) Salir.");
		printf("\n\n Selecciona una opcion: ");
		fflush(stdin);
		scanf("%d", &opcion);
		if(opcion < 1 || opcion > 3){
			printf("\n ERROR: Opcion incorrecta\n\n");
		}
	}while(opcion < 1 || opcion > 3);
	return opcion;
}

// Nuevas altas de pisos o modificaciones de existentes
void altaPiso(struct pisos *piso){
	int codigo;
	char respuesta;
	do{
		printf("\n Introduce el codigo del piso (1-%d): ", MAX-1);
		fflush(stdin);
		scanf("%d", &codigo);
	}while(codigo < 1 || codigo > MAX-1);
	// Se apunta a la posicion escogida con el puntero
	piso = piso+codigo;
	// Si la posicion no ha sido rellenada anteriormente se piden los datos
	if(piso->precio == 0){
		printf("\n Piso inexistente. Se pediran los nuevos datos.\n");
		printf("\n Direccion: ");
		fflush(stdin);
		gets(piso->direccion);
		do{
			printf("\n Superficie: ");
			fflush(stdin);
			scanf("%d", &piso->superficie);
			if(piso->superficie < 1)
				printf("\n ERROR: la superficie del piso no puede ser un valor negativo!");
		}while(piso->superficie < 1);
		do{
			printf("\n Precio: ");
			fflush(stdin);
			scanf("%f", &piso->precio);
			if(piso->precio < 0)
				printf("\nERROR: el precio del piso no puede ser un valor negativo!");
		}while(piso->precio < 0);
		printf("\n Piso dado de alta.\n");
	}
	// Si la posicion ya ha sido rellenada, por lo que ya hay un piso introducido...
	else{
		// Se muestran sus datos
		printf("\n Piso existente. Sus datos: ");
		printf("\n Direccion: %s", piso->direccion);
		printf("\n Superficie: %d", piso->superficie);
		printf("\n Precio: %.2f", piso->precio);
		printf("\n\n Deseas modificar los datos? (SI = s / NO = n): ");
		fflush(stdin);
		scanf("%c", &respuesta);
		printf("\n");
		// Si se decide modificarlos se piden los datos
		if(respuesta == 's'){
			printf("\n Introduccion de nuevos datos:");
			printf("\n Direccion: ");
			fflush(stdin);
			gets(piso->direccion);
			do{
				printf("\n Superficie: ");
				fflush(stdin);
				scanf("%d", &piso->superficie);
				if(piso->superficie < 1)
					printf("\n ERROR: la superficie del piso no puede ser un valor negativo!");
			}while(piso->superficie < 1);
			do{
				printf("\n Precio: ");
				fflush(stdin);
				scanf("%f", &piso->precio);
				if(piso->precio < 0)
					printf("\nERROR: el precio del piso no puede ser un valor negativo!");
			}while(piso->precio < 0);
			printf("\n Piso modificado.");
		}
		// Si se decide dejarlos como estaban
		else
			printf("\n Datos NO modificados.\n");
	}
}

// Eliminacion de pisos introducidos
void eliminaPiso(struct pisos *piso){
	int codigo;
	char respuesta;
	do{
		printf("\n Introduce el codigo del piso (1-%d): ", MAX-1);
		fflush(stdin);
		scanf("%d", &codigo);
	}while(codigo < 1 || codigo > MAX-1);
	// Se apunta a la posicion escogida con el puntero
	piso = piso+codigo;
	// Si la posicion no ha sido rellenada anteriormente...
	if(piso->precio == 0)
		printf("\n Piso inexistente");
	// Si la posicion tiene un piso introducido anteriormente...
	else{
		// Se muestran sus datos
		printf("\n Piso existente. Sus datos: ");
		printf("\n Direccion: %s", piso->direccion);
		printf("\n Superficie: %d", piso->superficie);
		printf("\n Precio: %.2f", piso->precio);
		printf("\n\n Deseas realmente eliminar los datos? (SI = s / NO = n): \n");
		fflush(stdin);
		scanf("%c", &respuesta);
		printf("\n");
		// Si se decide eliminarlos...
		if(respuesta == 's'){
			// Se reinicia la marca
			piso->precio = 0;
			printf("\n Datos eliminados.\n");
		}
		// Si se decide dejarlos como estaban
		else
			printf("\n Datos NO eliminados.\n");
	}
}

// Carga los datos previos de un archivo binario
void cargar(struct pisos *piso){
	FILE *pi;
	if((pi = fopen("pisos.dat", "rb")) != NULL){
		fread(piso, sizeof(struct pisos), MAX, pi);
		fclose(pi);
		printf("\n Archivo cargado correctamente.\n");
	}else
		printf("\n El archivo de carga no ha podido ser abierto.\n");
}

// Guarda los datos en un archivo binario
void guardar(struct pisos *piso){
	FILE *pi;
	if((pi = fopen("pisos.dat", "wb")) != NULL){
		fwrite(piso, sizeof(struct pisos), MAX, pi);
		fclose(pi);
		printf("\n Archivo guardado correctamente.\n");
	}else
		printf("\n El archivo de guardado no ha podido ser abierto.\n");
}