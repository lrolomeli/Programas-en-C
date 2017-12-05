#include <stdio.h>
#include <stdlib.h>
#define CR printf("\n")
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	
	unsigned char	a:1;
	unsigned char	b:2;
	unsigned char	 :4; //Estos bits se van a ignorar
	unsigned char	c:1;
	

}cdb;

typedef struct{
	unsigned char bit1:1;
	unsigned char bit2:1;
	unsigned char bit3:1;
	unsigned char bit4:1;
	unsigned char bit5:1;
	unsigned char bit6:1;
	unsigned char bit7:1;
	unsigned char bit8:1;
	
}byte;

typedef struct{
	
	unsigned char nibble1:4;
	unsigned char nibble2:4;
	unsigned char byte2:8;
	
}word;

typedef struct{
	
	unsigned char byte1:8;
	unsigned char byte2:8;
	unsigned char byte3:8;
	unsigned char byte4:8;
	
}dword;

void camdb();
void initbits(byte *xbyte);
void initword(word *xword);
void initdword(dword *dword);
void printbyte(byte *xbyte);
void printword(word *xword);
void printdword(dword *dword);

int main(int argc, char *argv[]) {
	
	
	byte xbyte;
	word word1;
	dword dwordy;
	initdword(&dwordy);
	printdword(&dwordy);
	initword(&word1);
	printword(&word1);
	initbits(&xbyte);
	printbyte(&xbyte);
	
	
	//camdb();
	system("pause");
	return 0;
}

void initdword(dword *dword){
	
	//inicializar word con cero
	dword->byte1 = 0;
	dword->byte2 = 0;
	dword->byte3 = 0;
	dword->byte4 = 0;
	
}

void initword(word *xword){
	
	//inicializar word con cero
	xword->nibble1 = 0;
	xword->nibble2 = 0;
	xword->byte2 = 0;
	
}

void initbits(byte *xbyte){
	
	//Inicializamos bits		
	xbyte->bit1=0;
	xbyte->bit2=0;
	xbyte->bit3=0;
	xbyte->bit4=0;
	xbyte->bit5=0;
	xbyte->bit6=0;
	xbyte->bit7=0;
	xbyte->bit8=0;
	
}

void printdword(dword *dword){

	
	printf("el valor del byte1 es %i\n", dword->byte1);
	printf("el valor del byte2 es %i\n", dword->byte2);
	printf("el valor del byte3 es %i\n", dword->byte3);
	printf("el valor del byte4 es %i\n", dword->byte4);
	printf("el tamano de dwordy es %i\n\n",sizeof(*dword));
	printf("el valor de dwordy es %i\n\n",*dword);

}

void printword(word *xword){

	
	printf("el valor del nibble1 es %i\n", xword->nibble1);
	printf("el valor del nibble2 es %i\n", xword->nibble2);
	printf("el valor del byte2 es %i\n", xword->byte2);
	printf("el tamano de word1 es %i\n\n",sizeof(*xword));
	printf("el valor de word1 es %i\n\n",*xword);

}

void printbyte(byte *xbyte){
	
	printf("el valor del bit1 es %i\n", xbyte->bit1);
	printf("el valor del bit2 es %i\n", xbyte->bit2);
	printf("el valor del bit3 es %i\n", xbyte->bit3);
	printf("el valor del bit4 es %i\n", xbyte->bit4);
	printf("el valor del bit5 es %i\n", xbyte->bit5);
	printf("el valor del bit6 es %i\n", xbyte->bit6);
	printf("el valor del bit7 es %i\n", xbyte->bit7);
	printf("el valor del bit8 es %i\n", xbyte->bit8);
	CR;
	printf("el tamano de xbyte es %i\n\n",sizeof(*xbyte));
	printf("el valor de xbyte es %i\n\n",*xbyte);
	
}



void camdb(){
	
	cdb cdb1;
	
	//cdb1 xxxxxxxx
	//cdb1 cxxxxbba
	
	
	printf("Este campo tiene %d bytes\n\n",sizeof(cdb1));
	cdb1.a = 0;
	cdb1.b = 0;
	cdb1.c = 0;
	
	//cdb1 0xxxx000
	
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
	cdb1.a = 1;
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
	cdb1.b = 1;
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
	cdb1.b = 2;
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
	cdb1.b = 3;
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
	cdb1.c = 1;
	printf("%i\n%i\n%i\n%i\n\n",cdb1, cdb1.a, cdb1.b, cdb1.c);
	
}
