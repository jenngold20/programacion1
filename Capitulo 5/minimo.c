/*Determinar el valor mínimo del vector*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR (int[], int);
void CARGAR (int[], int);
int MINIMO (int[], int);



int main(){
	
	int VEC[NUM];
	srand(8776);
	
	CARGAR(VEC, NUM);
	MIRAR(VEC, NUM);
	printf("\n\n El valor minimo es %d", MINIMO(VEC, NUM));
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
	
			printf("\n\n Impresion de los datos \n\n");

		for (I=0; I<N; I++)	{
		printf(" %4d", V[I]);
	}
	
}


int MINIMO (int V[], int N){
	int I, VMIN;
	
	VMIN= V[0];
	
		for (I=1; I<N; I++)	{
			if  ( V[I] < VMIN)
				VMIN=V[I];
	} return VMIN;
	
}