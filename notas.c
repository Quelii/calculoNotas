/*Desenvolver um programa que possua um menu principal com as seguintes op��es:

1 - criar matriz de 5 x 5 que ser� preenchida por valores aleat�rios.
2 - exibir a matriz
3 - alterar todos os valores que sejam menores que um determinado valor informado por um outro valor informado.
4 - alterar o �ltimo valor informado
5 - exibir o maior e o menor valor da matriz.
0 - fechar o programa.*/



#include<stdio.h>
#include<locale.h>

 int main (){
 	
 	setlocale(LC_ALL, "portuguese");
 	int matriz[5][5], i,j;

 		 void adicionar(){
		int i,j;
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
				printf("Digite o %do Valor: ",i+1,j+1);
				scanf("%d",& matriz[i][j]);
							}
}
}


void remover(){
	int valor,i,j;	
			printf("\n\nDigite o valor que deseja remover: ");
			scanf("%d",&valor);
				for(i=0;i<5;i++){
						for(j=0;j<5;j++){
					if(valor==matriz[i][j]){
						matriz[i][j]=0;
										}
								}
							}
}
 	for(i=0;i<5;i++){
 		for (j=0;j<5;j++){ 
  			printf("ELEMENTOS [%d] [%d]",i,j);
 			scanf("%d",&matriz[i][j]);
 	}		
 	}
 		for(i=0;i<5;i++){
	 		for (j=0;j<5;j++){ 
	  			printf("\n MATRIZ [%d] [%d] ,%d", i,j,matriz[i][j]);
	 		
	 	}
 	}
 	
 	

	 
	 return 0;
 	}
 	//printf("%d",idn[i][j]);