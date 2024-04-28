/*Se ingresarán 100 números enteros. Sumar los de orden impar 1,3,5 por un lado y los de orden par 2,4,6 por otro. Determinar cuáles proporcionan la mayor suma*/

#include <stdio.h>
#define NUM 10

int main(){
	
	int I, PRUEBA=0, PAR=0, IMPAR=0;
	
	for (I=0; I<NUM; I++){
		printf("Ingrese un número: ");
		scanf("%d", &PRUEBA);
		
		if(PRUEBA % 2 == 0){
			PAR += PRUEBA;
		} else {
			IMPAR += PRUEBA;
		}
		
		
	}
	
	printf("\n\n\n %d suman los pares, %d suman los impares", PAR, IMPAR);
	
	if(PAR > IMPAR){
		printf("\n\n Los números pares sumaron más que los impares");
	} else{
		printf("\n\n Los números impares sumaron más que los pares");
	}
	
	
	
}