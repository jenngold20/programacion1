#include <stdio.h>
int factorial (int);

int main(){
	int N;
	scanf("%d", &N);
	printf("\n %d! = %d", N, factorial(N));
}

int factorial(int N){
	int F = 1;
	if(N!=0) F=N* factorial(N-1);
	return F;
}