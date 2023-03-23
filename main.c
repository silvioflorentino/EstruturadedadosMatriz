#include<stdio.h>
  int main(){
  float A[4][4];
  int  i, j, cont;
  float somapar, somaimpar;
  float media;
  somaimpar = 0;
  somapar = 0;
  cont = 0;
  for(i = 0; i < 4; i++){      
    for(j = 0; j < 4; j++){
      printf("\nDigite um numero inteiro: ");
      scanf("%f", &A[i][j]);
    }
  }
  for(i = 0; i < 4; i++){      
    for(j = 0; j < 4; j++){      
      if (j % 2 == 0) {     
         somapar= somapar + A[i][j];
         cont = cont + 1;   
      }
      else {
        somaimpar = somaimpar + A[i][j];
      }
    }
   }
   media = somaimpar/cont;

   printf("\nA soma dos valores das colunas impares e %f", somaimpar);
   printf("\nA media dos valores das colunas pares e %f", media);

}
