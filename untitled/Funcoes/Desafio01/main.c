#include <stdio.h>

/*
 Faça um programa que tenha uma função que receba um vetor de
 inteiros como parãmetros e retorne o maior valor
 */

int maiorValor(int vetor[], int qtd);

int main() {

    int vetor[10] = {1, 6, 8, 15, 24, 32, 47, 88, 4, 2};
    int maior = maiorValor(vetor, 10);

    printf(" O maior valor do vetor digitado foi: %d", maior);



    return 0;
}

int maiorValor(int vetor[], int qtd) {
    int maior = 0;

    for (int i = 0; i < qtd; i++) {
        if (i == 0) {
            maior = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}
