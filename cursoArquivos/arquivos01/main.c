#include <stdio.h>

int main(void) {

    FILE *arq;

    //fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)

    //w - Abrir o arquivo para escrita ( se o arquivo ja existir, sera sobrescrito
    //com um novo zerado)

    //r Abrir o arquivo para leitura ( não podemos escrever no arquivo)

    //wa - Abrir o arquivo para adição de conteudo ( se o arquivo ja existir, o
    //arquivo sera dicionado na linha abaixo)

    arq = fopen("arquivo.txt", "w");

    //Sempre apos finalizar a manipulação de um arquivo, devemos fechá-lo

    fclose(arq);


    return 0;
}