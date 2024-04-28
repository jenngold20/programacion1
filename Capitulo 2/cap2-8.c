/* Repita el programa anterior pero dibujando el triángulo al revés 
   *
  **
 ***
****

*/


#include <stdio.h>

int main(){
	
	int i, j, cateto;
	
	printf("Ingresar el tamaño de un cateto: ");
	scanf("%d", &cateto);
	printf("\n\n\n El cateto es %d", cateto);
	printf("\n");

  for (j = cateto; j >= 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            printf(" ");
        }
        for (i = j; i < cateto; i++)
        {
            printf("*");
        }
        printf("\n");
    }

		
}