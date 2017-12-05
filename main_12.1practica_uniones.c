#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	char byte[4];
	
}bytes;

typedef union{
	
	int valor;
	bytes byte;
	
}dato;

void printbyte(dato dato_x);


int main(){
	
	dato dato1;
	int i;
	
	dato1.valor = 10;
	

	printbyte(dato1);
	printf("el valor inicial del dato 1 es:  %i\n", dato1.valor);
	dato1.byte.byte[0]++;
	dato1.byte.byte[1]++;
	dato1.byte.byte[2]++;
	dato1.byte.byte[3]++;
	printbyte(dato1);

	printf("el valor final del dato 1 es:  %i\n", dato1.valor);
	
	
	system("pause");
	return 0;
}

void printbyte(dato dato_x){
	
	int i;
		
	for(i=0;i<4;i++){
			
		printf("El byte <%i> contiene %i\n", i, dato_x.byte.byte[i]);
	
	}
	
}
