#include <stdio.h>
/* Leia quatro notas, calcule a média aritmética e
 * imprima o resultado
 */

#define NOTAS 4

int main() {

    float nota[NOTAS];
    float soma = 0;
    float media = 0;

    for (int i = 0; i < NOTAS; i++) {
        printf("Informe a nota %d: ", i + 1);
        scanf("%f", &nota[i]);
        fflush(stdin);

    }

    for (int i = 0; i < NOTAS; i++) {
        soma += nota[i];
    }

    media = soma / NOTAS;

    printf("A media das notas eh: %.2f\n", media);





    return 0;
}

