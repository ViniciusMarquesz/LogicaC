#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor);

int main(void) {

    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;

    printf("Digite um valor da pesquisa: ");
     scanf("%d", &valor);

    resultado = procurarValor(gancho, valor);

    if (resultado == (struct lista*)0) {
        printf("Valor nao encontrado");
    } else {
        printf("Valor %i encontrado. \n", resultado->valor);
    }


    return 0;
}

struct lista *procurarValor(struct lista *pLista, int valor) {

    while (pLista != (struct lista *)0) {
        if (pLista->valor == valor) {
            return(pLista);
        }else {
            pLista = pLista->proximo;
        } //else
    }//while

    return(struct lista *)0;

}


