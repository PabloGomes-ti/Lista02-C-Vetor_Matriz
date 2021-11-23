/*5 Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA. Este
vetor será responsável por representar uma fita de um gene de limite de 50 bases. Gere o vetor
complementar ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G)*/
#include <stdio.h>
#include <string.h>

int main ( ) {
    char dna [50];
    int a, b, c=0;
    fflush(stdin);
scanf ("%s",dna);
b=strlen(dna);
for (a=0;a<b;a++)
if (dna[a]=='A' && dna[a+1]=='T' && dna[a+2]=='G')
c=1;
 if
 (c==1)
 printf("EXISTE");
 else
 printf("INEXISTENTE");
 return 0;
