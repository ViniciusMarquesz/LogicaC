#include <stdio.h>

int main(void) {

    int n; //Variavel que guarda seu valor na memória

    //Declarando ponteiro
    int *p; //Ponteiro é um valor que aponta para um endereço de memória

    printf("Informe um numero: ");
     scanf("%d", &n);

    //Inicializando o ponteiro

    p = &n;

    printf("O numero informado foi: %d\n", n);

    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco do ponteiro: %d\n", p);



    return 0;
}