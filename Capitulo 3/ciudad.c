#include <stdio.h>
#include <math.h>

int cuadrado ( int );

main ()
{
	
int xactual,yactual,xanterior=0,yanterior=0	;
float total =0; // suma de todas las distancias
float d; 
/* pedir las coordenadas al usuario, finaliza con (-1,-1)*/	
printf ("Ingrese x,y:")	;

scanf ("%d,%d", &xactual, &yactual);

while (xactual>0 && yactual>0)
	
	  {    if (xanterior==0 && yanterior==0)
	  			{	xanterior= xactual;
	 				yanterior= yactual;	
	 				scanf ("%d,%d", &xactual, &yactual);
	  	     	}
	  		else
	  			{
				 
	  			d= sqrt ( cuadrado (xactual-xanterior ) + cuadrado (yactual-yanterior )     );
	 	  		total+= d;  //    total = total + d;
	 	 		xanterior= xactual;
	 			yanterior= yactual;
	 	 	 	scanf ("%d,%d", &xactual, &yactual); 
	   			 }
	   }
	
		
printf ( " LA DISTANCIA TOTAL ES : %.2f", total);	
	
}// aca termina el main


int cuadrado ( int num)
{
	return num* num;
	
}