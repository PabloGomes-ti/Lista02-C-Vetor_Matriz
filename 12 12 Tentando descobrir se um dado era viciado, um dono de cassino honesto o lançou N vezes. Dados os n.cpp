/* 12 Tentando descobrir se um dado era viciado, um dono de cassino honesto o lan�ou N vezes. Dados os n
resultados dos lan�amentos que devem ser armazenados em um vetor, determinar o n�mero de ocorr�ncias
de cada face*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	int n, i, vetor [ 6 ], lado;

printf ( " Digite o n� de vezes que o dado foi lan�ado: " );
scanf ( " %d " , & n);

	for (i = 1 ; i <= 6 ; i ++)
	{
	vetor [i] = 0 ;	
	}

	for (i = 1 ; i <= n; i ++)
	{
	printf ( " Digite a face do dado: " );
	scanf ( " %d " , & lado);
	vetor [lado] ++;
	}

	for (i = 1 ; i <= n; i ++)
	{
	if (vetor [i]! = 0 ) { printf ( " A face %d caiu %d vezes. \ n " , i, vetor [i]); }	
	} 

return  0 ;
	
	
	
	
}
