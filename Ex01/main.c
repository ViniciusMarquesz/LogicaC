#include <stdio.h>

//Exibe o resultado da soma da potenciação de cada numero

#define VALOR 3

int main() {

    //Variaveis
    int valor[VALOR];
    int resultadoQuadrado;

    //Entrada
    for (int i = 0; i < VALOR; i++) {
        printf("Digite o %d de: ", i + 1);
        scanf("%d", &valor[i]);
        fflush(stdin);
    }

    //Processamento
    for (int i = 0; i < VALOR; i++) {
        resultadoQuadrado += valor[i] * valor[i];
    }

    //Saida
    printf("O resultado eh %d: ", resultadoQuadrado);



    return 0;
}