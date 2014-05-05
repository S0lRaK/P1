void introDatos(struct dir_persona *persona)
{
	printf("\n Introduzca el nombre de la persona: ");
	gets((*persona).nombre);
	fflush(stdin);	// para eliminar el búffer en teclado
	printf("\n Introduzca sus apellidos: ");
	gets(persona->apellidos);
	fflush(stdin);
	printf("\n Introduzca su dirección (sólo nombre de la calle): ");
	gets(persona->direccion);
	fflush(stdin);
	do
	{
		printf("\n Introduzca el número de la dirección: ");
		scanf("%u", &persona->numero);
		fflush(stdin);
	}while(persona->numero < 0);
	do
	{
		printf("\n Introduzca el código postal de la dirección: ");
		scanf("%u", &persona->codigo_postal);
		fflush(stdin);
	}while(persona->codigo_postal < 00000 || persona->codigo_postal > 99999);
	printf("\n Introduzca el nombre de la ciudad correspondiente: ");
	gets(persona->ciudad);
	fflush(stdin);
}