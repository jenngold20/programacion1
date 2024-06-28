/* 1 - Construir la función PRIMO que reciba un número entero positivo y retorne 1 si este es primo y 0 en caso contrario*/
/* 2 - Construir la funcion PERFECTO, que reciba un numero entero positivo y retorne 1 si este es perfecto y un 0 si no lo es*/
/*3.Construir la funcion POTENCIA, que recibe un numero entero P y retorne 2^P (2 elevado a la p). */
/* 4.Contruir la funcion EUCLIDES, ( que utilice la del punto anterior), tal que reciba un numero P y retorne un valor M, siendo M= [2 ^ (P-1)]. ([2^P] -1 ) */
/*5. Crear un programa que utilice las funciones anteriores y compruebe para los valores de P correspondientes a los numeros primos menoresque 100, si M es un numero perfecto o no.*/ 


#include <stdio.h>

int PRIMO (int);
int PERFECTO (int );
int SUMADIV (int);


/*
int main (){
	
	int num, p;
	scanf("%d", &num);
	if (PRIMO (num) ==1)
		printf("%d ES PRIMO", num);
		
	else
		printf("%d NO ES PRIMO", num);
	
	
} */


int main (){
int  p, M;	
 	for ( p=2; p< 100 ; p++)
 		
 		if (PRIMO (p)== 1)	
 		
 			{ M= EUCLIDES (p);
 			  if (PERFECTO (M)==1)
 				printf ("\n Para el numero primo %d, M= %d es perfecto ", p, M);
 			  else 
 				printf ("\n Para el numero primo %d, M= %d NO es perfecto ", p, M);
			 }
 			
 printf ("\n FIN DEL PROGRAMA");
	
}



/* 1 */
int PRIMO (int x)
{
	int DIV;
	for (DIV = 2; DIV < x; DIV++)
	{
		if (x % DIV ==0)
		return 0;
	}
	return 1;
}



/* 2 */

int PERFECTO (int x)
{
	if (x == SUMADIV (x))
		return 1;
	else
		return 0;
}

int SUMADIV (int b)
{
	int div, suma=0;
		for(div=1; div < b; div++)
			if (b%div == 0)
				suma += div;
				
return suma;
}




int POTENCIA (int p)
{
	/*  retorna 2 elevado a la p */
	int pot=1, i ;
	for ( i=0; i< p ; i++)
			pot = pot * 2;
	
 return pot;
}

int EUCLIDES ( int p )
{
	
	/* Recibe p y usando la funcion potencia, calcula y retorna el numero M, siendo M la formula del enunciado*/
	int M;
	M= POTENCIA (p-1) * ( POTENCIA (p) -1    );
  	
  	return M;
	
	
}

