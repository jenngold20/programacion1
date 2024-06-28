#include <stdio.h>


/*Probando variables 1*/


/*int main (void){
	int A; //variable local del main
	A=2;
	funcion(); //se invoca a la función llamada "funcion"
	printf("\n main %d", A);
}

funcion(void){
	int A; //variable local de la función
	A=3;
	printf("\n funcion %d", A);
}*/


/*Probando variables 2*/

/*
int A; //variable global

int main(void){
	
	printf("valor inicial de A = %d", A);
	A=2;
	funcion(); 
	printf("\n Valor de A en el main es %d", A);
	
}


funcion(void){
	int A; //variable local de la función
	A=3;
	printf("\n el valor de la A local es %d", A);
}
*/
/* 0 3 2 */


/*Ejemplo función suma*/

/*
int main(){
	int A, B, C;
	A=5;
	B=9;
	
	C= SUMA(A,B);
	
	printf("\n\n  %d +  %d = %d ", A, B, C);
}


int SUMA(int X, int Y){
	int Z;
	Z= X + Y;
	return Z;
}
*/


/* Otra función suma*/
int main(){
	int A=5, B=9;
	printf("\n %d + %d = %d", A,B, SUMAR(A,B));
}

int SUMAR (int X, int Y){
	return X+Y;
}


