/*Ingresar por teclado 10 valores enteros y mostrar cuántos de estos valores superan el promedio*/

#include <stdio.h>
#define N 10

int main(){
	int VEC[N], I;
	int ACUM=0, CONT=0;
	float PROM;
	
	/*Ingreso de valores*/
	for(I=0; I<N; I++){
		printf("\n VEC[%d]= ", I);
		scanf("%d", &VEC[I]);
	}
	
	
	/*Cálculo promedio*/
	
	for(I=0; I<N; I++){
		ACUM= ACUM+VEC[I];
		PROM=(float)ACUM/N;
	}
	
	printf("\n \n");
	
	for(I=0; I<N; I++){
		printf("\n %2d", VEC[I]);
		if(VEC[I]> PROM)
			CONT++;
	}
	
	printf("\n\n Hay %d valores mayores que%4.2f.", CONT, PROM);
	
	
}