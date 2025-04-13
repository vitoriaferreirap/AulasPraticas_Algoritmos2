#include <stdio.h>
/*Implemente uma função chamada multiplicacao que recebe dois números inteiros e retorna o resultado da multiplicação destes números.
Entrada*/

int multiplicacao(int a, int b){
  return a * b;
}

int main(){
  int n, a,b;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d %d", &a, &b);
    printf("%d\n", multiplicacao(a,b));
  }
  return 0;
}