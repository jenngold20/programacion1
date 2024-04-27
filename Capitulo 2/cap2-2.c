/*Ingresar 3 valores enteros y calcular su promedio*/
#include <stdio.h>

int main(){
	
	int A, B, C;
	
	printf("Ingresa tres numeros enteros: ");
	scanf("%d %d %d", &A, &B, &C);
	printf("\n\n\t Ingresaste %d , %d, %d", A,B,C);
	
	float PROMEDIO;
	PROMEDIO = (float)(A+B+C)/3;
	
	printf("\n\n\n\t El promedio de esos números es %f", PROMEDIO);	
	
}