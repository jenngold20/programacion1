#include <stdio.h>
#include <string.h>

#define MAX_ALUMNOS 100

void menu(); 
void ordenarPorNombre();
void actualizarAsistencia();
void agregarAlumno();
void filtrarPorAsistencia();
void mostrarAlumnos(); 


struct Alumno {
    int legajo;
    char nombre[30];
    int edad;
    int clasesTotales;
    int clasesAsistidas;
    float porcentajeAsistencia; // Este campo debe recalcularse automáticamente
};

struct Alumno alumnos[MAX_ALUMNOS] = {
	
/*int legajo  char nombre  int edad - cklases totales  - clases asistidas - float porcentaje.*/
    {1001, "Ana Torres",     20, 40, 38, 95.00},
    {1002, "Luis Gómez",     22, 40, 30, 75.00},
    {1003, "María Acosta",   19, 40, 20, 50.00},
    {1004, "Sofía Blanco",   21, 40, 10, 25.00},
    {1005, "Carlos Pérez",   23, 40, 36, 90.00},
    {1006, "Lucía Fernández",20, 40, 40, 100.00},
    {1007, "Tomás Benítez",  21, 40, 25, 62.50},
    {1008, "Julián Medina",  24, 40, 16, 40.00},
    {1009, "Flor Ruiz",      19, 40, 39, 97.50},
    {1010, "Martín Díaz",    22, 40, 35, 87.50}
};

int alumnos_cargados = 10;


int main() {
	//printf("%s", alumnos[1].nombre);
	//actualizarAsistencia();
	//probando ordenarPorNombre(); 
	// agregarAlumno();
	//filtrarPorAsistencia();
     menu();
    return 0;
}


/*6. Menú principal: Mostrar un menú con todas las opciones anteriores.*/
void menu() {
    int op;
    while (op != 6) {
        printf(" ---- MENÚ ---- \n\n");
        printf("1. Mostrar alumnos\n\n");
        printf("2. Ordenar por nombre \n\n");
        printf("3. Actualizar asistencia por legajo \n\n");
        printf("4. Agregar nuevo alumno\n\n");
        printf("5. Filtrar por asistencia inferior a un valor\n\n");
        printf("6. Salir\n\n");
        printf("Elegí una opcion: ");
        
        
        scanf("%d", &op);

        switch (op) {
            case 1: 
				mostrarAlumnos(); 
				//printf("mostrarAlumnos()"); 
				break;
            case 2: 
            	ordenarPorNombre();
				//printf("ordenarPorNombre()"); 
				break;
            case 3: 
				//printf("actualizarAsistencia()"); 
				actualizarAsistencia();
				break;
            case 4: 
				agregarAlumno(); 
				//printf("agregarAlumno()"); 
				break;
            case 5: 
            	filtrarPorAsistencia();
				//printf("filtrarPorAsistencia()"); 
				break;
            case 6: 
				printf("Me voy del programa, chau!\n\n"); 
				break;
            default: printf("Elegí una opción válida. Te doy una chance más \n\n");
        }
}
}


/*1. Mostrar todos los alumnos cargados: Mostrar el legajo, nombre, edad, clases totales, clases asistidas y porcentaje de asistencia.*/	

void mostrarAlumnos() {
    int i;
    printf("Legajo  Nombre  Edad  Total  Asistidas  Asistencia \n\n");
    for (i = 0; i < alumnos_cargados; i++) {
        printf("%d  %s  %d  %d  %d  %.2f%%  \n\n", alumnos[i].legajo, alumnos[i].nombre, alumnos[i].edad, alumnos[i].clasesTotales, alumnos[i].clasesAsistidas, alumnos[i].porcentajeAsistencia);
    }
}

/*2. Ordenar alumnos por nombre (alfabéticamente):  Usar un algoritmo de ordenamiento que compare el campo `nombre`*/


void ordenarPorNombre() {
    struct Alumno aux;
    for (int i = 0; i < alumnos_cargados - 1; i++) {
        for (int j = 0; j < alumnos_cargados - 1 - i; j++) {
            if (strcmp(alumnos[j].nombre, alumnos[j + 1].nombre) > 0) {
                aux = alumnos[j];
                alumnos[j] = alumnos[j + 1];
                alumnos[j + 1] = aux;
            }
        }
    }
    printf("Alumnos ordenados por nombre:\n\n");
    mostrarAlumnos();  
}


