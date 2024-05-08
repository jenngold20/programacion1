/* Ingresar 10 valores por teclado. Indicar cuál fue el mayor en que posición entró*/

#include <stdio.h>

int main(){
	
	int NUM, mayor=0, posicion=0;
	
	for (int i=0; i<10; i++){
		printf("Ingresa un numero: ");
		scanf("%d", &NUM);
		
		if (NUM > mayor){
			mayor = NUM;
			posicion= i+1;
		}
		
		
	}
	
	printf("\n\nEl mayor número ingresado fue %d y se ingresó en la posicion %d ", mayor, posicion);
	
	
}