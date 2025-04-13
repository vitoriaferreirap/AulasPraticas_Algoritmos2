#include <stdio.h>

/*Implemente as seguintes funções abaixo:
int multiplica (int x1, int x2) que retorna a multiplicação de x1 por x2;
int quadrado (int x) que retorna o quadrado de x
int cubo (int x) que retorna x ao cubo
int pol_cubo(int a, int b, int c, int d, int x) que retorna ax³ + bx² + cx + d
Observe que nos exemplos abaixo temos a função main() chamando cada uma das funções que você irá desenvolver.*/

int multiplica (int a, int b){
  int x = a * b;
  return x;
}
int quadrada (int a){
  return a * a;
}
int cubo (int a){
  return a*a*a;
}
int pol_cubo(int a, int b, int c, int d, int x){
  return (a * x) * (a * x) * (a * x) + (b * x) * (b * x) + (c * x) + d;
}

int main(){
  int n;
  int a,b,c,d,x;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
    printf("%d %d %d %d %d", multiplica(a,b));
  }
  return 0;
}