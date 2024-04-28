/*Realizar un programa que permita el ingreso de las diagonales de un rombo y muestre el valor de su superficie*/

#include <stdio.h>

int main(){
	float DIAGONAL1, DIAGONAL2, SUPERFICIE;
	
	printf("Ingresa el valor de Diagonal 1= ");
	scanf("%f", &DIAGONAL1);
	printf("\n\n Ingresa el valor de Diagonal 2= ");
	scanf("%f", &DIAGONAL2);
	
	printf("\n\nLas diagonales miden: %f %f", DIAGONAL1, DIAGONAL2);
	
	
	SUPERFICIE = (DIAGONAL1 * DIAGONAL2)/2;
	
		printf("\n\nLa superficie es de:  %f ", SUPERFICIE);

	
	
}
