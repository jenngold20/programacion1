/*Permitir el ingreso del radio (flotante) e imprimir en pantalla la longitud de la circunferencia y la superficie del círculo correspondiente*/

#include <stdio.h>

int main(){
	float RADIO,LONGITUD, SUPERFICIE;
	
	printf("Radio = ");
	scanf("%f", &RADIO);  /*por que si pongo %.2f me sale error en scanf?
	printf("RADIO es %.2f", RADIO);*/
	
	LONGITUD = (2*3.14) * RADIO;
	
	printf("La longitud de la circunsferencia es = %.2f", LONGITUD);
	
	SUPERFICIE = (3.14 * (RADIO*RADIO));
	
	printf("La superficie del circulo es = %.2f", SUPERFICIE);
	
}