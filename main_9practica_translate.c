#include <stdio.h>
#include <stdlib.h>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void vacio();
void menu();
void anadir();
void buscar();
void traducir(int op);
void cor(char pal[N]);

typedef struct{
	
	char ENG[N];
	char ESP[N];
	int lleno;
	
}translate;

translate tra[N];

int main() {
	
	vacio();
	menu();
	system("pause");
	
	return 0;
}

void vacio(){
	
	int i;
	
	for(i=0; i<N; i++){
		
		tra[i].lleno = 0;
		
	}
	
}

void menu(){
	
	char key;
	int op;
	op = 0;
	
	do{
		
		printf("Welcome to pranslate...\n");
		op=0;
		
		while(op < 1 || op > 2){
		
			printf("Escribe 1 para anadir o presiona 2 para buscar:\n");
			scanf("%i", &op);
			
		}
		
		switch(op){
		
					case 1: anadir();
					break;
					case 2: buscar();
					break;
					default: 
					break;			
		}
		
		
		printf("pulsa 's' para seguir: ");
		scanf("%c", &key);
		
	}while(key == 'S' || key == 's');
}

void anadir(){

	int i;
	
	for(i=0; i<N; i++){
		
		if(tra[i].lleno == 0){
			
			printf("Introduce palabra en ingles\n");
			fflush(stdin);
			fgets(tra[i].ENG,N,stdin);
			cor(tra[i].ENG);
		
			printf("Introduce palabra en espanol\n");
			fflush(stdin);
			fgets(tra[i].ESP,N,stdin);
			cor(tra[i].ESP);
			
			i=N;
		}
		
	}

}

void buscar(){


	int op;
	op=0;
	while (op < 1 || op > 2){
		
		printf("Escribe <1> para buscar la palabra en espanol\nPresiona <2>para buscar la palabra en ingles:\n");
		scanf("%i", &op);
	
	}
	
	switch(op){
			
			case 1: traducir(op);
			break;
			case 2: traducir(op);
			break;
			default: 
			break;
			
	}

}

void traducir(int op){
	
	int i, igu;
	char aux[N];
	printf("introduce la palabra\n");
	fflush(stdin);
	fgets(aux,N,stdin);
	cor(aux);
	for(i=0; i<N; i++){
		
		if(op==1){
			
			igu=strcmp(aux,tra[i].ENG);
			
			if(igu==0){
			
				printf("la traduccion de %s es %s\n", aux, tra[i].ESP);
				
			}
		}
			
		else if(op==2){
			
			igu=strcmp(aux,tra[i].ESP);
			
			if(igu==0){
			
				printf("la traduccion de %s es %s\n", aux, tra[i].ENG);
				
			}
		}
		
		else{
			
			printf("gracias\n");
		}
		
	}
	
}

void cor(char pal[N]){
	
	int i;
	
	for(i=0; i>N; i++){
		
		if(pal[i]=='\n'){
			
			pal[i]='\0';
			
		}
		
	}
	
}
