/* 19 Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o maior e
valor da matriz*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#define TAM_MAX 10

int main(){
	double Vet1[TAM_MAX];
    double Maior;

    for(i=0; i<TAM_MAX; i++){
    	scanf("%f",&Vet1[i]);
	}

    Maior = Vet1[0];
    for(i=0; i<TAM_MAX; i++){
	}
       if Vet1[i] > Maior
          Maior = Vet1[i];

    printf("O maior elemento é %f\n",Maior);
	
	return 0;
	
}



