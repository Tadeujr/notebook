#include <stdio.h>
#include <stdlib.h>


void pint(int*n){
	printf(" %d",*n);
}

void pstr(char * mito){
	printf(" %s",*mito);
}

void  pponteiro(void *x){
	printf("%");
}

int main(){

	char *s = 'tadeu';
	int *i = 27;
	void * x = NULL;
}