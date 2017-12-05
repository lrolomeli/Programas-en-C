#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define O 10
#define CR printf("\n");

int aleatorio(int *vector, int N);
int createav(int N);

int main() {
	
	int v;
	v = createav(O);
	
	system("pause");
	
	return 0;
}

int aleatorio(int *vector, int N){
	
	int i;
	
	srand(time(NULL));
	
	for(i=0; i<N; i++){
		
		*(vector+i) = rand() % 3;
		printf("%i ",*(vector+i));
		
	}
	CR;
}

int createav(int N){
	
	int *v;
	
	v = (int *)malloc(N*sizeof(int));
	
	if(v == NULL){
		printf("No se ha podido reservar la memoria para el vector\n");
	}
		
	else{
		printf("Vector creado exitosamente\n");
		return aleatorio(v, O);
		
	}
}
