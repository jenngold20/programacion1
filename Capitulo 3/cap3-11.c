/* Ingresar 10 valores por teclado. Indicar si esta secuencia es creciente (todo valor es mayor que el anterior)*/

#include <stdio.h>

int main(){
	
	int NUM, mayor=0, posicion=0;
	bool esMayor;
	
	for (int i=0; i<10; i++){
		printf("Ingresa un numero: ");
		scanf("%d", &NUM);
		
		if (NUM > mayor){
			esMayor;
			
		} else {
			esMayor = false;
		}
		
		
	}
	
	
	
}