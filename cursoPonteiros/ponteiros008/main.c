#include <stdio.h>

/*
Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.
 */

void ordenarValor(int *a, int *b);

int main(void) {

    int valor1 = 0;
    int valor2 = 0;

    printf("Digite um numero inteiro: ");
     scanf("%d", &valor1);

    printf("Digite um numero inteiro: ");
     scanf("%d", &valor2);

    ordenarValor(&valor1, &valor2);

    printf("Maior valor %d\n", valor1);
    printf("Menor valor %d ", valor2);



    return 0;
}

void ordenarValor(int *a, int *b) {

    //Garante que A sempre seja o maior.
    if (*a < *b) { //Sempre que A for menor que B, A recebe o valor de B.
        int temp = *a;
        *a = *b;
        *b = temp;
    }

}