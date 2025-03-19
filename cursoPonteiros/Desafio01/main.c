#include <stdio.h>
/*
Faça um programa que contenha duas variáveis inteiras.
Leia estas variáveis do teclado. Em seguida, compare seus
endereços e exiba o conteúdo do maior endereço.
 */

int main(void) {

    int valor1 = 0;
    int valor2 = 0;

    printf("Informe o primeiro valor: ");
     scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
     scanf("%d", &valor2);

    if(&valor1 > &valor2) {
     printf("O primeiro numero digitado possui o maior endereco! ", valor1);
    } else {
       printf("O segundo numero digitado possui o maior endereco! ", valor2);
    }

    return 0;
}