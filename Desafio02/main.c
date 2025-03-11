#include <stdio.h>

/*
2. Faça um programa que leia um vetor de 10 posições,
conte e mostre quantos valores pares ele possui.
 */

int main() {

    int vetor[10];
    int pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor de [%d] de 10: ", i + 1);
         scanf("%d", &vetor[i]);

    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0 ) {
            printf("O valor %d e par. \n", vetor[i]);
            pares++;
        }
    }

    printf("O vetor possui %d pares!", pares);


    return 0;
}