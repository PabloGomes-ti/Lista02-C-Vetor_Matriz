/*4 Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
pares existem no vetor. Apresente a m?dia dos valores pares*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	system ("color e");
	int i, infoImpares=0 ,infoPares=0,Soma=0;
	int N [10];
	float media;
	for(i=0; i<10 ; i++	){
		printf(" \nDigite os elementos inteiros ",i);
		scanf("%i",&N[i]);
		if (N [i] %2 == 0){
			infoPares+=1;
		}else{
			infoImpares+=1;
		}
	}
	printf("\n");
	printf("Vetor com elementos Pares = %i: ",infoPares);
	Soma = N[i];
	media = Soma/N[i];
	printf(" A media = %.2f: ",media);
	scanf("%i",&N[i],media);	
	return 0;
	
}
