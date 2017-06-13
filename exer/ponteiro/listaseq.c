#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	struct no* proximo;
	int item;
	
}No;

typedef struct fila{
	No* inicio;
	int tam;
}Fila;

No* criaNo(int i){
	No* n;
	n = (No*) malloc(sizeof(No));
	n -> item = i;
	n -> proximo = NULL;
		
	return n;
}
 
 Fila* criaFila(){
	Fila* f;
	f = (Fila*) malloc(sizeof(Fila));
	f-> inicio = NULL;
	f-> tam = 0;
	return f;
 }
 
void append(Fila *f, No *n){
	if (f -> tam != 0){
		n -> proximo = f -> inicio; // caso ja exista um nó na fila
	}
	f -> inicio = n;	//isso ele sempre vai fazer, indepedente se existe nó na fila ou nao!
	f -> tam++;	 //nao preciso comentar isso XD
}

void imprime(Fila * f){
	No* aux; //uma variavel q vai percorrer a fila.
	for(aux = f -> inicio; aux != NULL; aux = aux -> proximo){ //isto é um for de lista! veja q o aux começa do inicio da lista, isto é, ele aponta para o inicio da lista. percorre até achar um valor NULL, ou seja, vai até o ultimo elemento.
		printf(" %d", aux -> item); // enquanto ele vai percorrendo a lista eu vo imprmindo os valores dos nós.
	}
}

int main(){
	Fila *f; 
	No *n;
	f = criaFila(); // veja q eu só crio uma unica vez uma fila. Caso vc queira duas filas, basta criar um f2.
	
	for(int i = 0; i < 4; i++){
		n = criaNo(i); // toda vez q eu precisar de um nó, eu chamo o meu criano. Pq dentro da função eu do um malloc para somente um Nó;
		append(f,n); // depois de mallocar espaço para o nó e para a fila, basta somente inserir esse nó, isto é, mexer nos ponteiros.
	}
	imprime(f); // tambem nao preciso comentar isto XD
	
	
}	
	