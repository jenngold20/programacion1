/*Ordenamiento por burbujeo*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR (int[], int);
void CARGAR (int[], int);
void BURBUJA (int[], int);



int main(){
	
	int VEC[NUM];
	int PM;
	srand(7);
	
	CARGAR(VEC, NUM);
	MIRAR(VEC, NUM);
	BURBUJA(VEC, NUM);

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

void BURBUJA (int V[], int N){
	
	int I, J, AUX;
	
	for(I=0; I<N-1; I ++){
		
		for(J=0; J<N-I-1; J++){
			if (V[J] > V[J+1]){
				
				/*SWAPPING*/
				AUX =V[J];
				V[J]= V[J+1];
				V[J+1] = AUX;
			}
		}
		
	}


	
}