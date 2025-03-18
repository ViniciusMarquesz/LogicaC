#include <stdio.h>
/*
Faça um programa que tenha uma função que,
dado um caractere qualquer de entrada, retorne
o mesmo caractere sempre em maiúsculo.
 */

char tudoMaisculo(char caractere);

int main(void) {

    //Variaveis
    char caractere = 'a';

    //Variavel recebendo a funcao e passando o parametro
    char maisculo  = tudoMaisculo(caractere);

    //Exibe na tela
    printf("O caractere %c maisculo e %c", caractere, maisculo);

    return 0;


}

//Funcao
char tudoMaisculo(char caractere) {

    char maisculo = (int)caractere -32;

    return maisculo;
}