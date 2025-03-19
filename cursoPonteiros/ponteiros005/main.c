#include <stdio.h>

int main(void) {

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    double soma = *pX + *pY;

    printf("Valor da soma = %lf\n", soma);

    printf("Endereco x = %i - Valor x = %i\n", pX, *pX);
    printf("Endereco y = %i - Valor x = %i\n", pY, *pY);
    printf("Endereco z = %i - Valor x = %c", pZ, *pZ);
    getchar();


    return 0;
}