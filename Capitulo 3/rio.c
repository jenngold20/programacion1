#include <stdio.h>

int main() {
    float alturaRio;
    unsigned int cantidadPeces;
    unsigned int mayorCantidadPeces = 0;
    float mayorAlturaRio = 0;

    printf("Ingrese la altura del río en metros y la cantidad de peces capturados (Ingrese -1 para terminar):\n");

    while (1) {
        printf("Altura del río (-1 para terminar): ");
        scanf("%f", &alturaRio);

        // Verificar si se debe terminar la entrada
        if (alturaRio == -1) {
            break;
        }

        // Limpiar el búfer del teclado después de la lectura de alturaRio
        while (getchar() != '\n');

        printf("Cantidad de peces capturados: ");
        scanf("%u", &cantidadPeces);

        // Limpiar el búfer del teclado después de la lectura de cantidadPeces
        while (getchar() != '\n');

        // Actualizar la mayor cantidad de peces y la mayor altura del río
        if (cantidadPeces > mayorCantidadPeces) {
            mayorCantidadPeces = cantidadPeces;
            mayorAlturaRio = alturaRio;
        }
    }

    // Verificar si la mayor cantidad de peces coincide con la mayor altura del río
    if (mayorCantidadPeces > 0 && mayorCantidadPeces == mayorAlturaRio) {
        printf("La MAYOR cantidad de peces capturados coincide con la MAYOR altura del río.\n");
    } else {
        printf("La MAYOR cantidad de peces capturados NO coincide con la MAYOR altura del río.\n");
    }

    return 0;
}
