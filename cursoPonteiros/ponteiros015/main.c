#include <stdio.h>

/*
Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,
o segundo menor valor na variavel do meio, e o maior valor na ultima variavel. A funcao
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.
 */

int recebeValor(int *a, int *b, int *c);

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    printf("Digite o primeiro valor: ");
     scanf("%i", &a);

    printf("Digite o segundo valor: ");
     scanf("%i", &b);

    printf("Digite o terceiro valor: ");
     scanf("%i", &c);

    int resultado = 0;


    resultado = recebeValor(&a, &b, &c);

    printf("Valores ordenados do menos para o maior: %i - %i - %i\n", a, b, c);

    if (resultado == 1) {
     printf("Os tres valores sao iguais!");
    }else {
     printf("Os valores sao diferentes!");
    }

    return 0;
}

int recebeValor(int *a, int *b, int *c) {

    int temp;

     if (*a > *b){ temp = *a; *a = *b; *b = temp; }
     if (*a > *c){ temp = *a; *a = *c; *c = temp; }
     if (*b > *c){ temp = *b; *b = *c; *c = temp; }


      return (*a == *b && *b == *c);
}