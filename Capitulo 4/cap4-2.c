/*En el siguiente programa se está cometiendo un error al transferir un entero a la función y recibirlo en un parámetro de tipo char*/

#include <stdio.h>


/* CON ERROR:
funcion(char A){
	printf("\n Funcion %d", A);
}

int main(){
	int A;
	A=1857;
	funcion(A);
	printf("\nMain %d", A);
}*/


/* SI QUIERO QUE SEA UN INT
funcion(int A){
	printf("\n Funcion %d", A);
}

int main(){
	int A;
	A=1857;
	funcion(A);
	printf("\nMain %d", A);
}*/


void funcion(char A) {
    printf("\n Funcion %c", A); // %d imprime el valor numérico de char como un entero
}

int main() {
    int A = 1857;
    char char_A = (char)A; // Convertir int A a char char_A
    funcion(char_A);
    printf("\n Main %d", A);
    return 0;
}
