/*Se ingresarán números enteros positivos. Determinar cuántos de estos son pares. El ingreso finalizará con un número negativo*/

#include <stdio.h>

int main(){
	int NUM, ACUMP=0, ACUMI=0;
	
	printf("Ingrese un número: ");
	scanf("%d", &NUM);
	
	while (NUM >0){
		if (NUM % 2 == 0){
				ACUMP++;
			} else {
				ACUMI++;
		}
		
	printf("Ingrese un número: ");
    scanf("%d", &NUM);
	}

	
	printf("Hay %d pares y %d impares", ACUMP, ACUMI);
	
}