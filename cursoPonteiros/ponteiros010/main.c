#include <stdio.h>

/*
Crie um programa que contenha uma funcao que permita passar por parametro dois
numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.
 */

void retornaPrimeiroValor(int *a, int b);

int main() {

    int a = 0;
    int b = 0;


    printf("Digite o primeiro valor: ");
     scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    retornaPrimeiroValor(&a, b);

    printf("O valor de A apos a soma: %i\n", a);
    printf("O valor de B: %i", b);

    return 0;
}


void retornaPrimeiroValor(int *a, int b) {

    *a = *a + b;

}
