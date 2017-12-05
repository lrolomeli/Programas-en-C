#include <stdio.h>
#include <stdlib.h>
#define V 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void ordenar_me(int a[]);
void ordenar_ma(int a[]);
void printv(int v[]);

int main() {
	
	int v[V] = {1,2,5,4,9,3,2,9,7,6};
	
	
	ordenar_ma(v);
	printv(v);
	
	system("pause");
	return 0;
}


void ordenar_me(int a[]){
	
	int i, j, aux;
	
	for(i=0; i<V; i++){
		for(j=i; j<V; j++){
			if(a[i] >= a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	
}

void ordenar_ma(int a[]){
	
	int i, j, aux;
	
	for(i=0; i<V; i++){
		for(j=i; j<V; j++){
			if(a[i] <= a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	
}

void printv(int v[]){
	
	int i;
	
	for(i=0; i<V; i++){
		
		printf("posicion %i de V1: %i\n",i,v[i]);
		
	}
	
}
