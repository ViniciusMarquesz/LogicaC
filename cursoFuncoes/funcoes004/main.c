#include <stdio.h>

/*
 Função para verificar se um número é par ou ímpar
 */

void verificaNumero(int n);

int main(void) {

    int n = 0;

    printf("Digite um numero para verificar: ");
     scanf("%d", &n);

    verificaNumero(n);

    return 0;
}

void verificaNumero(int n) {
    if (n % 2 == 0) {
        printf("O numero %d eh par", n);
    } else {
        printf("O numero digitado eh impar");
    }
}