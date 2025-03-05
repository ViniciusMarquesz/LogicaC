#include <stdio.h>

///Estrutura de repetição do while

/*
 Utilizado quando voce precisa de um loop
 onde não se tenha um número fixo de elementos
 mas que tenha um critério de parada e a condição
 de parada é checada após a primeira execução.

Problema:
Faça um programa, no qual receba e some números
inteiros até que o número de entrada seja 0
e apresente a soma no final;
 */

int main() {

    //Váriaveis
    int numero;
    int soma = 0;

    do {
        //Entrada
        printf("Informe um numero: ");
         scanf("%d", &numero);

        //Processamento
         soma += numero;

    } while (numero != 0);


    printf("A soma eh %d", soma);



    return 0;
}