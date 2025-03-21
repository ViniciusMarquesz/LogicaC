#include <stdio.h>

/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.
 */

void lerArray(int *ptr, int tamanho);
void exibirArray(int *ptr, int tamanho);

int main() {

    int array[5];

    lerArray(array, 5);
    exibirArray(array, 5);

    return 0;
}


void lerArray(int *array, int tamanho) {
    printf("Digite os %d valores inteiros:\n", tamanho);
     for (int i = 0; i < tamanho; i++) {
         scanf("%i", array + i); //Le diretamente na posicao via ponteiro
     }
}

void exibirArray(int *array, int tamanho) {
    printf("O dobro de cada valor: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", *(array + i) * 2);

    }

}
