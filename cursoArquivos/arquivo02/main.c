#include <stdio.h>

int main(void) {

    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r"); //Leitura

    if (arq) {
        while ((c = getc(arq)) != EOF) {
            printf("%c",c);
        }        }
    else {
       printf("Arquivo nao encontrado");

    }

    return 0;
}