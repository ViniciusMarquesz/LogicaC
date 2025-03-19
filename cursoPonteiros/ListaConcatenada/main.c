#include <stdio.h>

int main(void) {

    struct Lista {
        int valor;
        struct Lista *proximo;
    };

    struct Lista m1, m2, m3;
    struct Lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct Lista *)0;


    while (gancho != (struct Lista *)0) {

        printf("%i\n", gancho->valor);
        gancho = gancho->proximo;

    }

    return 0;
}