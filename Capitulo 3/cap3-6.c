/*Determinar si un número entero positivo ingresado por teclado es o no un número perfecto. Los números perfectos son aquellos cuyo valor es igual a la suma de todos su divisores exactos con excepción del mismo número, por ejemplo 6 = 1+2+3 */

#include <stdio.h>

int main(){
	
	int NUM, SUMADIV= 0;
	
	printf("Ingrese un número entero positivo: ");
	scanf("%d", &NUM);
	
	//con este for, vamos a ver todos los números anteriores al número ingresado (exceptuando el mismo número ingresado por eso el <), si son divisores exactos de ese número, por eso si el módulo es 0, a ese número lo voy a sumar en SUMADIV
    for (int i = 1; i < NUM; i++) {
		if(NUM % i == 0){
			SUMADIV += i;
		}
	}
	
	//con este if, me fijo si los números que son divisores exactos, suman el mismo número que el ingresado.
	if(SUMADIV == NUM){
		printf("%d es un número perfecto", NUM);
		
	} else {
		printf("%d no es un número perfecto", NUM);
	}
	
	
}