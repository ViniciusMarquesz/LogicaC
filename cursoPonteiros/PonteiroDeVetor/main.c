#include <stdio.h>

int somaVetor(int vetor[], const int n);

int main(void) {

    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    printf("A soma dos membros dos vetores e = %i", somaVetor(vetor, 10));

    return 0;
}

int somaVetor(int vetor[], const int n) {

    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n;


    for (ponteiro = vetor; ponteiro < finalVetor; ++ponteiro) {
        soma += *ponteiro;
    }

    return soma;
}