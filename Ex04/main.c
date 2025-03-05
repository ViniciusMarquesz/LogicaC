#include <stdio.h>

//Estruturas de repetição, for, while, do..while
//                         para, enquanto, faça...enquanto

/*
 Faça um programa, no qual receba e some 5 numeros
 inteiros
 *
*/


int main() {

    //Variaveis
    int numero;
    int soma = 0;

    //Laço de repetição
    for (int i = 0; i < 5; i++) {
        //Entrada
        printf("Informe um numero: ");
         scanf("%d", &numero);

        //Recebe os valores digitados pelo usuario e soma.
        soma += numero;

    }

    //Saida
    printf("A soma e %d", soma);



    return 0;
}