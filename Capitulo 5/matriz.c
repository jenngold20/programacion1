/*Ordenamiento por burbujeo*/

#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 4

void MIRAR  (int [], char [], float [], int );
void CARGAR (int [], char [], float [], int );
void ORDENAR (int [], char [], float [], int );



int main(){
	
	int MAT [FILAS][COLUMNAS];
	int I, J;
	
	/*CARGA DE LA MATRIZ*/
	
	for ( I = 0; I< FILAS; I++)
		for(J=0; J<COLUMNAS; J++){
			printf("\n\t\t MAT [%d][%d]", I, J);
			scanf("%d", &MAT[I][J]);
		}
	
	
	/*IMPRESION DE LA MATRIZ*/

printf("\n\n\n IMPRESIÓN DE LA MATRIZ \n\n\n");

	for ( I = 0; I< FILAS; I++){
		printf( "\n\n\t\t" );
		for(J=0; J<COLUMNAS; J++){
			printf("%8d", MAT[I][J]);
		}
		
		
	}

}

