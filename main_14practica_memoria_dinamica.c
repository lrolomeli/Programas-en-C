#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VS 10
#define CR printf("\n");

int* createav(int N);
void reduv(int *v, int N);

int main() {
	
	int *v;
	
	v = createav(VS);
	
	reduv(v,VS);

	
	system("pause");
	
	return 0;
}

int* createav(int N){
	
	int *v, i;
	
	v = (int *)malloc(N*sizeof(int));
	
	if(v == NULL){
		printf("No se ha podido reservar la memoria para el vector\n");
		return NULL;
	}
		
	else{
		printf("Vector creado exitosamente\n");
		srand(time(NULL));
	
		for(i=0; i<N; i++){
		
			*(v+i) = rand() % 3;
			printf("%i ",*(v+i));
			
		}
	CR;
	
	return v;
	}
	
}

void reduv(int *v, int N){
	
	int i, j, k;
	
	for(i=0; i<N; i++){
		
	j=i+1;
		
		while(j<N){
			
			if(*(v+i)==*(v+j)){
				for(k=j; k<N-1; k++){
					*(v+k)=*(v+k+1);
				}
			N--;			
			}

			else{
				j++;
			}
		}
	}	
		
	v = (int*)realloc(v,N*sizeof(int));
	
	if(v == NULL){																	//especial atencion en las comparaciones que no sean declaraciones.
		printf("No se ha podido reservar espacio de memoria para el vector.\n");
	}
	else{
		for(i=0; i<N; i++){
			printf("%i, ",*(v+i));
		}
	}
	
}

