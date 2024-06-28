/*PARACAIDISMO */
#include <stdio.h>
#include <math.h>


 int ZONA ( int , int  );
main ()

{
int x, y, penalizacion, area, cod; float punt=0;	
float max=0; int codmax=0;
printf ("Ingrese codigo de competidor:");
scanf ("%d", &cod);	
while (cod>0) 
	{
	printf ("Ingrese los datos: x y y penaalizacion: ");
	scanf ("%d%d", &x,&y);
	scanf ("%d", &penalizacion);	
	area = ZONA (x,y); 
	
	if ( area==0) punt = 50;
	if ( area == 1) punt =40;
	if (area==2) punt = 30;
	if (area==3) punt = 0;
	
	if ( penalizacion ==1 )  punt = punt - punt *0.25;
	if ( penalizacion ==2 )  punt = punt/2;
	
	if ( punt > max)
	{
		max= punt;
		codmax= cod;
		}
		
		
	printf ("Ingrese codigo de competidor:");	
	scanf ("%d", &cod);	
	}
		



printf ("El ganador es %d con puntaje:%.2f ", codmax, max);


}

 int ZONA ( int x, int  y)
 {
 	
 float 	D;
 
 D=sqrt ( x*x+y*y);
 	
 if ( D<= 5)		
 		return 0;/* area verde */ 
 if ( D> 5 && D <=7.5) 
 		return 1; 
 if (D>7.5 && D<=15)
 		return 2;


return 3;
 	
 }