#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTOS 100

struct Producto {
    int id;
    char nombre[30];
    float precio;
    char categoria[20];
};

// Productos iniciales
struct Producto productos[MAX_PRODUCTOS] = {
    {1, "Arroz",         950.00,  "Alimentos"},
    {2, "Shampoo",       1800.50, "Higiene"},
    {3, "Notebook",     250000.0, "Electrónica"},
    {4, "Detergente",    1200.75, "Limpieza"},
    {5, "Queso",         2100.00, "Alimentos"},
    {6, "Mouse",          890.99, "Electrónica"},
    {7, "Cepillo dental", 450.00, "Higiene"},
    {8, "Lavandina",      780.00, "Limpieza"},
    {9, "Cereal",        1100.20, "Alimentos"},
    {10, "Monitor",     150000.0, "Electrónica"}
};
int productos_cargados = 10;

// Mostrar todos los productos
void mostrarProductos() {
    printf("\n%-4s %-20s %-10s %-15s\n", "ID", "Nombre", "Precio", "Categoría");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < productos_cargados; i++) {
        printf("%-4d %-20s $%-9.2f %-15s\n",
               productos[i].id,
               productos[i].nombre,
               productos[i].precio,
               productos[i].categoria);
    }
}

// Ordenar productos por nombre (burbuja)
void ordenarPorNombre() {
    struct Producto aux;
    for (int i = 0; i < productos_cargados - 1; i++) {
        for (int j = 0; j < productos_cargados - 1 - i; j++) {
            if (strcmp(productos[j].nombre, productos[j + 1].nombre) > 0) {
                aux = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = aux;
            }
        }
    }
    printf("\nProductos ordenados por nombre.\n");
}

// Actualizar el precio de un producto por nombre
void actualizarPrecio() {
    char nombreBuscado[30];
    printf("Ingrese el nombre del producto a actualizar: ");
    scanf(" %[^\n]", nombreBuscado);

    int encontrado = 0;
    for (int i = 0; i < productos_cargados; i++) {
        if (strcmp(productos[i].nombre, nombreBuscado) == 0) {
            printf("Precio actual: $%.2f\n", productos[i].precio);
            printf("Ingrese nuevo precio: ");
            scanf("%f", &productos[i].precio);
            printf("Precio actualizado.\n");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}

// Agregar un nuevo producto al final
void agregarProducto() {
    if (productos_cargados >= MAX_PRODUCTOS) {
        printf("No hay espacio para agregar más productos.\n");
        return;
    }

    struct Producto nuevo;
    nuevo.id = productos_cargados + 1;

    printf("Ingrese nombre: ");
    scanf(" %[^\n]", nuevo.nombre);
    printf("Ingrese precio: ");
    scanf("%f", &nuevo.precio);
    printf("Ingrese categoría: ");
    scanf(" %[^\n]", nuevo.categoria);

    productos[productos_cargados] = nuevo;
    productos_cargados++;

    printf("Producto agregado con éxito.\n");
}

// Filtrar productos por categoría
void filtrarPorCategoria() {
    char categoriaBuscada[20];
    printf("Ingrese la categoría a buscar: ");
    scanf(" %[^\n]", categoriaBuscada);

    int encontrados = 0;
    printf("\nProductos en la categoría '%s':\n", categoriaBuscada);
    for (int i = 0; i < productos_cargados; i++) {
        if (strcmp(productos[i].categoria, categoriaBuscada) == 0) {
            printf("ID: %d - %s ($%.2f)\n",
                   productos[i].id,
                   productos[i].nombre,
                   productos[i].precio);
            encontrados++;
        }
    }
    if (!encontrados) {
        printf("No se encontraron productos en esa categoría.\n");
    }
}

// Menú principal
void menu() {
    int opcion;
    do {
        printf("\n---- MENÚ ----\n");
        printf("1. Mostrar productos\n");
        printf("2. Ordenar por nombre\n");
        printf("3. Actualizar precio por nombre\n");
        printf("4. Agregar nuevo producto\n");
        printf("5. Filtrar por categoría\n");
        printf("6. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: mostrarProductos(); break;
            case 2: ordenarPorNombre(); break;
            case 3: actualizarPrecio(); break;
            case 4: agregarProducto(); break;
            case 5: filtrarPorCategoria(); break;
            case 6: printf("Saliendo del programa.\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while (opcion != 6);
}

// Programa principal
int main() {
    menu();
    return 0;
}
