// exercicio 4 - aula 11:
// Escreva um programa que peça ao usuário para digitar 3 números reais, armazene-os em um vetor e calcule a soma desses números. Imprima o resultado.

#include <stdio.h>

int soma(int n[], int tamanho);

int main() {
  int vetor[3];

  printf("Digite 3 números inteiros:\n");
  scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);

  int resultado = soma(vetor, 3);

  printf("Soma: %d\n", resultado);
}

int soma(int n[], int tamanho) {
  int total = 0;

  for(int i = 0; i < tamanho; i++) {
    total += n[i];
  }
  return total;
}