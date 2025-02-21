/*Matrices*/
/* Relación de diagonales */
#include <stdio.h>
#include <stdlib.h>

#define FILAS 8
#define COLUMNAS 8

void CARGAR1 (int [][COLUMNAS], int , int );
void CARGAR2 (int [][COLUMNAS], int , int );

void MIRAR (int [][COLUMNAS], int , int );



int main(){
	
	int MAT [FILAS][COLUMNAS];
	srand(567);
	CARGAR1(MAT, FILAS, COLUMNAS);
	MIRAR(MAT, FILAS, COLUMNAS);
	printf("\n\n\n MAT[I][J]= I+J \n");
	
	CARGAR2(MAT, FILAS, COLUMNAS);
	printf("\n\n\n MAT[I][J]= I-J \n");

	MIRAR(MAT, FILAS, COLUMNAS);

}


void CARGAR1 (int M[][COLUMNAS], int F, int C){
	
		/*CARGA DE LA MATRIZ I+J*/
	int I, J;
		
	for ( I = 0; I< F; I++)
		for(J=0; J<C; J++){
		M[I][J]= I+J;
		}
	
}


void CARGAR2 (int M[][COLUMNAS], int F, int C){
	
		/*CARGA DE LA MATRIZ I-J*/
	int I, J;
		
	for ( I = 0; I< F; I++)
		for(J=0; J<C; J++){
		M[I][J]=I-J;
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