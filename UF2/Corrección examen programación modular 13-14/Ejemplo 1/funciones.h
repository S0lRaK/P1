void intro_datos ( float *vec, int pos ){
	int i;
	for(i=0;i<pos;i++,vec++){
		printf("\nIntroduce la posicion del vector num. %d: ", i+1);
		scanf("%f", vec);
	}
}


bool elem_2 ( float *vec, int pos ){
	if (pos>=2)
		return true;
	else
		return false;
	
}

//comprobar que todos los elementos son diferentes

bool diferents ( float *vec, int pos ){
	int i, j;
	for (i=0;i<pos;i++){
		for (j=0;j<pos;j++){
			if(i!=j){
				if( *(vec+i)==*(vec+j) ){
				return false;
				}
			}
		}
	}
	return true;
}


bool maximo( float *vec, int pos, float *max){
	int i, temp=0;
	//le damos a máximo el valor del primer elemento del vector y pasamos al siguiente porqué éste ya no hace falta compararlo
	*max=*vec;
	vec++;

	//en el for empiezo por 1 porqué he de hacer un recorrido menos al haber cogido el primer elemento como max
	for(i=1;i<pos;i++,vec++){
		if(*max<*vec){
			*max=*vec;
			temp=i;
		}
	}
	if(temp==0){
		return false;
	}else{
		return true;
	}
}
