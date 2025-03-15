#include <stdio.h>

int main() {

    int x = 10;
    float y = 20.50;
    char z = 'a';

    int *pX = &x;
    float *pY = &y;
    char *pZ = &z;


    printf("Endereco de x %d Valor de x %d", pX, *pX);

    return 0;
}