#include <stdio.h>
#include <stdlib.h>
char abreAqu(char *arq, char *saida)
{
	while(!feof(arq))
	{
		saida = fgetc(arq);
	}
	return saida;
}

int main()
{	char *arq,*saida; 
	arq = fopen("cygwin64\bin\exer\aula.txt","r"); 
	fgets()
	fprintf("%s",abreAqu(arq,saida));
	return 0;
}