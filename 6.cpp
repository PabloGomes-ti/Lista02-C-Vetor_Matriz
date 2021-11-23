
/* #Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
estiver, diga a posição que está*/

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main(int argc, const char * argv[]) {

int vet[10]; //variaveis
int i, aux;

for (i=0; i<10; i++) { 
printf( "Informe valor do vet[%d]:", i); 
scanf("%d", &vet[i]); //gravando dados
}
printf("digite valor para comparacao: " ); 
scanf("%d", &aux); //gravando dados

for (i=0; i<10; i++) { 
if (aux==vet[i]) { 
printf("O valor digitado esta na posicao vet[%d].", i); 
}
}

return 0;
}
