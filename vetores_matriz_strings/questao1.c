#include <stdio.h>

/*
Faça um programa que leia um valor inteiro N que representa o tamanho do vetor.
Em seguida, defina um vetor X de inteiros de tamanho N.
O programa deve fazer a leitura de N valores inteiros e salvá-los no vetor X.  
Após isso, o programa deve copiar os elementos das posições pares do vetor X para um novo vetor Y. 
Como saída, o programa deve apresentar na saída “Y[i] = z”, onde i é a posição do vetor e z é o valor armazenado naquela posição.
*/
int main (){

  int num;
  int x[100];
  int y[100];

  printf("Quantos valores voce quer adicionar?");
  scanf("%d", &num);

  printf("Coloque os inteiros para salvar no vetor:");
  for (int  i = 0; i < num; i++){
    scanf("%d", &x[i]);
  }
  int j=0;
  for (int i = 0; i < num; i++){
    if(i % 2 == 0){
      y[j] = x[i];
      j++; 
    }
  }

  for (int i = 0; i < j; i++){
    printf("Y[%d] = %d\n", i, y[i]);
  }

  return 0;
}

