#include <stdio.h>

int main() {
    float valores[5][5];  // Declaração de uma matriz 5x5

    // Solicitando ao usuário os valores para preencher a matriz
    printf("Digite os valores para preencher a matriz 5x5 (valores decimais são permitidos):\n");

    // Preenchendo a matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor para a posicao [%d] [%d]: ", i+1, j+1);
            scanf("%f", &valores[i][j]);  // Recebe o para a posição
        }
    }

    // Exibindo a matriz
    printf("\nMatriz 5x5:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("[%.2f] ", valores[i][j]);  // Exibe o valor da posição com 2 casas decimais
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }

    return 0;
}