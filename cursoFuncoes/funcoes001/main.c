#include <stdio.h>

/*
Faça um programa que tenha uma função que receba um vetor de
inteiros como parâmetro e retorne o maior valor.
 */

int recebeVetor(int vetor[], int tamanho);

int main() {

    int vetor[10] = {3, 3, 4, 8, 4, 9, 23, 78, 98, 99};

    int maior = recebeVetor(vetor, 10);

    printf("O maior numero armazenado no vetor foi: %d", maior);

    return 0;

}

int recebeVetor(int vetor[], int tamanho) {

    int maior = 0;

    for (int i = 0; i < tamanho; i++) {
        if (i == 0) {
            maior = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}