/*3. **Actualizar cantidad de clases asistidas, buscando por legajo**
    El usuario ingresa el legajo del alumno. Si lo encuentra, modifica la cantidad de clases asistidas.
   IMPORTANTE: El porcentaje de asistencia debe recalcularse automáticamente con la fórmula:
`porcentajeAsistencia = (clasesAsistidas * 100.0) / clasesTotales`*/

void actualizarAsistencia() {
    int legajoBuscado;
    int nuevasAsistencias;
    int encontrado = 0;
    int i;

    printf("Ingresá el legajo del alumno: ");
    scanf("%d", &legajoBuscado);

    for (i = 0; i < alumnos_cargados && !encontrado; i++) {
        if (alumnos[i].legajo == legajoBuscado) {
            printf("Alumno encontrado: %s\n\n", alumnos[i].nombre);
            printf("Clases asistidas actuales: %d\n\n", alumnos[i].clasesAsistidas);
            printf("Ingresá la nueva cantidad de clases asistidas: ");
            scanf("%d", &nuevasAsistencias);

            if (nuevasAsistencias < 0 || nuevasAsistencias > alumnos[i].clasesTotales) {
                printf("Cantidad inválida. No puede ser menor a 0 ni mayor que %d.\n\n", alumnos[i].clasesTotales);
            }

            alumnos[i].clasesAsistidas = nuevasAsistencias;
            alumnos[i].porcentajeAsistencia = (nuevasAsistencias * 100.0) / alumnos[i].clasesTotales;

            printf("Datos actualizados correctamente.\n\n");
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("No se encontró ningún alumno con el legajo %d.\n\n", legajoBuscado);
    }
}

/*4. **Agregar un nuevo alumno al final. Validar que no se haya alcanzado `MAX_ALUMNOS`. El campo `porcentajeAsistencia` se debe calcular automáticamente al cargar `clasesTotales` y `clasesAsistidas`.*/
void agregarAlumno() {
    if (alumnos_cargados >= MAX_ALUMNOS) {
        printf("No se puede agregar más alumnos. Se alcanzó el límite máximo.\n\n");
        return;
    }

    struct Alumno nuevo;

    printf("Ingresá el legajo: ");
    scanf("%d", &nuevo.legajo);

    printf("Ingresá el nombre: ");
    getchar(); 
	gets(nuevo.nombre);

    printf("Ingresá la edad: ");
    scanf("%d", &nuevo.edad);

    printf("Ingresá la cantidad de clases totales: ");
    scanf("%d", &nuevo.clasesTotales);

    printf("Ingresá la cantidad de clases asistidas: ");
    scanf("%d", &nuevo.clasesAsistidas);

    if (nuevo.clasesAsistidas < 0 || nuevo.clasesAsistidas > nuevo.clasesTotales) {
        printf("Cantidad de asistencias inválida.\n\n");
    }

    nuevo.porcentajeAsistencia = (nuevo.clasesAsistidas * 100.0) / nuevo.clasesTotales;

    alumnos[alumnos_cargados] = nuevo;
    alumnos_cargados++;

    printf("Se agregó al alumno correctamente!\n\n");
}


/*5. Filtrar alumnos con asistencia menor a un valor dado: El usuario ingresa un porcentaje límite (por ejemplo, 60). Se muestran solo los alumnos que tienen un porcentaje de asistencia menor al indicado.*/
void filtrarPorAsistencia() {
    float limite;
    int i=0, encontrados = 0, contador = 0;
    

    printf("Ingresá el porcentaje limite de asistencia: \n\n ");
    scanf("%f", &limite);

    printf(" Alumnos con asistencia menor a %.2f%%: \n\n", limite);
    printf("Legajo  Nombre  Edad  Total  Asistidas  Asistencia \n\n");

    for (i; i < alumnos_cargados; i++) {
        if (alumnos[i].porcentajeAsistencia < limite) {
            printf("%d  %s  %d  %d  %d  %.2f%%\n", alumnos[i].legajo, alumnos[i].nombre, alumnos[i].edad, alumnos[i].clasesTotales, alumnos[i].clasesAsistidas, alumnos[i].porcentajeAsistencia);
            encontrados = 1;
            contador++;
        }
    }

    if (!encontrados) {
        printf("No se encontraron alumnos con asistencia menor al %.2f%% \n\n", limite);
    } else {
    printf("Se encontraron %d alumnos con asistencia menor a %.2f%% \n", contador, limite);
}
}
