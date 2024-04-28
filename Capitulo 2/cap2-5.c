/*Permitir el ingreso de la superficie de un circulo y determinar su diametro utilizando la funcion sqrt(), que retorna la raiz cuadrada de un flotante y esta asociada a la cabecera math.h*/

#include <stdio.h>
#include <math.h>

int main(){
	float SUPERFICIE, DIAMETRO;
	
	printf("Ingrese la superficie del circulo= ");
	scanf("%f", &SUPERFICIE);
	
	DIAMETRO = sqrt(SUPERFICIE/3.14) *2 ;
	
	printf("El diametro del circulo es %f", DIAMETRO);
	
}