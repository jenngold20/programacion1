#include <stdio.h>
#include <math.h>

// Función para calcular el área de la sección transversal de un tubo dado su diámetro en pulgadas
double calcularArea(double diametro) {
    double radio = diametro / 2.0;
    return M_PI * pow(radio, 2);
}

// Función para encontrar el tubo más cercano a una sección deseada y calcular el error en porcentaje
void encontrarTubo(double seccionDeseada) {
    double diametro;
    double area;
    double error;
    double menorError = 100.0; // Inicializamos el menor error con un valor grande

    // Buscamos en los tamaños de tubo de 1 a 10 pulgadas con pasos de 1/4 de pulgada
    for (diametro = 1.0; diametro <= 10.0; diametro += 0.25) {
        area = calcularArea(diametro);
        error = fabs((area - seccionDeseada) / seccionDeseada) * 100.0;

        // Actualizamos el menor error y mostramos el tubo más cercano hasta el momento
        if (error < menorError) {
            menorError = error;
            printf("Tubo más cercano: %.2f pulgadas (error: %.1f%%)\n", diametro, error);
        }
    }

    // Buscamos en los tamaños de tubo de 10 a 30 pulgadas con pasos de 0.5 pulgadas
    for (diametro = 10.0; diametro <= 30.0; diametro += 0.5) {
        area = calcularArea(diametro);
        error = fabs((area - seccionDeseada) / seccionDeseada) * 100.0;

        // Actualizamos el menor error y mostramos el tubo más cercano hasta el momento
        if (error < menorError) {
            menorError = error;
            printf("Tubo más cercano: %.2f pulgadas (error: %.1f%%)\n", diametro, error);
        }
    }
}

int main() {
    double seccionDeseada;

    printf("Ingrese la sección transversal deseada en cm2: ");
    scanf("%lf", &seccionDeseada);

    // Convertimos la sección deseada de cm2 a pulgadas cuadradas
    seccionDeseada /= 2.54 * 2.54;

    // Encontramos el tubo más cercano a la sección deseada y calculamos el error
    encontrarTubo(seccionDeseada);

    return 0;
}

