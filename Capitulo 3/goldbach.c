#include <stdio.h>

int PRIMO(int x) {
    int DIV;
    for (DIV = 2; DIV < x; DIV++) {
        if (x % DIV == 0)
            return 0;
    }
    return 1;
}

void encontrarSumaPrimos(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (PRIMO(i) && PRIMO(n - i)) {
            printf("%d se puede escribir como %d + %d\n", n, i, n - i);
            return;
        }
    }
}

int main() {
    int num;

    printf("Ingrese un número entero par mayor que 2: ");
    scanf("%d", &num);

    // Verificar si el número es par y mayor que 2
    if (num % 2 != 0 || num <= 2) {
        printf("El número ingresado no es válido.\n");
        return 1;
    }

    // Encontrar los dos números primos que suman el número dado
    encontrarSumaPrimos(num);

    return 0;
}
