#include <stdio.h>
int POTENCIA(int , int );


int main() {
    int base, exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Calcular la potencia utilizando la función POTENCIA
    int resultado = POTENCIA(base, exponente);
    printf("El resultado de %d elevado a la %d es: %d\n", base, exponente, resultado);

    return 0;
}

// Función para calcular la potencia de un número
int POTENCIA(int base, int exponente) {
    int resultado = 1;
    int i;

    // Si el exponente es negativo, el resultado será 0
    if (exponente < 0) {
        return 0;
    }

    // Calcular la potencia
    for (i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}