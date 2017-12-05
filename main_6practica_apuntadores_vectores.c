#include <stdio.h>
#include <stdlib.h>
#define V 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void funcion(int *v);
void printv(int *v);

int main() {
	
	int v[V];
	funcion(v);
	printv(v);
	
	system("pause");
	return 0;
}


void funcion(int *v){
	
	int i;
	
	for(i=0; i<V; i++){
		printf("mete un numero a la posicion %i del vector\n", i+1);
		scanf("%i", (v+i));
	}
}

void printv(int *v){
	
	int i;
	
	for(i=0; i<V; i++){
		
		printf("posicion %i de V1: %i\n",i,*(v+i));
		
	}	
}
