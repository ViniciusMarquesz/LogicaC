#include <stdio.h>

/*
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
que retorne a soma do dobro dos dois numeros lidos. A funcao dever a armazenar o dobro
de A na propria variavel A e o dobro de B na propria variavel B.
 */

int dobraValor(int *a, int *b);

int main(void) {

    int a = 0;
    int b = 0;
    int resultado = 0;

    printf("Digite o primeiro valor:\n");
     scanf("%d", &a);

    printf("Digite o segundo valor:\n");
    scanf("%d", &b);

    resultado = dobraValor(&a, &b);

    printf("O dobro de A: %d \n", a);
    printf("O dobro de B: %d \n", b);
    printf("A soma do dobro: %d\n",resultado);



    return 0;
}

int dobraValor(int *a, int *b) {

    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;

}