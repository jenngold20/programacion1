/* Mostrar los numeros primos menores que 10000*/

#include <stdio.h>

#define MAX 100000

int main(){

  	int DIV, NUM, PRIMO, CONT;


		CONT = 0;
		for(NUM = 2; NUM < MAX; NUM++){
			PRIMO = 1;
			
			for(DIV=2; DIV <= sqrt(NUM) && PRIMO; DIV++){
				if ( !(NUM%DIV)  ){
					PRIMO=0;
				};
				
			};
			
		if (PRIMO ){
			CONT++;
			printf("\n\n%8d es primo", NUM);
		}
		
		};
		
		printf("\n\nSe encontraron %d numeros primos", CONT);
	

}