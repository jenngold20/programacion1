/*Matrices*/
/*Transferencia de matrices a funcion */
#include <stdio.h>
#include <stdlib.h>

#define FILAS 6
#define COLUMNAS 8

void CARGAR (int [][COLUMNAS], int , int );

void MIRAR (int [][COLUMNAS], int , int );



int main(){
	
	int MAT [FILAS][COLUMNAS];
	srand(567);
	CARGAR(MAT, FILAS, COLUMNAS);
	MIRAR(MAT, FILAS, COLUMNAS);

}


void CARGAR (int M[][COLUMNAS], int F, int C){
	
		/*CARGA DE LA MATRIZ*/
	int I, J;
		
	for ( I = 0; I< F; I++)
		for(J=0; J<C; J++){
		M[I][J]= rand()%100;
		}
	
}



void MIRAR (int M[][COLUMNAS], int F, int C){	
	
	/*IMPRESION DE LA MATRIZ*/
	int I, J;
	
printf("\n\n\n IMPRESIÓN DE LA MATRIZ \n\n\n");

	for ( I = 0; I< F; I++){
		printf( "\n\n\t\t" );
		for(J=0; J<C; J++){
			printf("%8d", M[I][J]);
		}
		
		
	}
}