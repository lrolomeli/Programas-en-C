#include <stdio.h>
#include <stdlib.h>


void cambio(int *a, int *b);

int main() {
	
	int x, y;
	
	x=5;
	y=10;
	
	cambio(&x, &y);
	
	printf("%i, %i",x,y);


	return 0;
}

void cambio(int *a, int *b){
	
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
