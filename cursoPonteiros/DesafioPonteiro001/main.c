#include <stdio.h>

/*
Criar uma função que recebe um ponteiro para
um inteiro e modifica o valor da variável dentro da função.
 */

//Função
void modificaValor(int *valor);

int main(void) {

    //Variaveis
    int numero = 5;

    //Exibe na tela
    printf("O valor antes da funcao: %d\n", numero);

    //Passando memoria da referencia como parametro para a função.
    modificaValor(&numero);

    //Exibe na tela apos a chamada da funcao
    printf("O valor apos a funcao: %d", numero);

    return 0;
}

//Função que modifica o valor.
void modificaValor(int *valor) {
    *valor = 10;
}