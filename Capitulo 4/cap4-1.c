/*En el siguiente programa se puede comprobar que la variable A local al bloque es diferente de la variable A local al main*/

#include <stdio.h>

int main(){
	int A, i;
	for(i=1; i<4; i++){
		int A;
		A++;
		printf("\n A del bloque es %d", A);
	}
	printf("\n %d", A);
}
