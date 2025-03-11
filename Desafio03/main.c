#include <stdio.h>

/*
Faça um programa que leia um vetor de 10 posições e atribua valor 0
para todos os elementos que possuírem valores negativos.
 */

int main() {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Informe o valor de [%d] de 10: ", i + 1);
         scanf("%d", &vetor[i]);

        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("Vetor na posicao [%d] vale %d\n:", i, vetor[i]);
    }

    return 0;
}