#include <stdio.h>

/*Implemente a função chamada comp que recebe dois valores double e retorna um inteiro 0 se os dois valores são iguais,
o valor 1 se o primeiro é maior que o segundo e -1 caso contrário.*/

int comp(double a, double b){
 if(a == b){
  return 0;
 }else if(a > b){
  return 1;
 }else {
  return -1;
 }
}

int main (){
  double x,y;
  int num; //numero de comparações que voce quer fazer
  printf("Digite o numero inteiro: ");
  scanf("%d", &num);
  for(int i=0; i<num; i++){
    printf("\n Insira dois valores decimais: ");
    scanf("%lf %lf", &x, &y);
    printf("%i", comp(x,y));
  }

  return 0;
}