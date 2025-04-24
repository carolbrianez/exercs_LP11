//exercicio 3 - aula 11:
//3 - Crie um programa em C que recebe 4 notas, armazene as notas em um vetor. Some o total das notas usando for, guarde na variável total. Mostre o resultado com duas casas decimais.

#include <stdio.h>
#define NOTA 4 

int main() {
  double notas[NOTA];
  double total = 0.0;

  printf("Digite quatro notas:\n");
  for (int i = 0; i < NOTA; i++) {
    scanf("%lf", &notas[i]);
  }

  for (int i = 0; i < NOTA; i++) {
    total += notas[i];
  }

  printf("A soma total das notas é: %.2f\n", total);

  return 0;
}
