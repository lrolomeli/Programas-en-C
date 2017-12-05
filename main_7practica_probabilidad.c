#include <stdio.h>
#include <stdlib.h>
#define launch 10000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void dice_launch(int *v);
void printv(int *v);
void proba(int *v);

int main() {
	
	
	int v[]={0,0,0,0,0,0};
	
	dice_launch(v);
	printv(v);
	proba(v);
	system("pause");
	return 0;
}


void dice_launch(int *v){
	
	srand (time(NULL));
	
	int i, aux;
	
	for(i=0; i<launch; i++){
		
		aux = rand()%6;
		
		switch(aux){
		
		case 0: *(v+aux) += 1;
		break;
		case 1: *(v+aux) += 1;
		break;
		case 2: *(v+aux) += 1;
		break;
		case 3: *(v+aux) += 1;
		break;
		case 4: *(v+aux) += 1;
		break;
		case 5: *(v+aux) += 1;
		break;
		default: *v += 0;
		break;
		
		}
		
	}
	
}

void proba(int *v){
	
	int i;
	float stat;
	
		for(i=0; i<6; i++){
			
		stat = (*(v+i)) * .01;
		printf("%.1f %% \n",stat);
		
	}
	
}

void printv(int *v){
	
	int i;
	
	for(i=0; i<6; i++){
		
		printf("el numero %i del dado se repitio %i veces\n",i+1,*(v+i));
		
	}
	
}
