/*Se ingresarán números enteros hasta que se ingrese el 235. Indicar cuántas veces ocurrió el ingreso del número 23*/

#include <stdio.h>

int main(){
	
	int NUM=0, ACUM=0;
	
	while (NUM !=235){
		printf("Ingresa un numero entero: ");
		scanf("%d", &NUM);
		
		if (NUM ==23){
			ACUM++;
		}
			
	}	
	
	printf("Se ingresaron %d veces el número 23", ACUM);
	
	
	
}