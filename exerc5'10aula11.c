// exercício 5 - aula 11:
// Ajuste o programa para mostrar o conteúdo de numeros antes de chamar maior() e depois de chamar maior().

#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2.0;
}

float dobro(float numeros[]) {
    numeros[0] *= 2.0;
    numeros[1] *= 2.0;
    return media(numeros);
}

void maior(float numeros[]) {
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

int main() {
    float numeros[2];

    printf("Digite o primeiro número: ");
    scanf("%f", &numeros[0]);
    printf("Digite o segundo número: ");
    scanf("%f", &numeros[1]);

    printf("Vetor antes de calcular a média: [%.2f, %.2f]\n", numeros[0], numeros[1]);

    float med = media(numeros);
    printf("Média dos valores: %.2f\n", med);

    float nova_med = dobro(numeros);
    printf("Vetor após dobrar os valores: [%.2f, %.2f]\n", numeros[0], numeros[1]);
    printf("Nova média dos valores: %.2f\n", nova_med);

    printf("Vetor antes de chamar maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);

    maior(numeros);
    printf("Vetor após chamar maior(): [%.2f, %.2f]\n", numeros[0], numeros[1]);

    return 0;
}