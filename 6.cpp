
/* #Escreve um programa que sorteio, aleatoriamente, N n�meros e armazene estes em um vetor. Em seguida, o
usu�rio digita um n�mero e seu programa em C deve acusar se o n�mero digitado est� no vetor ou n�o. Se
estiver, diga a posi��o que est�*/

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
