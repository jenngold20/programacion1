#include <stdio.h>
#define PESOMAX 20
#define DIM 100


int APTO ( float , int , int , int );
float COSTO (float , int , int , int);

main()
{float p; int al, an, prof;

printf ("Ingrese peso y las dimensiones del paquete:");
scanf ("%f%d%d%d", &p, &al, &an, &prof)	;

	
if ( APTO ( p,al,an, prof)  )	
	printf (" \nEL PAQUETE ES APTO. COSTO: %.2f",  COSTO ( p,al,an, prof) );
else
	printf ("\n EL PAQUETE NO ES APTO.");
	
	
	
}


int APTO ( float peso, int alto, int ancho, int prof)
{
	
	if ( peso<= PESOMAX && alto<DIM && ancho<DIM && prof <DIM)
		return 1;
	else
		return 0;
	
}
/* int APTO2 ( float peso, int alto, int ancho, int prof)
{
	
	if ( peso> PESOMAX ||  alto>DIM || ancho>DIM  || prof >DIM)
		return 0;
	else
		return 1;
	
}*/




float COSTO (float peso, int alto, int ancho, int prof)
{
	float final= 80; // precio de base 80 por enunciado
	
	if ( peso >5)
		final = final + 40 * (peso -5.0) ;

	
	if ( alto>50 || ancho>50  || prof > 50 )
		final = final+ final *0.3;   // final = final *1.3
	
	
	return final;
}
