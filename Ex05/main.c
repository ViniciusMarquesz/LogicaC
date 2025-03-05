#include <stdio.h>

//Estrutura de repetição while

/*
 Utilizado quando voce precisa de um loop
 onde não se tenha um número fixo de elementos
 mas que tenha um critério de parada e antes de
 iniciar o loop, a condição é checada.

Problema:
Faça um programa, no qual receba e some números
inteiros até que o número de entrada seja 0
e apresente a soma no final;
 */

int main() {

    //Váriaveis
    int numero;
    int soma = 0;

    //Entrada
    printf("Informe um numero: ");
     scanf("%d", &numero);
    fflush("stdin");

   while (numero != 0) {
    soma += numero;

    //Entrada
    printf("Informe um numero: ");
     scanf("%d", &numero);
    fflush("stdin");
   }

    printf("A soma eh %d", soma);



    return 0;
}