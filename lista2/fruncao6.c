#include <stdio.h>
/*Implemente uma nova função chamada fatoracao que recebe um número inteiro e retorna o fatorial deste número.

Implemente também a função soma_fat que recebe como parâmetro um número x
e utiliza a função fatoração para calcular o somatório da fatoração de 1 até n.*/

int fatoracao(int a){
  int fat = 1;
  for(int i=1; i <= a; i++){
    fat = fat * i;
  }
  return fat;
}

int soma_fat( int a){
int soma = 0;
for(int i =1; i<=a;i++){
  soma = soma + fatoracao(i);
}
return soma;
}

int main(){
  int n, x;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d", &x);
    printf("%d", soma_fat(x));
  }

  return 0;
}