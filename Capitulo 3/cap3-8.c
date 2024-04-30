/*Simular el tiro de una moneda para 1, 10, 100, 1000 y 10000 intentos. Mostrar el porcentaje de ocurrencia de cara y ceca*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializar la semilla para generar números aleatorios

    int intentos[] = {1, 10, 100, 1000, 10000};
    int i;

    for (i = 0; i < 5; i++) {
        int j, cara = 0, ceca = 0;
        for (j = 0; j < intentos[i]; j++) {
            int resultado = rand(); // Generar un número aleatorio
            if (resultado % 2 == 0) { // Si es par, considerarlo cara
                cara++;
            } else { // Si es impar, considerarlo ceca
                ceca++;
            }
        }

        // Calcular porcentaje de caras y cecas
        float porcentaje_cara = (float) cara / intentos[i] * 100;
        float porcentaje_ceca = (float) ceca / intentos[i] * 100;

        printf("Intentos: %d, Caras: %.2f%%, Ceca: %.2f%%\n", intentos[i], porcentaje_cara, porcentaje_ceca);
    }

    return 0;
}
