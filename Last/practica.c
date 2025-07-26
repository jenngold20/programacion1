/*Se le pide al usuario ingresar 100 valores decimales, y luego con un menu:
1. Mostrar promedio
2. Mostrar todos los valores ingresados
*/

#include <stdio.h>
#define N 5

int main(){

int i, op;
float vec[N], total =0, promedio;

	
	for (i=0; i<N; i++){
		printf("Ingresar valor vec[%d]", i);
		scanf("%f", &vec[i]);
	}
	
	
	printf("\n\n Ingrese una opción: \n");
	printf("\n\n 1.Mostrar promedio \n");
	printf("\n\n 2. Mostrar todos los valores ingresados \n");
	scanf("%d", &op);
	
	switch (op){
		
	case 1:
            // Calcular promedio
            for (i = 0; i < N; i++) {
                total += vec[i];
            }
            promedio = total / N;
            printf("El promedio es: %.2f\n", promedio);
            break;

        case 2:
            printf("Valores ingresados:\n");
            for (i = 0; i < N; i++) {
                printf("vec[%d] = %.2f\n", i, vec[i]);
            }
            break;

        default:
            printf("Opción inválida.\n");
    }

    return 0;
}