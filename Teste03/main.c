#include <stdio.h>

/*
Faça um programa que leia 10 números e escreva o maior
e o menor valor lido
 */

int main() {

    int numero;
    int maior = 0;
    int menor = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor inteiro: ", i + 1);
         scanf("%d", &numero);

        if (i == 0) {
            maior = numero;
            menor = numero;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior valor digitado foi %d e o menor e %d", maior, menor);

    return 0;
}