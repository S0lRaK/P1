void omplirVector(float *vector, int pos)
{
	for(int i = 0; i < pos; i++)
	{
		printf("\n Introdueix el valor per la posici� %d del vector: ", i+1);
		fflush(stdin);
		// en ser un apuntador, accedim com a una variable i guardem el valor a la posici� relativa a l'iterador
		scanf("%f", vector+i);	
		if(i == pos-1)
			printf("\n ----- Vector omplert -----\n");
	}
}

bool minElements(float *vector, int n_pos, int min_pos)	// per a qu� li passem l'apuntador a vector??
{
	if(n_pos >= (min_pos-1))
		return true;
	else
		return false;
}

// Comprova que tots els elements del vector s�n diferents
bool diferenciarElements(float *vector, int n_pos)
{
	// compara cada element amb tots els altres (FORx2)
	for(int i = 0; i < n_pos; i++)
	{
		for(int j = 0; j < n_pos; j++)
		{
			// salta la comparaci� del primer element amb s� mateix
			if(i != j && *(vector+i) == *(vector+j))
				return false;
		}
	}
	return true;
}

// 
bool max1Element(float *vector, int n_pos, float *max)
{
	int aux = 0;
	// estableix el primer element del vector com el m�s gran d'inici
	*max = *vector;
	// comen�a per la 2� posici� del vector al haber igualat MAX al 1r
	for(int i = 1; i < n_pos; i++)
	{
		// si la seg�ent posici� amb la que es compara l'anterior es m�s gran que aquesta...
		if(*max < *(vector+i))
		{
			// ...l'estableix com a la m�xima del vector
			*max = *(vector+i);
			aux = i;
		}
	}
	// si l'auxiliar no ha canviat, vol dir que la 1� posici� del vector �s el seu element m�s gran
	if(aux == 0)
		return true;
	else
		return false;
}