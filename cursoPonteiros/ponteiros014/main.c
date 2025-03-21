#include <stdio.h>

/*
Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereco das posicoes contendo valores pares.
 */

void lerArray(int *array, int tamanho);
void exibirArrayPar(int *array, int tamanho);

int main() {

    int array[5];

    lerArray(array, 5);
    exibirArrayPar(array, 5);






    return 0;
}


void lerArray(int *ptr, int tamanho) {
    printf("Prencha a matriz de tamanho %d: \n", tamanho);
     for (int i = 0; i < tamanho; i++) {
         scanf("%i", ptr + i); // Le/Percorre diretamente a posicao pelo ponteiro
     }

}


void exibirArrayPar(int *array, int tamanho) {
    printf("Endereco das posicoes contendo valores pares: \n");
     for (int i = 0; i < tamanho; i++) {
         if (*(array + i) % 2 == 0) { //*(array + i) - Percorrendo os valores do array e realizando a operação
             printf("Endereco da array [%d]: %p\n", i, array + i);
         }
     }

}