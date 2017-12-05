#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void llenarM(int m[][2]);
void compararM(int mA[][2], int mB[][2]);

int main() {
	
	
	int m1[2][2];
	int m2[2][2];
	
	llenarM(m1);
	llenarM(m2);
	compararM(m1,m2);
	
	system("pause");
	return 0;
}

void llenarM(int m[][2]){
	
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			printf("Introduce valores en la posicion [%i][%i]: ",i+1,j+1);
			scanf("%i", &m[i][j]);
			
		}
	}
	
}

void compararM(int mA[][2], int mB[][2]){
	
	int i, j, aux;
	
	aux=0;
	
	for(i=0; i<2 && aux==0; i++){
		for(j=0; j<2 && aux==0; j++){
			
			if(mA[i][j]!=mB[i][j]){
				aux=1;
			}
		}
	}
	if(aux=1){
		printf("las matrices no son iguales");
	}
	else{
		printf("las matrices son iguales");
	}
}
