#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addv(int v[]);
void printv(int v[]);

int main() {
	
	int v1[2];
	
	addv(v1);
	printv(v1);
	
	
	
	
	system("pause");
	return 0;
}

void addv(int v[]){
	
	int i;
	
	for(i=0; i<2; i++){
		
		printf("\ningresar numeros a V1: ");
		scanf("%i",&v[i]);
		
	}
	
}

void printv(int v[]){
	
	int i;
	
	for(i=0; i<2; i++){
		
		printf("posicion %i de V1: %i\n",i,v[i]);
		
	}
	
}
