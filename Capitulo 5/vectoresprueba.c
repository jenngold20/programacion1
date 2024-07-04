#include <stdio.h>

#define N 10

int main (){
	
	
	int VEC[N], I;
	
	for(I=0; I<N; I++){
		printf("\n VEC[%d]= ", I);
		scanf("%d", &VEC[I]);
		
		}
		
	printf("\n\n Impresión valores del vector");	
	for(I=0; I<N; I++){
		printf(" %6d", VEC[I]);
	}
	
		printf("\n\n Impresión inversa valores del vector");	

	/*Impresión inversa de los valores del vector*/
		for(I=N-1; I>=0; I--){
		printf(" %6d", VEC[I]);
	}
		
		printf("\n\n Impresión inversa 2 valores del vector");	

		/*Impresión inversa 2 de los valores del vector*/
		for(I=0; I<N; I++){
		printf(" %6d", VEC[N-I-1]);
	}
	
	
		
	}	
	
	
	
