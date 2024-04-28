#include <stdio.h>

int main()
{
	char let1,let2,let3,let4,let5;
	int symbol1, symbol2, symbol3, symbol4, symbol5;
	
	printf("Por favor ingrese una palabra de 5 letras:");
	scanf("%c %c %c %c %c", &let1, &let2, &let3, &let4, &let5);
	
	
	symbol1 = let1+5;
	symbol1 = let2+5;
	symbol1 = let3+5;
	symbol1 = let4+5;
	symbol1 = let5+5;

   	printf("Nueva palabra armada en ASCII +5: %c %c %c %c %c", symbol1, symbol2, symbol3, symbol4, symbol5);
   	
}