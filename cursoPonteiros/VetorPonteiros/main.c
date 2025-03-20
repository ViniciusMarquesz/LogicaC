#include <stdio.h>

/*
Criar uma função que preenche um vetor de n posições usando ponteiros.
 */

void preencheVetor(int *vetor, int tamanho);
void exibirVetor(int *vetor, int tamanho);

int main() {

    int vetor[5];

    preencheVetor(vetor, 5);
    exibirVetor(vetor, 5);


    return 0;
}

void preencheVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d:", i + 1);
         scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int *vetor, int tamanho) {
    printf("Vetor preenchido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor + i)); // mesma coisa que vetor[i]
    }
    printf("\n");
}