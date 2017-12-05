#include <stdio.h>
#include <stdlib.h>
#define N 20
void cor(char *pal);

int main(){

	char* user;	
	
	printf("User:");
	fflush(stdin);
	fgets(user, sizeof(user), stdin);
	printf("%s",user);
	cor(user);
	printf("%s",user);
	
	
}

void cor(char *pal){
	
	int i;
	
	for(i=0; i>N; i++){
		
		if(*(pal+i)=='\n'){
			
			*(pal+i)='\0';
			
		}
		
	}
	
}
