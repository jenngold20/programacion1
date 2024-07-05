/*Ordenamiento por burbujeo*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void MIRAR  (int [], char [], float [], int );
void CARGAR (int [], char [], float [], int );



int main(){
	
	int LEG[NUM];
	char SEX[NUM];
	float PROM[NUM];
	srand(7);
	
	CARGAR(LEG, SEX, PROM, NUM);
	MIRAR(LEG, SEX, PROM, NUM);
	

}

void CARGAR (int L[], char S[], float P[], int  N){
	
	int I;
	
	for (I=0; I<N; I++)	{
		
		
		L[I] = 10000 + rand()% 90000;
		S[I]= (rand()%2) ? 'M' : 'F';
	
	
	/*	S[I]= 'F' + (rand()%2)*('M'-'F');*/
		
		/*if(rand() %2 == 1)
			S[I] = 'M';
		else 
			S[I] = 'F'; */
		
		P[I] = (200 + rand() % 801) / 100.0 ;
		
		
		
	}
	
}



void MIRAR  (int L[], char S[], float P[], int  N){
	
	int I;
	
		printf("\n\n\t\t %10s %10s %10s  \n\n", "LEGAJO", "SEXO", "PROMEDIO");

	for (I=0; I<N; I++)	{
		printf(" \n\n\t\t %10d  %10c %10.2f", L[I], S[I], P[I]) ;
	}
	
	
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