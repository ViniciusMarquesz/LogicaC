#include <stdio.h>

int soma(int num1, int num2);

int main() {

    //Variaveis
    int n1 = 0;
    int n2 = 0;
    int rest = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    rest = soma(n1, n2);
    printf("A soma de %d com %d e %d", n1, n2, rest);


    return 0;
}

int soma(int num1, int num2) {
    return num1 + num2;
}
