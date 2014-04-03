/*	Heu de realitzar la llibreria (el .h i el .cpp) amb les funcions per tractar un vector d’enters sense importar la seva longitud.
	Les funcions que s’han d’implementar són:
		[1]Una funció per introduir dades en el vector. Li passarem el vector i les posicions que volem introduir i retornarà el vector omplert. 
		[2]Una funció per mostrar les dades del vector per pantalla. Li passarem el vector i la posició fins a la que volem mostrar.
		[3]Una funció que retorni el vector ordenat de forma ascendent. Li passarem el vector i fins a quina posició volem ordenar.
		[4]Una funció que retorni la mitja aritmètica dels elements del vector. Li passarem el vector i la posició fins a la qual volem calcular la mitja.
		[5]Una funció que retorni l’enter mínim del vector. Li passarem el vector i la posició fins a la qual volem calcular el mínim.
		[6]Una funció que retorni l’enter màxim del vector. Li passarem el vector i la posició fins a la qual volem calcular el màxim.
		[7]Una funció per copiar un vector en un altre vector. Li passarem el vector que volem copiar i el vector on volem copiar.
		[8]Una funció per buscar un element en el vector. Li passarem el vector, fins a quina posició volem buscar i l’element que volem buscar.
			Ens ha de retornar un booleà per dir si l’element existeix en el vector o no i la posició dintre del vector on es troba l’element. 
	Heu de fer un programa per poder provar totes les funcions programades en la llibreria. 
*/

#include <stdio.h>
//#include <stdlib.h> // Memòria dinàmica
#include "Vector.h"	// Llibreria personalitzada

#define MAX 5

void main()
{
	int vector[MAX];
	printf("\n El vector te %d posicions.", MAX);

	menu(vector);
	
}
