#include <stdio.h>

void soma (int*resultado, int *a, int *b) /* quando eu passo um * estou falando que estou passando um endereço de memoria */
{
	*resultado  = *a + *b; /* para usar ou imprimir o conteudo da memoria tenho que usar o * */
	printf("%d", *resultado); 
}

int main()
{ 	
	int * resultado = 23; 
	int *a,*b;
	a = 2;
	b = 3;

	soma(&resultado, &a, &b); /* "&" estou passando o endereço de memoria para a função*/ 

	
	return 0;
}
/*
 public class Contato
 public string contato{get;set;}
 public int numero{get;set;}
*/