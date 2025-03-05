#include <stdio.h>

/*
Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3, considerando números maiores que 0.
 */

int main() {

    //Váriaveis
    int numero = 1;
    int contador = 0;

    printf("Apresentando os 5 primeiros multiplos de 3: ");

    while (contador < 5) {
        if (numero % 3 == 0) {
            printf("\nO numero %d e multiplo de 3. \n", numero);
            contador++;
        }
        numero++;
    }
    return 0;
}