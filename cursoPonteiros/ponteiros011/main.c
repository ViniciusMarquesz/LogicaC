#include <stdio.h>

/*
Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereco de cada posicao desse array
 */

int main(void) {

    float array[10];

    for (int i = 0; i < 10; i++) {
        printf("Endereco da array [%d]; %p\n", i, &array[i]);
    }


    return 0;
}