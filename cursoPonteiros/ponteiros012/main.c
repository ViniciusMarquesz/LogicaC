#include <stdio.h>

/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.
 */

void exibirMatriz(float matriz[3][3]);

int main(void) {

    float matriz[3][3];

    exibirMatriz(matriz);

    return 0;
}
void exibirMatriz(float matriz[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco da matriz [%d][%d] %p\n", i, j, &matriz[i][j]);
        }
        printf("\n");
    }

}