    #include <stdio.h>

    /*
    Crie uma função que verifique se um número é primo
    (um número primo é aquele que é divisível apenas por 1 e por ele mesmo).
     */

    void verificaPrimo(int nmr);

    int main(void) {

        int numero = 0;

        printf("Digite um numero para saber se e primo: ");
         scanf("%d", &numero);

        verificaPrimo(numero);

        return 0;
    }

    void verificaPrimo(int nmr) {
        if (nmr <= 1) {
            printf("O numero digitado nao e primo");
            return;

        }

        for (int i = 2; i < nmr / 2; i++) {
            if (nmr % i == 0) {
                printf("O numero digitado nao eh primo:\n");
                return;
            } //If
        } //For
        printf("O numero digitado e primo.\n");
    }