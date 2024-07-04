#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR (int[], int);
void CARGAR (int[], int);



int main(){
	
	int VEC[NUM];
	srand(876);
	
	CARGAR(VEC, NUM);
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
		printf(" %4d", V[I]);
	}
	
}