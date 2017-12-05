/*#include <stdio.h>
#include <stdlib.h>

#include<string.h>
#define N 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	
	char exit[N] = "export v=a\n";
	char aux[N];
	
	int i;
	int b=0;
	for(i=0; i<=N; i++){
		
		if(i>=7&&i<strlen(exit)){
			aux[b]=exit[i];
			b++;	
		}
		
	}
	printf("%s", aux);
	return 0;
	
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>
#define N 50


int main(){
	
	char exit[N] = "exit\n";
	char shutdown[N] = "shutdown\n";
	char export[N] = "export";
	char echo[N] = "echo";
	char export2[N];
	char export3[N];
	char echo2[N];
	char echo3[N];
	char comm[N];
	int i, j, k, nu=0;

	

	while(strcmp(comm, exit)!=0&&strcmp(comm, shutdown)!=0){
	
		fflush(stdin);
		fgets(comm, N, stdin);



		for(int i=0;i<6;i++){
			
			export2[i] = comm[i];
		}
		

		for(j=0;j<6;j++){

			echo2[j] = comm[j];
		
		printf("%s", echo2);
		
		if(strcmp(export2, export)==0)
		{	
			for(i=7;i<N;i++){
				if(i>=7&&i<strlen(comm))
					export3[nu] = comm[i];
				nu++;
			}
			printf("%s\n",export3);
			printf("Creando variable...\n");

			if(~(putenv(export3)))
				printf("variable creada\n");
		}

	
		
		
		if(strcmp(echo2, echo)==0)
		{
			printf("%s",echo2);
			const char *name = "var";
			char *value;
			nu=0;
			/*for(i=6;i<N;i++){
				if(i>=5&&i<strlen(comm))
					echo3[nu] = comm[i];
				nu++;
			}*/			
			printf("%s", echo3);
			printf("Mostrándo echo...\n");


			value = getenv(name);
			printf("%s",value);
		}
	
	}

	
	
	if(strcmp(comm, exit)==0)
	{
		return 0;
	}

	if(strcmp(comm, shutdown)==0)
	{		

		printf("Terminando, espere...\n");
		usleep(3000000);
		execlp("killall", "killall", "init", "getty", "sh", NULL);
	}



}
}

