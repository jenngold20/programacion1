#include <stdio.h>
#include <stdlib.h>

#define NUM 6

void MIRAR (int[], int);
void CARGAR (int[], int);



int main(){
	
	int VEC[NUM];
	
	CARGAR(VEC, NUM);
	MIRAR(VEC, NUM);
	
}

void CARGAR (int V[], int N){
	
	int I;
	
	printf("\n\n CARGA DEL VECTOR \n\n");
	for (I=0; I<N; I++)	{
		printf(" VEC[%d] = ", I);
		scanf("%d", &V[I]);
	}
	
}

void MIRAR (int V[], int N){
	int I;
	
		printf("\n\n Impresion de los datos \n\n");

	for (I=0; I<N; I++)	{
		printf(" %6d", V[I]);
		getchar();
	}
	
}