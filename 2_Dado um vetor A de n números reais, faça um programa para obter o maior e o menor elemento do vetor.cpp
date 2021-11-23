/*2. Dado um vetor A de n números reais, faça um programa para obter o maior e o menor elemento do vetor,
apresente o vetor, maior e menor valor*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	 int a, maior=0, menor=0;
    float Vetor[10];
    
    printf("digite 10 notas");
    printf("\n");
    for (a=0;a<10;a++)
    {
    printf("Vetor %d : \n", a+1);
    scanf("%f", &Vetor[a]);
}

        
        for(a=0;a<10;a++){
            if(Vetor[a]>maior){
                maior=Vetor[a];
            }
        }
     printf("o maior valor é %d", maior);
     
         for(a=0;a<10;a++){
                if(Vetor[a]<menor){
                menor=Vetor[a];
            }
        }
     printf("\n e o menor valor é %d", menor);

    

return 0;
	
	

}


