/*Construir una función que reciba un entero positivo y retorne 1 si este es primo y 0 en caso contrario*/


#include <stdio.h>
#include <math.h> // Necesario para sqrt()

int esPrimo(int num);

int main() {
    int numero;
    
    // Solicitar al usuario el número a verificar
    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);
    
    // Verificar si el número es primo usando la función esPrimo()
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }
    
    return 0;
}

int esPrimo(int num) {
    if (num <= 1) {
        return 0; // No es primo si es menor o igual a 1
    }
    if (num == 2) {
        return 1; // 2 es primo
    }
    if (num % 2 == 0) {
        return 0; // No es primo si es divisible por 2 (excepto 2 mismo)
    }
    
    // Verificar divisibilidad desde 3 hasta la raíz cuadrada de num
    int limite = sqrt(num);
    for (int i = 3; i <= limite; i += 2) {
        if (num % i == 0) {
            return 0; // No es primo si es divisible por i
        }
    }
    
    return 1; // Es primo si no se encontró ningún divisor
}