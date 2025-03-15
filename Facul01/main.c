#include <stdio.h>

/*
Implemente um codigo em c com 4 funções
(soma, subtracao, divisao, multiplicacao),
todas devem receber dois números inteiros.
No método main, colete dois valores do usuário
e efetue a chamada das 4 funções, mostrando o
resultado das operações.
 */

int soma(int a, int b) {
   return a + b;
}

int subtracao(int a, int b) {
   return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    return (float) a / b;
}

int main() {

    int num1 = 0;
    int num2 = 0;

    printf("Digite um valor inteiro: \n");
     scanf("%d", &num1);

    printf("Digite outro valor inteiro: \n");
     scanf("%d", &num2);


    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtracao: %d\n", subtracao(num1, num2));
    printf("Multiplicacao: %d\n", multiplicacao(num1, num2));
    printf("Divisao: %d\n", divisao(num1, num2));

    return 0;
}