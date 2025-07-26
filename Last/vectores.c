#include <stdio.h>

#define N 10

int main(){
/*	for (i=0 ; i <5; i++){
		vec[i] = i;
		printf("Vec[%d] = %d \n\n", i, vec[i]);
	}*/
	
	int vec[N], total=0, i;
	float promedio;
	
	
	for (i=0 ; i <N; i++){
		printf("Ingrese una nota para vec[%d] \n", i);
		scanf("%d", &vec[i]);
		total = total + vec[i];
		/*printf("total q es: %d ", total);*/}
	

promedio = (float)total/N;


printf("El promedio de todos los elementos es: %.2f \n", promedio);


for (i=0; i<N; i++){
		if (vec[i] >= promedio){
		printf("vec[%d] supera el promedio \n", i);
}

}}