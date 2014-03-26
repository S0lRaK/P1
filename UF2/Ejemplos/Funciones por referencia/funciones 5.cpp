/*vamos a imaginar que no existe la funci�n strlen. 
As� que vamos a crear una funci�n que devuelve el n�mero de 
caracteres de la cadena que se env�a*/
#include <stdio.h>
/*como al enviar una array a una funci�n el c realmente env�a la direcci�n
de memoria de su primer elemento, recojamos lo que recojamos en la funci�n
los cambios del array afectan a todo el programa (porqu�, insisto, trabaja con 
direcciones de memoria.
si yo hago la funci�n int longitud(char cadena[20]) cuando env�e cadenas
m�s largas puedo tener problemas
si yo hago la funci�n int longitud(char *cadena) mi funci�n funcionar� con cadenas 
de cualquier longitud.
*/
int longitud(char *cadena){
	int contador=0;
	while(*cadena!=0){
		contador++;
		cadena++;
	}
	return contador;
}

void main(){
	char cadena1[]="Bon dia", cadena2[]="a tothom pel mat�";
	

	/*RECORDAR: EL NOMBRE DE UN ARRAY ES LA DIRECCI�N DE MEMORIA
	DE SU PRIMER ELEMENTO.
	cadena1 c lo traduce a &cadena1[0]*/
	printf("\nLa cadena %s tiene %d caracteres", cadena1, longitud(cadena1));
	printf("\nLa cadena %s tiene %d caracteres", cadena2, longitud(cadena2));
	printf("\nLa cadena  tiene %d caracteres", longitud("�kldfg sdg�fksd ��dfig sdf�s�dogf scd vg�� sd�fg �sdfg kj�sd fg-�ldksf g��o dsfg�jds�f gs �sdpfgkli s�f g�sd gf�sdfklg  �pds gf��lsdfk g-sdfg �sdoritg sr g-sdflg �dpsi t�poret sdf-glsd  �dsprot�wore t sb adtgi sdlgfj,dmnfg sdf �ldfjg s.d,mgf sd-alkj   d�lsfkjg sd-lkgfj sd-kljfg   �dsfjg sd-lkfjg  �lsdfkjg d-�sflgk  �sdgflhk sd�fgkh dsgfk ��lsdgfk �dklsf g d�flskjg -�sdlfkg sdF�Gks�drpotdfk,.dmfh,df�lgs���lg mdbh s�drok"));

	getchar();
}