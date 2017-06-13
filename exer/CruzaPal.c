#include <stdio.h>
#include <string.h>
#include <math.h>

int Potencia(int base, int exp)
{	int total,cont;
	total = base;
	cont = 1;
	if(exp == 0){
		return 1;
	}
	while(cont < exp){
		total = total*base; 
		cont++;
	}
	return total;
}

int contastr(char *strA)
{	
	unsigned int cont = 0; 
	
	while(strA[cont] != 0)
	{
		cont++;
	}
	
	return cont;
}
// print %d c da a posiçao na tabela asci
//print %c me da a "letra"

long int Atoi(char* vet)
{
	unsigned long int num,total,pot,tam,i,sinal; 
	total = 0;
	tam = contastr(vet);
	pot = tam-1;
	
	for(i =0;i < tam;i++)
	{
		
		num = vet[i] - 48;
		total += num * Potencia(10,pot);
		pot--;
		
	}
	return total;
	
	
}


int main(int argc, char **argv){
	/*FILE *Arq;
	char palavra;
	
	Arq = fopen("palavras.txt","r");
	fscanf(Arq,"%c",palavra);
	
	while(!feof(Arq)){
		fscanf(Arq,"%s",palavra);
		printf("%c",palavra);
	}*/
	char pal[] = "1234";
	long int a,b;
	a = 0 ;
	b = 0;
	
	a = Atoi(pal);
	b = Potencia(4,10);
	printf("%d",a);
	
	return 0;
	
}