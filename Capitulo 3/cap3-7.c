/*Mostrar los primeros 5 números perfectos*/

#include <stdio.h>


int main() {
    int NUM = 2, CONT = 0;

    while (CONT <= 5) {
        int SUM = 0;

        // Calcular la suma de los divisores de NUM
        for (int i = 1; i < NUM; i++) {
            if (NUM % i == 0) {
                SUM += i;
            }
        }

        // Verifico si NUM es perfecto y lo muestro si lo es
        if (SUM == NUM) {
            printf("%d\n", NUM);
            CONT++;
        }

        // Pruebo con el siguiente número
        NUM++;
    }

    return 0;
}
