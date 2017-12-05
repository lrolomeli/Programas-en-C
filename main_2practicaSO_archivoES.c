#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 20

typedef struct{
	
	char temp_us[N];
	int nc;
	
}rcguser; //recognition user


void search();

	rcguser teu[N];
	rcguser tep[N];

int main(int argc, char *argv[]) {
	
	
	int i, eq, eq1;
	char user[N];
	char pwd[N];
	
	
	
	search();
	printf("user: ");
	fflush(stdin);
	scanf("%s", &user);
	for(i=0; i<N; i++){
	
		eq = strcmp(user, teu[i].temp_us);

		
		if(eq==0){
			printf("password: ");
			fflush(stdin);
			scanf("%s", &pwd);
			eq1 = strcmp(pwd, tep[i].temp_us);
		
			if(eq1==0)
				printf("Welcome to your session\n");	
		}
	}
	
	return 0;
}


void search(){
	
	FILE *f;
	volatile int i=0, j=0, pwdflag=0, a;
	char aux;

	f = fopen("passwd.txt","r");
	
	if(f == NULL){
		printf("The file couldn't been opened'. \n");
		exit(1);
	}
	
	while(aux != EOF){
		aux = fgetc(f);
		
		if(aux!=':' && pwdflag == 0){
			teu[i].temp_us[j] = aux;
			j++;
		}
		
		else if(aux!=',' && pwdflag == 1){
			tep[i].temp_us[j] = aux;
			j++;
		}
		
		else if(aux==':'){
			teu[i].nc = j;
			pwdflag = 1;
			j=0;
		}
		
		else if(aux==','){
			tep[i].nc = j;
			pwdflag = 0;
			j=0;
			i++;	
		}
		
	}
	
	
	fclose(f);
	
}
