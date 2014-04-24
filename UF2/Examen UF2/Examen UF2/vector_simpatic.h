void omplirVector(float *vector, int pos)
{
	for(int i = 0; i < pos; i++)
	{
		printf("\n Introdueix el valor per la posició %d del vector: ", i);
		fflush(stdin);
		scanf("%f", &vector[i]);
	}
}

bool comprobar2(float *vector, int n_pos, int min_pos)
{
	int i;
	for(i = 0; i < n_pos; i++);
	if(i > (min_pos-1))
		return true;
	else
		return false;
}

bool diferenciar(float *vector, int n_pos)
{
	int i = 0;
	float aux = vector[i];
	
	for(i = 1; i < n_pos; i++)
	{
		if(aux == vector[i])
			return false;
	}
	return true;
}

bool max1(float *vector, int n_pos, float *max)
{
	int i = 0;
	float aux = vector[i];
	
	for(i = 1; i < n_pos; i++)
	{
		if(vector[i] > aux)
		{
			aux = vector[i];
			if(i == (n_pos - 1))
			{
				*max = aux;
				return false;
			}
		}
	}
	*max = aux;
	return true;
}