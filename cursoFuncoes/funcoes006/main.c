#include <stdio.h>
#define TAM 10
/*
Crie uma função que receba um vetor de números inteiros e
o tamanho do vetor e retorne a soma de todos os elementos do vetor.
 */

//Chamada de funcao
int somaVetor(int vetor[], int tamanho);

int main() {

    //Variavel do tipo vetor
    int vetor[TAM];

    //Laço de repetição preenchendo o vetor
    for (int i = 0; i < TAM; i++) {
        printf("Preencha o vetor [%d]: ", i + 1);
         scanf("%d", &vetor[i]);
    }

    //Variavel armazenando e passando parametro para a funcao
    int resultado = somaVetor(vetor, TAM);

    printf("A soma dos vetores eh: %d", resultado);

    return 0;
}

//Funcao
int somaVetor(int vetor[], int tamanho) {

    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}