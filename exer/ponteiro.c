#include <stdio.h>
#include <stdlib.h>

void coloca(int** matriz){
	int cont = 0;
	for(int i =0; i < 100; i++){
		for(int j =0; j < 100; j++){
			
			matriz[i][j] = cont;
			cont++;
		}
	}	
	
}

void imprime(int** matriz){
	
	
	for(int i =0; i < 100; i++){
		for(int j =0; j < 100; j++){
			printf(" %d",matriz[i][j]);
		}
		printf("\n");
	}
}




int main(){
	
	int ** matriz;
	matriz = 0;
	matriz = (int**)malloc(sizeof(int*) * 100);
	
	for(int i = 0; i < 100; i++){
		matriz[i] =(int*) malloc(sizeof(int) * 100);
	}
	
	coloca(matriz);
	imprime(matriz);



return 0;


}