/*REPETIR EL PROBLEMA ANTERIOR PERMITIENDO SÓLO 3 INTENTOS. lUEGO DEL TERCER INTENTO FALLIDO COLOCAR UNA ADVERTENCIA*/


#include <stdio.h>

int CLAVE, INTENTOS;


int main(){
	
	for(INTENTOS = 0; INTENTOS <3 && CLAVE != 23645; INTENTOS++){
		printf("Ingrese su clave: ");
		scanf("%d", &CLAVE);
		
		}
		
		
		if(INTENTOS ==3 && CLAVE !=23645){
			printf("CLAVE BLOQUEADA");
	} 
	
}