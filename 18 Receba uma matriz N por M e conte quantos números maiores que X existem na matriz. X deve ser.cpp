/*18 Receba uma matriz N por M e conte quantos números maiores que X existem na matriz. X deve ser
informado pelo usuário*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
 #include <stdio.h>
#include <stdlib.h>
int dobro(int x)
{
    x = 2*x;
    return x ;
}
int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);
    n = dobro(n);
    printf("O dobro : %d\n",n);
    return 0 ;
}





