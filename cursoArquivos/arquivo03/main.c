#include <stdio.h>

int main(void) {

    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r"); //Leitura

    if (arq) {
        while (!feof(arq)) {
            printf("%c",c);
        }        }
    else {
        printf("Arquivo nao encontrado");

    }

    fclose(arq);

    return 0;
}