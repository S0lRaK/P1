//libreria.h

void introduir_vector (float *vec, int size) {
	for(int i = 0; i < size; i++) {
		scanf("%f", vec+i);
	}
}


bool minim_dos (float *vec, int size) {
	if (size >= 2) return true;
	else return false;
}

bool diferents (float *vec, int size) {
	bool final = true;
	for(int i = 0; i < size; i++) {
		for(int j = i; j < size; j++) {
			if( *(vec+i) == *(vec+j) && i != j ) final = false;
		}
	}
	return final;
}


bool maxim_no_primera2 (float *vec, int size, float *maxim) {
	int pos = 0;
	*maxim = *vec;
	for(int i = 1; i < size; i++) {
		if( *maxim < *(vec+i) ) {
			*maxim = *(vec+i);
			pos = i;
		}
	}
	if(pos == 0) return true;
	else return false;
}
