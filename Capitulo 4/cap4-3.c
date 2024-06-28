/*Se desea realizar un programa que utilice una función que calcule y retorne el valor de X (X elevado a la potencia Y), siendo X e Y enteros positivos, y por lo tanto, dando un resultado también entero.
Debido al rápido crecimiento de este valor será necesario retornar el valor en un unsigned long*/



#include <stdio.h>
unsigned long POTENCIA (int, int );


int main(){

unsigned long resultado = POTENCIA(2,3);	
    printf("Resultado: %lu\n", resultado);

return 0;	
}


unsigned long POTENCIA (int X, int Y){
	
	unsigned long resultado = 1;
	
	for(int i=0; i <Y; i++){
	 resultado *= X;
		
	}
	return resultado;
	
	
}

