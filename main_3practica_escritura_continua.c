#include <stdio.h>
#include <stdlib.h>
#define CARAC 100

void storef(char *frase);

int main( ) { 

	char texto[CARAC];

	storef(texto);

system("pause");
return 0;
}


void storef(char *texto){
	
	int i;
	printf("introduce la frase: \n");
	for(i=0; (*(texto+i) = getchar())!= EOF; i++){
		
		putchar(*(texto+i));

	}
	
}
