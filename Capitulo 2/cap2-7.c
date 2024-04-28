/* Realice un programa que dibuje en pantalla un triángulo rectángulo, utilizando asteriscos de esta forma: 
*
**
***
****

Permitir que el usuario ingrese el tamaño de los catetos (ingresar solo un número, dado que son iguales)*/


#include <stdio.h>

int main(){
	
	int i, j, cateto;
	
	printf("Ingresar el tamaño de un cateto: ");
	scanf("%d", &cateto);
	printf("\n\n\n El cateto es %d", cateto);
	printf("\n");

	for (j=0; j<=cateto; j++)
	{
		for (i=0; i<j; i++)
		{
			printf("*");
			
		}
	printf("\n");

	}
		
}