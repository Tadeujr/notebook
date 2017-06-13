#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
	char* nome;
	int idade;
	double sal;
}pessoa;

int main(){
	
	pessoa* p;
	
	p = (pessoa*) malloc(sizeof(pessoa));
	p -> nome = "tadeu";
	p -> idade = 27;
	p -> sal = 200.0;
	
	printf("%s %d %.2f", p->nome, p->idade, p->sal);
}