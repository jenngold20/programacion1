#include <stdio.h>

// Función para calcular la potencia de un número
int POTENCIA(int base, int exponente) {
    int resultado = 1;

    // Si el exponente es negativo, el resultado será 0
    if (exponente < 0) {
        return 0;
    }

    // Calcular la potencia
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

// Función para verificar si se cumple el teorema de Fermat para un par de números dados
int FERMAT(int a, int b) {
    // Verificar si a y b son números positivos
    if (a <= 0 || b <= 0) {
        return 0;
    }

    // Verificar si a^2 + b^2 = c^2, donde c es la hipotenusa
    int c = POTENCIA(a, 2) + POTENCIA(b, 2);

    // Verificar si c^2 es un cuadrado perfecto
    int raizC = 1;
    while (raizC * raizC < c) {
        raizC++;
    }

    // Si c^2 es un cuadrado perfecto, entonces se cumple el teorema de Fermat
    if (raizC * raizC == c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b;

    printf("Ingrese dos números enteros positivos (a y b): ");
    scanf("%d %d", &a, &b);

    // Verificar si se cumple el teorema de Fermat para el par de números dados
    if (FERMAT(a, b)) {
        printf("Se verifica el teorema de Fermat para el par de números (%d, %d).\n", a, b);
    } else {
        printf("No se verifica el teorema de Fermat para el par de números (%d, %d).\n", a, b);
    }

    return 0;
}
