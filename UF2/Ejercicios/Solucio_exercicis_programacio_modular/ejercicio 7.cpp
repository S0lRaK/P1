#include<stdio.h>
#include<string.h>
#define MAX 29
#define MIN 7
void rellenar(char *cadena,int n1){
	do{
		printf("introduzca cadena(max %d caracteres): ",n1+1);
		gets(cadena);
	
	}while(strlen(cadena)>n1||strlen(cadena)==0);


}
int comprobar(char *cadena1,char *cadena2){
	
	int a=0;
	{
		do{
			
			if(*cadena1==*cadena2 && *cadena2!=0){
				cadena2++;
				a++;
			}
	
			else if (*cadena1!= *cadena2 && a!=0){
				cadena2=cadena2-a;
				cadena1--;
				a=0;
			}
			
				
		
			cadena1++;
			
			
		}
		while(*cadena2!=0 && *cadena1!=0);

}

return a;

}
void main()
{
	char frase[MAX],comp[MIN];
	int  op,tam1,tam2;
	rellenar(frase,MAX);
	rellenar(comp,MIN);
	tam1=strlen(frase);
	tam2=strlen(comp);
	if(tam2>tam1){
		printf("la cadena para comprobar es mas grande que la frase");
	}
	else{
	op=comprobar(frase,comp);
	if (op==0)
		printf("la  cadena: %s ,no se encuentra dentro de la cadena: %s",comp,frase);
	else
		printf("la  cadena %s se encuentra dentro de la cadena %s",comp,frase);
	}
	
fflush(stdin);
getchar();}