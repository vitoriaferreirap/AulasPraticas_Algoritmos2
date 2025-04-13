#include <stdio.h>

//função de soma c++ função com retorno
double somar(double a, double b){//tipo retorno double, e parametros a e b
  return a+b;//vai retorna um valor double que será a soma
}
//função de subtração, função sem retorno;
void mostrarSubtracao(double a, double b){ //função retorna nada, faz o processamento e já a impressão
  double sub = a-b;
  printf("\nSubtracao e: %lf ", sub);
}

int main() {
  double x, y, resultado;
  printf("\nInforma dois numeros decimais:\n");
  scanf("%lf", &x);
  scanf("%lf", &y);
  resultado = somar(x,y); //chamando função e passando x e y com os valor, ela ira receber x e y nos paramentros a e b, e retornara a soma
  printf("\nSoma = %lf", resultado); //apos retorno da função imprimimos o resultado

  mostrarSubtracao(x,y); // passando argumentos para a função que chamou
  return 0;
}