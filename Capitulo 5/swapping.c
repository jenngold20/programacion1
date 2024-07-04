/*Ordenamiento por selección*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR (int[], int);
void CARGAR (int[], int);
void SELECCION (int[], int);



int main(){
	
	int VEC[NUM];
	int PM;
	srand(7);
	
	CARGAR(VEC, NUM);
	MIRAR(VEC, NUM);
	SELECCION(VEC, NUM);

	MIRAR(VEC, NUM);

	

}

void CARGAR (int V[], int N){
	
	int I;
	for (I=0; I<N; I++)	{
		V[I] =rand()%100;
	}
	
}



void MIRAR (int V[], int N){
	int I;
	
		printf("\n\n Impresion de los datos \n\n");

	for (I=0; I<N; I++)	{
		printf(" %4d", I);
	}
		for (I=0; I<N; I++)	{
		printf(" %4d", V[I]);
	}		getchar();

	
}

void SELECCION (int V[], int N){
	
	int I, PMIN, AUX, PRIMERO;
	
	for( PRIMERO =0 ; PRIMERO <N-1; PRIMERO++){
		PMIN = PRIMERO;
			
			for(I=PRIMERO+1;I<N; I++)
				if (V[I] < V[PMIN])
					PMIN=I;
					
		/*Swapping*/
		AUX = V[PMIN];
		V[PMIN] = V[PRIMERO];
		V[PRIMERO]=AUX;				
		
		MIRAR(V , N);
	}
	
	
}