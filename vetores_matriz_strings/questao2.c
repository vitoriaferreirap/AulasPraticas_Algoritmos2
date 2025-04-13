#include <stdio.h>

/*Faça um programa para ler uma frase da entrada padrão
e apresentar na saída padrão cada um dos caracteres da frase impressos em uma
linha.*/

int main() {
  char frase[100];
  scanf("%[^\n]", frase);

  for (int i = 0; frase[i] != '\0'; i++) {
    printf("%c\n", frase[i]);
  }
  return 0;
}