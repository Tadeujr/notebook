#include <stdio.h>
#include <string.h>

/* Questao 1 */

void max_min(int * vet, int tam){

	unsigned int i, maior,menor;

	maior = vet[0];
	menor = vet[0];

	for( i = 1; i < tam ; i++){
		if(vet[i] > maior ){
			maior = vet[i];
		}
		if(vet[i] < menor){
			menor = vet[i];
		}
	} 

	printf("maior = %d menor %d\n", maior,menor);
}


void juntaStr(char*A,char*B,char*C){

	int i,tamA,tamB,tamC,tamD,pos_a,pos_b,pos_c;
	pos_a = pos_b = pos_c = 0;
	
	tamA = strlen(A);
	tamB = strlen(B);
	tamC = strlen(C);
	tamD = (tamA+tamB+tamC)-1;

	char D[tamD];

	for(i=0; i < tamD; ){
		
		if(tamA > 0){
			D[i] =  A[pos_a];
			i++;
			pos_a++;
			tamA--;
		
		}
			

		if( tamB > 0){
			D[i] =  B[pos_b];
			i++;
			pos_b++;
			tamB--;
		
		}


		if(tamC > 0){
			D[i] =  C[pos_c];
			i++;
			pos_c++;
			tamC--;
		}
	}

	printf("%s\n",D);

}




int fat(int n){
	unsigned int total, i;
	total = 1;

	if((n==1) || (n==0)){
		return 1;
	}

	for(i=1;i<=n;i++){
		total *= i ;
	}
	return total;

}

void somafibo(int n){
	double resultado ; 
	resultado = 0.0;
	int i;

	for(i=1; i<=n ;i++){
		resultado =  resultado + ( 1.0 / fat(i));	
	}
	printf(" total %f \n", resultado);
}

double pot(int base, int exp)
{	int total,cont;
	double expneg;
	total = base;
	
	
	if(exp == 0){
		return 1;
	}

	if(exp > 0 ){
		cont = 1;
		while(cont < exp){
			total = total*base; 
			cont++;
		}

	}else{
		cont = -1;
		while(exp < cont){
			
			total = total * base; 
			cont--;
		}
		
		expneg = 1.0/ total;
	
	}

	if(exp > 0){
		return total;
	}

	return expneg;
}

long int atoi(char* vet)
{
	unsigned long int num,total,exp,tam,i; 
	total = 0;
	tam = strlen(vet);
	exp = tam-1;
	
	for(i =0;i < tam;i++)
	{
		
		num = vet[i] - 48;
		total += num * pot(10,exp);
		exp--;
		
	}

	return total;
}
 
void atof(char * vet)
{  int i,pos_ponto,num,exp;
	double total,soma;
	i = 0;
	total = soma = 0.0;
	exp = 1;
	pos_ponto = 0;



	for( i = 0; vet[i] != '.';i++){
		pos_ponto++;
	}

	i = 0;

	if(vet[0] == '-' || vet[0]=='+'){
		i = 1;
	}

	for( ; i < pos_ponto; i++){
		num = vet[i] - '0';
		soma += num * pot(10,(pos_ponto-(i+1)));

	}
	
	for(i = pos_ponto+1; vet[i] !='\0'; i++){
		num = vet[i] - '0';
		total += num /pot(10,exp);
		exp++;

	}

	soma = soma + total;

	if(vet[0]=='-'){
		soma = soma *(-1);
	}

	
	printf("%f\n", soma);
	



}


int decimal(char * vet){
	unsigned long int num,total,exp,tam,i; 
	total = 0;
	tam = strlen(vet);
	exp = tam-1;
	
	for(i =0;i < tam;i++)
	{
		
		num = vet[i] - 48;
		total += num * pot(2,exp);
		exp--;
		
	}

	return  total;
}

void convert (char * vet){
	int cont,i,j,num;
	int resultado[20],saida[20];
	i = 0;
	j=0;
	cont = 0;
	num = decimal(vet);

	 for(i=0; num > 7; i++){

	 	resultado[i] = num % 7;
	 	num = num / 7;
	 	cont++;

	 }
	 resultado [cont] = num;
	 
	 for(i=cont; i >= 0;i--){
	 	saida[j] = resultado[i];
	 	printf("%d", saida[j]);
	 	j++;
	 }
}


int main(){
	// Questão 1	
	int vet[] = {2,3,0,4,5,90};
	//max_min(vet,6);

	//Questão 2
	char A[] = {'a','b','c'};
	char B[] = {'A','B','C','D'};
	char C[] = {'1','2','3','4'};
	juntaStr(A,B,C);
	
	// Questao 3
	//somafibo(7);
	
	// Questão 4
	//atof("-4.567");
	
	// Questao 5
	//convert("1010");

return 0;
}