#include <stdio.h>

/*Declare e implemente a função soma que lê da entrada padrão 
dois números inteiros e imprime uma linha com o resultado da soma destes números.*/

void soma(){
  int num;
  printf("Quantas somas voce quer fazer? ");
  scanf("%d", &num);

  for(int i=0; i<num;i++){
  int a, b;
  printf("Digite dois numeros inteiro: ");
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b);
}
}
int main (){
  soma();
  return 0;
}
