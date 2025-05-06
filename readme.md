# Aula 11: Vetores, Constantes e Funções em C

## Sumário
1. [Array](#array)
   1. [Exercício 1](#exercício-1)
   2. [Definição](#definição)
   3. [Acesso](#acesso)
   4. [Definição com valores](#definição-com-valores)
2. [Constantes](#constantes)
3. [Exercício 2 e 3](#exercício-2-e-3)
4. [Vetor como parâmetro](#vetor-como-parâmetro)
   1. [Exercício 4](#exercício-4)
   2. [Passagem por valor e por referência](#passagem-por-valor-e-por-referência)
5. [Exercícios 5 a 10](#exercícios-5-a-10)
6. [Entrada por arquivo](#entrada-por-arquivo)
   1. [Exercício 11](#exercício-11)
7. [Envio](#envio)

---

## Array

Vetores são sequências de elementos armazenados em posições de memória contíguas. Por exemplo:

```c
double notas[4];

notas[0] = 7.3;
notas[1] = 5.8;
notas[2] = 9.2;
notas[3] = 8.5;

printf("Nota: %f.\n", notas[0]);
printf("Nota: %f.\n", notas[1]);
printf("Nota: %f.\n", notas[2]);
printf("Nota: %f.\n", notas[3]);

double total = notas[0] + notas[1] + notas[2] + notas[3];
double media = total / 4.0;

printf("Media: %f.\n", media);
```

### Exercício 1

Crie um programa em C que declare um vetor de 5 números inteiros, inicialize-o com valores de sua escolha e imprima cada elemento do vetor junto com seu índice, seguindo o exemplo:

```
x[0] = 2;
x[1] = 3;
...
```

### Definição

Vetores são definidos com o seguinte formato:

```c
tipo nome[tamanho];
int v[5];
```

### Acesso

Para acessar um elemento no vetor, usamos colchetes `[ ]`:

```c
notas[1] = 5.8;
```

O primeiro elemento tem índice `0`.

### Definição com valores

Vetores podem ser inicializados com uma lista de valores:

```c
double notas[4] = { 7.3, 5.8, 9.2, 8.5 };
```

- Menos itens que o tamanho: os valores restantes recebem `0`.
- Mais itens que o tamanho: causa erro.
- Omitir o tamanho permite que ele seja inferido automaticamente:

```c
double notas[] = { 7.3, 5.8, 9.2, 8.5, 6.7 };
```

---

## Constantes

Constantes são usadas para valores imutáveis no código:

```c
#define TAMANHO 4

double notas[TAMANHO] = { 7.3, 5.8, 9.2, 8.5 };
```

As constantes são simbólicas e não podem ser alteradas.

---

## Exercício 2 e 3

- **Exercício 2:** Crie um programa que use uma constante `PI` com o valor `3.14159`. Calcule a área de um círculo com o raio digitado pelo usuário usando a fórmula `área = PI * raio * raio` e imprima o resultado.
- **Exercício 3:** Crie um programa em C que recebe 4 notas, armazene as notas em um vetor. Some o total das notas usando um laço `for`, guarde em uma variável `total` e mostre o resultado com duas casas decimais.

---

## Vetor como parâmetro

Ao passar um vetor para uma função, passamos o endereço do primeiro elemento. O nome do vetor é equivalente ao endereço do primeiro elemento.

Exemplo:

```c
#include <stdio.h>

int soma(int n[], int tamanho);

int main() {
  int vetor[2] = { 7, 8 };
  int resultado = soma(vetor, 2);

  printf("Soma: %d\n", resultado);
}

int soma(int n[], int tamanho) {
  int total = 0;

  for (int i = 0; i < tamanho; i++) {
    total += n[i];
  }
  return total;
}
```

### Exercício 4

Escreva um programa que peça ao usuário para digitar 3 números reais, armazene-os em um vetor e calcule a soma desses números. Imprima o resultado.

---

### Passagem por valor e por referência

A passagem de vetores para funções é feita por referência, ao contrário de variáveis simples que são passadas por valor. Por exemplo:

```c
void por_valor(int x);
void por_referencia(int *x);
```

---

## Exercícios 5 a 10

- **Exercício 5:** Crie um programa em C que recebe 2 números reais, armazene os números no vetor chamado `numeros`.
- **Exercício 6:** Crie uma função `media()` que recebe o vetor `numeros`, calcula e retorna a média dos valores.
- **Exercício 7:** Crie uma função `dobro()` que recebe o vetor `numeros`, multiplica cada número por 2.0 e retorna a nova média.
- **Exercício 8:** Ajuste o programa para mostrar o vetor antes de usar `media()` e o vetor após usar `dobro()`.
- **Exercício 9:** Crie uma função `maior()` que recebe o vetor `numeros` e deixe o maior valor em primeiro lugar. Exemplo:
  ```
  Antes: 7 8
  Depois: 8 7
  ```
- **Exercício 10:** Ajuste o programa para mostrar o conteúdo do vetor `numeros` antes de chamar `maior()` e depois de chamar `maior()`.

---

## Entrada por arquivo

A entrada de dados pode ser feita a partir de arquivos para maior flexibilidade.

---

### Exercício 11

Crie um programa que leia um arquivo contendo números separados por espaço. Some os números e imprima o resultado.

---
