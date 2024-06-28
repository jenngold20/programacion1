#include <stdio.h>


/*Realizar una función que reciba un entero de una cibra y retorne su cubo*/

int CUBO (int A){
	return A*A*A;
}

/*Realizar una función que reciba 3 enteros de una cifra y retorne la suma del cubo de los tres, utilizando la función anterior*/

int SUM_CUBO(int X, int Y, int Z) {
    int W;
    W = CUBO(X) + CUBO(Y) + CUBO(Z);
    return W;
}


/*Realizar una función que reciba un entero de 3 cifras y devuelva un 1 en caso que se cumpla que dicho número es igual a la suma de cubo de sus cifras individuales y retorne un 0 en caso contrario. Utilizar para esto la función del enunciado anterior.*/



int CUBOS(int N){
	int A,B,C;
	A= N/100;
	C= N % 10;
	B=(N/10)%10;
	
	if (N== SUM_CUBO(A,B,C)) return 1;
	else return 0;
	
}


/* Determinar cuales son los números de tres cifras (que no cominencien con cero)tales que la suma del cuboi de cada una de sus cifras indiviaduales sea igual al número propuesto. 
Es decir aquellos que cumplan: ABC = A3 + B3 + C3
Siendo ABC un número de tres cifras y no un producto. Existen cuatro de estos números.
*/

int main(){
	int J;
	for(J=100; J<1000; J++)
		if(CUBOS(J))
			printf("\n %d \n", J);
}