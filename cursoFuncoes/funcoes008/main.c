#include <stdio.h>

/*
Crie um programa em C que:

Tenha uma função para preencher uma matriz 3x3 com valores fornecidos pelo usuário.
Tenha uma função para calcular a soma da diagonal principal.
Tenha uma função para calcular a soma da diagonal secundária.
No main, exiba a matriz preenchida e as somas calculadas.
*/

//Chamada de funções
void preencherMatriz(int matriz[3][3]);
int somaDiagonalPrincipal(int matriz[3][3]);
int somaDiagonalSecundaria(int matriz[3][3]);
void exibirMatriz(int matriz[3][3]);


int main(void) {

    //Variavel
    int matriz[3][3];

    //Chamando a função e passagem de parametro
    preencherMatriz(matriz);

    ////Chamando a função e passagem de parametro
    exibirMatriz(matriz);

    //Variaveis e chamando a função com passagem de parametro
    int somaPrincipal = somaDiagonalPrincipal(matriz);
    int somaSecundaria = somaDiagonalSecundaria(matriz);

    //Exibindo na tela
    printf("A soma da diagonal principal foi: %d\n", somaPrincipal);
    printf("A soma da diagonal Secundaria foi: %d\n", somaSecundaria);



    return 0;
}

//Função para preencher matriz
void preencherMatriz(int matriz[3][3]) {
    printf("Preencha a matriz 3x3:\n");

    //Laço de repetição i,j
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             printf("[%d][%d]:", i, j);
              scanf("%d", &matriz[i][j]);

         }//for j
     }//for i
}//função


//Função para somar diagonal principal da matriz
int somaDiagonalPrincipal(int matriz[3][3]) {
    int soma = 0;

    for (int i = 0; i < 3; i++) {

        //Variavel recebendo os valores da diagonal principal
            soma += matriz[i][i];
    }//for i

    return soma;

}//função

//Função para somar a diagonal secundaria da matriz
int somaDiagonalSecundaria(int matriz[3][3]) {
    int soma = 0;

    //Laço de repetição
    for (int i = 0; i < 3; i++) {

        //Variavel recebendo a diagonal secundaria da matriz
            soma += matriz[i][2 - i];

    }//for i

    return soma;

}//função

//Função para exibir a matriz preenchida
void exibirMatriz(int matriz[3][3]) {

    //Laço de repetição
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matriz[i][j]);
        }//for j

        printf("\n");

    }//for i

}//função
