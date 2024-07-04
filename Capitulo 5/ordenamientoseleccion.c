#include <stdio.h>

int main(){

void SELECCION (int VECTOR[], int L){
	int I, POSMIN;
	int AUX, PRIM;
	for(PRIM = 0; PRIM < L-1; PRIM++){
		POSMIN =PRIM;
		
		for(I=PRIM+1; I<L; I++){
			if (VECTOR[I]<VECTOR[POSMIN])
				POSMIN=I;
		}
		
		/*Swapping*/
		AUX = VECTOR[PRIM];
		VECTOR[PRIM] = VECTOR[POSMIN];
		VECTOR[POSMIN] = AUX;
		
	}
}

}