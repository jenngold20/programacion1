/*Realice un porgrama para ingresar el total de una factura (float) y el porcentaje a descontar (otro float). 
Mostrar en pantalla el precio final. Por ejemplo, para una factura de $120 y un descuento de 8.8% el precio final es $109.44*/

#include <stdio.h>

int main(){
	
	float TOTAL, PORCENTAJE, FINAL;
	
	printf("Ingrese el total de la factura $: ");
	scanf("%f", &TOTAL);
	printf("\n\n Ingrese el porcentaje de descuento %%: ");
	scanf("%f", &PORCENTAJE);
	
	//Comprobamos
	printf("\n\n El total es de %f y el descuento es de %f: ", TOTAL, PORCENTAJE);

	FINAL = TOTAL - (PORCENTAJE * TOTAL / 100);
	
	printf("\n\n El precio final es de %f: ", FINAL);


}