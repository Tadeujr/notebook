#include <stdio.h>

int pota(int base, int exp)
{	int cont =0;
	int total = 1;
	
	if(exp == 0){
		return 1;
	}
	
	while(cont < exp)
	{
		total = total*base;
		cont++;
	}
	return total;
}

int contStr(char *vet)
{	int cont = 0;

	while(vet[cont] != 0){
		cont++;
	}
	
	return cont;
}

long int atoi(char *vet)
{
	unsigned long int num,total,tam,exp;
	unsigned int i,flag;
	
	total = 0;
	tam = contStr(vet);
	exp = tam -1;
	
	if(vet[0] == "-"){
		flag =1;
	}
	
	for(i=0 ; i < tam ; i++)
	{
		num = vet[i] - 48;
		total += num * pot(10,exp);
		exp--;
	}
	return total;
}

void juntaStr(char *palA, char *palB,char *novaStr)
{	unsigned int tam,i;
	tam = contStr(palA) + contStr(palB);
	novaStr[tam];
	i = 0;
	
	while(palA[i]!= 0)
	{
		novaStr[i] = palA[i];
		i++;
	}
	
	for(i=0;i<contStr(palB);i++){
		novaStr[contStr(palA)+i] = palB[i];
	}
	
}

int ehPrimo(int num)
{	
	int cont, div ,operacao;
	operacao = 0;
	cont = 0;
	div = 1;
	
	while(div <= num)
	{	operacao = (num % div);
		
		if(operacao == 0){
			cont++;
		}
		div++;
		
	}

	if(cont == 2)
	{
		return 1;
	}
	
	return 0;
}

void geraPrimo(int qtd)
{	int cont,lim, testa;
	cont = 1;
	lim = 1;
	
	while(cont > 0 )
	{	
		while(lim <= qtd){
			testa = ehPrimo(cont);
			
			if( testa == 1){
				lim++;
				printf("%d \n",cont);
			}
			cont++;
		}
		cont =-1;
		 
	}
}

int main(int argc, char **argv)
{	
	char pal[] = "rap lord";
	char pal2[] = "1234";
	int tam = contStr(pal)+contStr(pal2);
	char nova[tam]; 
	//int q = pot(2,10);
	//juntaStr(pal,pal2,nova);
	//printf("%s",nova);
	printf("%d",atoi(pal2));
	
	return 0;
}