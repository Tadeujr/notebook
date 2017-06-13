#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"


MAPA m;


int acabou(){
	return 0;
}

void move(char direcao){
	int x,y;

	for(int i = 0 ; i < m.linhas; i++){
		for(int j=0; j< m.colunas; j++){
			if(m.matriz[i][j]=='@'){
				x = i;
				y = j;
				break;
			}

		}
	}


	switch(direcao){
		case 'a': 
			m.matriz[x][y-1] = '@';
			break;
		
		case 'w':
			m.matriz[x-1][y] = '@';
			break;

		case 's':
			m.matriz[x+1][y] = '@';
			break;

		case 'd':
			m.matriz[x][y+1] = '@';
			break;	
	}

	m.matriz[x][y] = '.';
}

int main(){

	/*int **v = malloc(sizeof(int*) * linhas);  alocando espaço de memoria sizeof pega o tamanhao do tipo no SO do computador, matriz e um ponteiro de ponteiro
	for(int i =0; i < linhas; i++){
		v[i] = malloc(sizeof(int)*colunas);
	}

	for(int i =0; i < linhas; i++){
		free(v[i]);
	}
	free(v);*/


	lemapa(&m);

	do{
		imprimemapa(&m);
		char comando;
		scanf(" %c",&comando);
		move(comando);

	} while(!acabou());

	liberamapa(&m);




	return 0;
}