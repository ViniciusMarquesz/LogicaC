#include <stdio.h>

/*
Faça um programa que tenha uma função que dado um valor
numérico de entrada, gere e imprima como  saída o número de
linhas com pontos de exclamação, conforme exemplo abaixo (para n = digitado pelo usuario):
 */

void imprimeExclamacoes(int tamanho);

int main() {

    //Variavel
    int linhas;

    //Exibe na tela
    printf("Digite o tamanho da linha: ");
    //Armazena o caractere digitado pelo usuario
     scanf("%d", &linhas);

    //Imprime e passagem de parametro "linhas"
    imprimeExclamacoes(linhas);

    return 0;
}


void imprimeExclamacoes(int tamanho) {

    for (int i = 0; i <= tamanho; i++) {
        for (int j = 0; j < i; j++) {
            printf("!");
        }
        printf("\n");
    }

}