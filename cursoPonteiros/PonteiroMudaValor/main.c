#include <stdio.h>

/*
Criar uma função que recebe dois
ponteiros e troca os valores entre eles.
 */

void trocaValores(int *a, int *b);

int main() {

    //Variaveis
    int x = 3;
    int y = 7;

    printf("Antes da troca x = %d e y = %d \n", x, y);

    trocaValores(&x, &y);

    printf("Depois da troca x = %d e y = %d ", x, y);

    return 0;
}

void trocaValores(int *a, int *b) {

    int troca = *a;
    *a = *b;
    *b = troca;

}