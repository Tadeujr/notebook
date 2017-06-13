#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void liberamapa(MAPA* m){
	for(int i =0; i < m->linhas; i++){
		free(m->matriz[i]);
	}
	free(m->matriz); 
}

void alocamapa(MAPA* m){
	m->matriz = malloc(sizeof(char*) * m->linhas);
	for(int i =0; i < m->linhas; i++){
		m->matriz[i] = malloc(sizeof(char) * (m->colunas+1));
	}

}

void lemapa(MAPA* m){
/*char mapa[5][11]; // lembrar do /0*/

	FILE* arq;
	arq = fopen("mapa.txt","r");

	if(arq == 0){
		printf("Erro na leitura do mapa \n");
		exit(1);
	}

	fscanf(arq,"%d %d",&(m->linhas), &(m->colunas) );

	alocamapa(m);

	for(int i =0; i < 5; i++){
		fscanf(arq,"%s",m->matriz[i]);
	}

	fclose(arq);	
}

void imprimemapa(MAPA* m){
	for(int i =0; i< 5; i++){ /* no c imprime linha a linha direto da coluna legal XD*/
		printf("%s\n", m->matriz[i]);
	}		
}