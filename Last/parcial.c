/* El usuario ingresa tres numeros enteros. Luego de ingresar los tres números, el programa debe mostrar un menú con las siguientes opciones y realizar la acción correspondiente según la opción elegida:
1- Mostrar el menor de los tres números.
2- Mostrar el promedio
3- Indicar si los tres números son distintos.
4- Salir
NOTA: El ingreso se realiza una única vez. El programa finaliza únicamente utilizando la opción del menú "Salir" */


#include <stdio.h>

int op= 0;
int num1, num2, num3;
void ingreso();
void menor();
void promedio();
void distintos();
void menu();

int main (){
	ingreso();	
	
	while (op != 4){
		menu();

		switch(op){
			case 1: 
				menor();
				break;
			case 2: 
				promedio();
				break;
			case 3:
				distintos();
				break;
			case 4: 
				printf("FIN DEL PROGRAMA \n");
			 	break;
			default:
				printf("Ingrese una opción válida \n");
			
		}
	}
	
	
	
	
	return 0;
}


void ingreso (){
	printf("Ingresar número 1: ");
	scanf("%d", &num1);
	printf("Ingresar número 2: ");
	scanf("%d", &num2);
	printf("Ingresar número 3: ");
	scanf("%d", &num3);	
	printf("Los números elegidos son: %d , %d  y %d \n\n", num1, num2, num3);
}

void menor(){
	if (num1 < num2 && num1 < num3){
		printf("El menor es: %d\n\n", num1);
	} else if (num2 < num3){
		printf("El menor es: %d\n\n", num2);
	} else {
		printf("El menor es: %d\n\n", num3)	;
	}
	
	
}

void promedio(){
	int sumaTotal;
	float promediando;
	sumaTotal= num1 + num2 + num3;
	promediando = (float)sumaTotal/3;
	printf("El promedio es: %.2f\n", promediando);
}

void distintos(){
	if(num1 != num2 && num2 != num3 && num1 != num3){
		printf("Todos los números son distintos\n\n");
	} else {
		printf("Uno o dos números son iguales\n\n");
	}
}


void menu(){
	printf("Elija una opción:\n\n1- Mostrar el menor de los tres números. \n\n 2- Mostrar el promedio. \n\n 3- Indicar si los tres números son distintos.\n\n 4- Salir\n\n");
	scanf("%d", &op);
}
