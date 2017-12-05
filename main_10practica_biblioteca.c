#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

typedef struct{
	
	char nombre[N];
	char autor[N];
	int lleno_l;
	
}libro;

typedef struct{
	
	char nombre[N];
	libro lib[N];
	int lleno_b;
	
}biblioteca;

biblioteca bib[3];

void vaciar();
void menu();
void agregar();
void gestionar();
void almacenar();
void remover();
void buscar();
int onectoi();
void cor(char pal[N]);


int main() {
	
	vaciar();
	menu();
	
	system("pause");
	return 0;

}


void vaciar(){
	
	int i, j;
	
	for(i=0; i<3; i++){
		
		bib[i].lleno_b = 0;
		
		for(j=0; j<N; j++){
			
			bib[i].lib[j].lleno_l = 0;
			
		}
		
	}
	
}

void menu(){
	
	char key;
	int op;
	
	do{	
		
		do{
	
			printf("<1> Agregar Biblioteca\n<2> Gestionar Biblioteca\n");
			op = onectoi();
		
		}while(op < 1 || op > 2);
	
		switch(op){
	
			case 1: agregar();
			break;
			case 2: gestionar();
			break;
			default:
			break;
		
		}
	
	printf("presiona enter para continuar: ");
	fflush(stdin);
	scanf("%c", &key);
	
	}while(key == '\n');

}

void agregar(){
	
	int i;
	
	for(i=0; i<3; i++){
	
		if(bib[i].lleno_b == 0){
		
			printf("Nombra la biblioteca: ");
			fflush(stdin);
			fgets(bib[i].nombre, N, stdin);
			cor(bib[i].nombre);
			bib[i].lleno_b = 1;
			i = N * N;
		}	
	
		if(i==2){
			printf("No hay espacio para otra biblioteca.\n");
		}
	}

}

void gestionar(){
	
	int op;
	
	do{
	
			printf("<1> Almacenar Libro\n<2> Remover Libro\n<3> Buscar Libro\n");
			//validar que la cadena sean digitos
			//en caso contrario volver a preguntar
			//igualar la cadena a una variable int
			//borrar scanf debido a que ya tenemos la variable
			op = onectoi();
		
		}while(op < 1 || op > 3);
	
		switch(op){
	
			case 1: almacenar();
			break;
			case 2: remover();
			break;
			case 3: buscar();
			break;
			default:
			break;
		
		}
	
}

void almacenar(){
	
	int i, op;
	for(i=0; i<3; i++){
		
		printf("(%i) %s\n", i, bib[i].nombre);
		
	}
	
	printf("En que biblioteca quieres almacenar el libro: ");
	op = onectoi();
	
	if(bib[op].lleno_b == 0){
		
		printf("la biblioteca no existe...\n");
		
	}
	
	else{
	
		for(i=0; i<N; i++){
		
			if(bib[op].lib[i].lleno_l == 0){
			
				printf("Nombre del libro: ");
				fflush(stdin);
				fgets(bib[op].lib[i].nombre, N, stdin);
				cor(bib[op].lib[i].nombre);
			
				printf("Nombre del autor: ");
				fflush(stdin);
				fgets(bib[op].lib[i].autor, N, stdin);
				cor(bib[op].lib[i].autor);
			
				bib[op].lib[i].lleno_l = 1;
				i = N * N;
			}
		
			if(i==(N-1)){
		
				printf("No hay espacio en biblioteca.\n");
			}
		
		}
	}
}

void remover(){
	
	int i, j, z, igu;
	char nombre[N];
	
	printf("Escribe el nombre del libro que deseas eliminar: ");
	fflush(stdin);
	fgets(nombre, N, stdin);
	cor(nombre);
	
	for(i=0; i<3; i++){
				for(j=0;j<N;j++){
					igu=strcmp(nombre, bib[i].lib[j].nombre);
					if(igu==0){
						bib[i].lib[j].lleno_l = 0;
						for(z=0; z<N; z++){
							
							bib[i].lib[j].nombre[z]='\0';
							bib[i].lib[j].autor[z]='\0';
							
						}
					}
				}
			}
	
}

void buscar(){
	
	int op, i, j, igu, aux;
	char buscar[N];
	igu = 1;
	do{ 
		
		printf("Que quieres buscar:  <1> Nombre del libro  <2> Nombre del autor\n");
		op = onectoi();
		
	}while(op < 1 || op > 2);
	
	switch(op){
		
		case 1: {
			printf("introduce el nombre del libro: ");
			fflush(stdin);
			fgets(buscar, N, stdin);
			cor(buscar);
			
			for(i=0; i<3; i++){
				for(j=0;j<N;j++){
					igu=strcmp(buscar, bib[i].lib[j].nombre);
					if(igu==0){
						printf("El libro %s se encuentra en la biblioteca (%i) %s\n",bib[i].lib[j].nombre, i, bib[i].nombre);
						printf("El autor de ese libro es: %s", bib[i].lib[j].autor);
						aux++;
					}
				}
			}
			if(aux==0){
				printf("No se ha encontrado el libro\n");
			}
			
			break;
		}
		
		case 2:{
			printf("introduce el nombre del autor: ");
			fflush(stdin);
			fgets(buscar, N, stdin);
			cor(buscar);
			
			for(i=0; i<3; i++){
				for(j=0;j<N;j++){
					igu=strcmp(buscar, bib[i].lib[j].autor);
					if(igu==0){
						printf("El libro %s se encuentra en la biblioteca (%i) %s\n",bib[i].lib[j].nombre, i, bib[i].nombre);
						aux++;
					}
				}
			}
			if(aux==0){
				printf("No se encontro el autor\n");
			}
			break;
		}
		
	}

	
}

int onectoi(){
	
	int len, n;
	char opa[N];
	
	do{
	
		fflush(stdin);
		fgets(opa, N, stdin);
		cor(opa);
		len=strlen(opa);
	
	}while((len-1 != 1) || (*(opa)<'0' || *(opa)>'9'));
		
	n = (int)((*opa)-48);	
	return n;
		
}

void cor(char pal[N]){
	
	int i;
	
	for(i=0; i>N; i++){
		
		if(pal[i]=='\n'){
			
			pal[i]='\0';
			
		}
		
	}
	
}
