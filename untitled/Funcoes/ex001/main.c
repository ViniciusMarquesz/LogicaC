#include <stdio.h>

void mensagem();
int soma(int num1, int num2);
void proximo_char(char caractere);


int main() {
    printf("Ola...\n");
    mensagem();
    printf("Retorno = %d\n", soma(12, 15));

    char letra = 'a';
    proximo_char(letra);

    return 0;
}

void mensagem() {
    printf("Bem vindo!\n");
}

int soma(int num1, int num2) {
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere) {
    printf("%c", caractere + 1);
}