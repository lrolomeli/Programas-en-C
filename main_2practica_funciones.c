#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


double factorial(int a);

int main() {
	
	int x; 
	double fact;
	
	x=1;
	while(x!=0){
	
	scanf("%i",&x);
	fact=factorial(x);
	printf("%f\n",fact);

}

	system("pause");
	return 0;
}

double factorial(int a){
	
	int i;
	double aux=1.0;
	
	for(i=1;i<=a;i++){
		
		aux*=i;
		
	}
	return aux;
}
