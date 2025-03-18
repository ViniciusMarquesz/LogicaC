#include <stdio.h>

/*
Crie uma função que calcule o fatorial de um número
n (n! = n * (n-1) * (n-2) * ... * 1).
 */

int fatorial(int nmr);

int main() {

    int nmr = 0;

    printf("Digite um numero inteiro para calcular o fatorial: ");
     scanf("%d", &nmr);

    if (nmr == 0) {
        printf("Fatorial de numero negativo nao existe!");
    } else {
        int result = fatorial(nmr);

        printf("O fatorial de %d e %d", nmr, result);
    }

    return 0;
}

int fatorial(int nmr) {

    int resultado = 1;

    for (int i = 1; i <= nmr; i++) {
        resultado *= i;
    }

    return resultado;
}