/*vamos a imaginar que no existe la función strlen. 
Así que vamos a crear una función que devuelve el número de 
caracteres de la cadena que se envía*/
#include <stdio.h>
/*como al enviar una array a una función el c realmente envía la dirección
de memoria de su primer elemento, recojamos lo que recojamos en la función
los cambios del array afectan a todo el programa (porqué, insisto, trabaja con 
direcciones de memoria.
si yo hago la función int longitud(char cadena[20]) cuando envíe cadenas
más largas puedo tener problemas
si yo hago la función int longitud(char *cadena) mi función funcionará con cadenas 
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
	char cadena1[]="Bon dia", cadena2[]="a tothom pel matí";
	

	/*RECORDAR: EL NOMBRE DE UN ARRAY ES LA DIRECCIÓN DE MEMORIA
	DE SU PRIMER ELEMENTO.
	cadena1 c lo traduce a &cadena1[0]*/
	printf("\nLa cadena %s tiene %d caracteres", cadena1, longitud(cadena1));
	printf("\nLa cadena %s tiene %d caracteres", cadena2, longitud(cadena2));
	printf("\nLa cadena  tiene %d caracteres", longitud("ñkldfg sdgñfksd ´ñdfig sdf´s´dogf scd vg´ñ sd´fg ´sdfg kj´sd fg-ñldksf g´ño dsfg´jds´f gs ´sdpfgkli s´f g´sd gf´sdfklg  ´pds gf´ñlsdfk g-sdfg ´sdoritg sr g-sdflg ´dpsi t´poret sdf-glsd  ´dsprot´wore t sb adtgi sdlgfj,dmnfg sdf ñldfjg s.d,mgf sd-alkj   dñlsfkjg sd-lkgfj sd-kljfg   ´dsfjg sd-lkfjg  ñlsdfkjg d-ñsflgk  ñsdgflhk sdñfgkh dsgfk ´ñlsdgfk ñdklsf g dñflskjg -ñsdlfkg sdFÑGks´drpotdfk,.dmfh,dfñlgs´´ñlg mdbh sçdrok"));

	getchar();
}