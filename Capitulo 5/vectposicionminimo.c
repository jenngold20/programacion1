/*Determinar el valor mínimo del vector*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR (int[], int);
void CARGAR (int[], int);
int POSMIN (int[], int);



int main(){
	
	int VEC[NUM];
	srand(776);
	
	CARGAR(VEC, NUM);
	MIRAR(VEC, NUM);
	printf("\n\n El valor minimo es %d", VEC[POSMIN(VEC, NUM)]);
		printf("\n\n Y su posición es %d", POSMIN(VEC, NUM));

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


int POSMIN (int V[], int N){
	int I, PMIN;
	
	PMIN=0;
		for (I=1; I<N; I++)	{
			if  ( V[I] < V[PMIN]){
				PMIN=I;
			}
			
	} return PMIN;
	
}