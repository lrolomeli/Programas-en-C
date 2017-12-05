#include <stdio.h>
#include <stdlib.h>


typedef union{
	
	int entero;
	float flotante;
	
}num;

int main(int argc, char *argv[]) {
	
	num numero;
	
	numero.entero = 123342;
	numero.entero = 1231233;
	numero.flotante = 123.123;
	printf("el numero entero es %i\n", numero.entero);
	numero.flotante = 0.0;
	printf("el numero flotante es %f\n", numero.flotante);
	
	system("pause");
	return 0;
}
