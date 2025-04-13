#include <stdio.h>

/*Implemente uma função chamada print, que recebe por parâmetro um inteiro N.
 Essa função deve imprimir N vezes a mensagem “Executado” na saída padrão.*/

void print(int n){
  for(int i =0; i<n;i++){
    printf("Executado\n");
  }
}

int main(){
  int n = 0;
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &n);
  print(n);
  return 0;
}