/*	Heu de realitzar la llibreria (el .h i el .cpp) amb les funcions per tractar un vector d�enters sense importar la seva longitud.
	Les funcions que s�han d�implementar s�n:
		[1]Una funci� per introduir dades en el vector. Li passarem el vector i les posicions que volem introduir i retornar� el vector omplert. 
		[2]Una funci� per mostrar les dades del vector per pantalla. Li passarem el vector i la posici� fins a la que volem mostrar.
		[3]Una funci� que retorni el vector ordenat de forma ascendent. Li passarem el vector i fins a quina posici� volem ordenar.
		[4]Una funci� que retorni la mitja aritm�tica dels elements del vector. Li passarem el vector i la posici� fins a la qual volem calcular la mitja.
		[5]Una funci� que retorni l�enter m�nim del vector. Li passarem el vector i la posici� fins a la qual volem calcular el m�nim.
		[6]Una funci� que retorni l�enter m�xim del vector. Li passarem el vector i la posici� fins a la qual volem calcular el m�xim.
		[7]Una funci� per copiar un vector en un altre vector. Li passarem el vector que volem copiar i el vector on volem copiar.
		[8]Una funci� per buscar un element en el vector. Li passarem el vector, fins a quina posici� volem buscar i l�element que volem buscar.
			Ens ha de retornar un boole� per dir si l�element existeix en el vector o no i la posici� dintre del vector on es troba l�element. 
	Heu de fer un programa per poder provar totes les funcions programades en la llibreria. 
*/

#include <stdio.h>
//#include <stdlib.h> // Mem�ria din�mica
#include "Vector.h"	// Llibreria personalitzada

#define MAX 5

void main()
{
	int vector[MAX];
	printf("\n El vector te %d posicions.", MAX);

	menu(vector);
	
}
