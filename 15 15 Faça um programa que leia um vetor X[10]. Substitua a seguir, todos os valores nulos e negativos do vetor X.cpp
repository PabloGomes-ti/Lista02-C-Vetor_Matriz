/*15 Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X
por 1. Em seguida mostre o vetor X*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main ()
{
    int n [10], temp, i, j;
    for (i = 0; i <10; i ++)
        scanf ("% d", & n [i]);
    for (i = 0; i <10; i ++)
    {
        if (n [i] <= 0)
            n [i] = 1;
    }
    for (i = 0; i <10; i ++)
    printf ("X [% d] =% d \ n", i, n [i]);
    return 0;
}


