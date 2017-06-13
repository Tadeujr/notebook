#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Faça um arquivo com "n" alunos, "n" sendo aleatorio.
Seu programa deve ser capaz de gerar nomes aleatorios, 
matricula aleatorias. mas nao repetidas, idade, 4 notas, e imprimir apos gerar tudo 
 
*/

struct aluno
{	char nome[100];
	int matricula;
	int  idade;
	double nota[4];
	
};

int geraMat(){
	
	int num;
	srand(time(NULL));
	num = (rand()%999999999) + 1;
	
	
	return num;
}

int geraNota(){
	
	int num;
	srand(time(NULL));
	num = (rand()%99) + 1;
	
	
	return num;
}
/*
void geraTurma(char *nome)
{	
	struct aluno pessoa;
	FILE *saida;
	saida = fopen("turma.txt","w");
	int i;
	
	pessoa.nome = nome;
	pessoa.matricula = geraMat();
	
	for(i=0; i<4; i++){
		pessoa.nota[i] = geraNota(); 
	}
	
	fprintf(saida,"%c", pessoa);
	
	fclose(saida);
	
}*/
void  turma(){
	struct aluno pessoa;
	
	char nomes[][100] ={"Abelcy","Abele","Abelina","Abeline","Abelita","Abella","Abenilde","Abeona","Aberanizia","Aberval","Aberlandia","Abgah","Abgai","Abgail","Abgayl","Abiak","Abia","Abias","Abiel","Abiézer","Abigai","Abigair"};
		stpcpy(pessoa.nome ,nomes[0][1]);
	
	return pessoa.nome;
	
 }
 
 
int main(int argc, char **argv)
{	
	
	/*turma("nomes.txt","turma.txt");
	struct aluno pessoa;
	pessoa.nome = "Tadeu";
	printf("%s",pessoa.nome);
		int a = NumAle();
	printf("%d",a);*/
	//entradaAlunos("nomes.txt");
	//printf("%d",geraMat());
	printf("%s",turma());
	
	return 0;
	
	
	
}