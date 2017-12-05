#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 20
#define NCOL 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef enum{FALSE, TRUE}boolean;

typedef struct{
	
	char COLOR[N];
	boolean flag;
	
}COLOR;

COLOR color[NCOL];

int main(int argc, char *argv[]) {
	
	
	init();
	
	
	return 0;
}


void sw1(int s1, int s2){
	
	
	while(FALSE==s1 && TRUE==s2){
		
		

		color[0].flag=TRUE;
		printf("%s",color[0].COLOR);
		usleep(1000000);
		color[0].flag=FALSE;
		
		color[1].flag=TRUE
		printf("%s",color[1].COLOR);
		usleep(1000000);
		color[1].flag=FALSE;
		
		color[2].flag=TRUE;
		printf("%s",color[2].COLOR);
		usleep(1000000);
		color[2].flag=FALSE;
		
		color[3].flag=TRUE;
		printf("%s",color[3].COLOR);
		usleep(1000000);
		color[3].flag=FALSE;
		
		color[4].flag=TRUE;
		printf("%s",color[4].COLOR);
		usleep(1000000);
		color[4].flag=FALSE;
	
	}
	
	for(i=NCOL;i>0;i--){
		
		if(TRUE==color[i].flag && FALSE==s1 && TRUE==s2){
			
			
			
		}
		
	}
	
}


void initsw1(){
	
	color[0].COLOR="VERDE";
	color[1].COLOR="AZUL";
	color[2].COLOR="MORADO";
	color[3].COLOR="ROJO";
	color[4].COLOR="AMARILLO";
	
	for(i=NCOL;i>0;i--){
		
		color[i].flag=FALSE;
		
	}
	
	
}

void verde(){
	
	
	
}
