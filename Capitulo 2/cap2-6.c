/*Permitir el ingreso de 5 letras que componen una palabra. Al finalizar mostrar en pantalla la palabra formada por los códigos ASCII de cada letra a los que se le sumó el valor 5*/


#include <stdio.h>

int main(){
	char LET1, LET2, LET3, LET4, LET5;
	
	printf("Ingrese una palabra de 5 letras, separa las letras con un enter: ");
	scanf("%c %c %c %c %c", &LET1, &LET2, &LET3, &LET4, &LET5);
	printf("Usted ingresó: %c %c %c %c %c", LET1, LET2, LET3, LET4, LET5);
	
	printf("\n\n Le sumamos 5 a cada letra: %c %c %c %c %c", LET1 + 5, LET2 + 5, LET3 + 5, LET4 + 5, LET5 + 5);

	
	
}