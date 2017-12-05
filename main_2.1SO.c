#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define N 30

int main(){
	
	char exit[N] = "exit\n";
	char shutdown[N] = "shutdown\n";
	
	char export1[N] = "export";
	char export2[N];
	char export3[N];
	
	char echo[N] = "echo";
	char echo2[N] = "echo $";
	
	char echo3[N];
	char echo4[N];
	
	char var_value[N];
	char var_name[N];
	
	char comm[N];
	char comm2[N];
	
	int i, j, k, p, l;
	int nu=0;
	int largo = strlen(comm);
	

	while(strcmp(comm, exit)!=0&&strcmp(comm, shutdown)!=0){
	
		fflush(stdin);
		fgets(comm, N, stdin);
		for(i=0;i<6;i++)
		{
			export2[i] = comm[i];
		}

		for(j=0;j<4;j++)
		{
			echo3[j] = comm[j];
		}

		for(j=0;j<6;j++)
		{
			echo4[j] = comm[j];
		}


		if(strcmp(export2, export1)==0)
		{
			printf("Creando variable...\n");
			for(k=7;k<N;k++){
				if(k>=7&&k<strlen(comm))
					export3[nu] = comm[k];
				nu++;
			}

			nu=0;

			if(~(putenv(export3)))
				printf("Variable creada\n");
		}

		else if(strcmp(echo2, echo4)==0)
		{
			printf("Mostrando contenido de variable...\n");

			for(l=6; comm[l]!='\n';l++)
			{
				var_value[l-6]=comm[l];
			}


			char *name = var_value;
			char *value;
			value = getenv(name);
			printf("El valor de tu variable es: \n%s",value);

		}

		else if(strcmp(echo, echo3)==0)
		{	
			printf("Mostrando variable...\n");

			for(l=5; comm[l]!='\n';l++)
			{
				var_name[l-5]=comm[l];
			}
			printf("Tu variable se llama: %s\n", var_name);
		}

		else
		{

			for(p=0;p<=N;p++)
			{
				comm2[p]='\0';
			}
			
			
			for(p=0;p<=largo-2;p++)
			{
				comm2[p]=comm[p];
			}

			
			printf("Ejecutando comando: %s\n", comm2);
			
			pid_t pro;
			pro=fork();
			if(pro==0)
				execlp(comm2, comm2, NULL);

		}
	
	}
	
	if(strcmp(comm, exit)==0)
	{
		return 0;
	}

	if(strcmp(comm, shutdown)==0)
	{		

		printf("Terminando, espere...\n");
		execlp("killall", "killall", "init", "getty", "sh", NULL);
	}



}
