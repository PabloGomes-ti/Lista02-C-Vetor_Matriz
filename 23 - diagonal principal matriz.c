
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,num_Aleatorio;
  
  do{
    
		if(n>=101 || m>=101){
			printf("\n O tamanho m�ximo � 100! \nTente outra vez\n\n");
			printf("\n Digite o n�mero de linhas:\n");
    	scanf("%d",&n);
    	printf("\n Digite o n�mero de colunas:\n");
      scanf("%d",&m);
		}else{
			printf("\n Digite o n�mero de linhas:\n");
    	scanf("%d",&n);
	    printf("\n Digite o n�mero de colunas:\n");
	    scanf("%d",&m);
		}
	
	}while(n>=101 || m>=101);
  
	
	
	int matriz[n][m];
	
	printf("\n Gerando a matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      num_Aleatorio = rand() % 10;
			printf("%d ",num_Aleatorio);
			matriz[l][c]=num_Aleatorio;
		}
    printf("\n");
	}
	
	printf("\n A matriz gerada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n\n A diagonal Principal �:");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
			
		}

	}
    return 0;
}
