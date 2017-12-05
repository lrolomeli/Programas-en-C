#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	int mate;
	int ingles;
	int fisica;
	
}notas;

typedef struct{

	notas nota;
	int sem;	
	
}block;

void darnotas(block *b);

int main() {
	
	block b1;
	darnotas(&b1);
	printf("nota de fisica: %i\n", b1.nota.fisica);
	printf("nota de matematicas: %i\n", b1.nota.mate);
	printf("Semestre: %i\n", b1.sem);
	system("pause");
	return 0;

}

void darnotas(block *b){

	printf("dar nota de fisica: ");
	scanf("%i", &(*b).nota.fisica);
	printf("dar nota de matematicas: ");
	scanf("%i", &b->nota.mate);
	printf("\nNo. de Semestre\n");
	scanf("%i", &b->sem);
}
