#include <stdio.h>

int main() {

    //Vetores de numeros inteiros
    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    //Vetores e reais
    float valores[5];
    for (int i =0; i < 5; i++) {
        valores[i] = (float)numeros[i] / (float) 2;
    }

    //Mostrando o resultado de tras para frente
    for (int i = 4; i >= 0; i--) {
        printf("%.2f\n", valores[i]);
    }

    return 0;
}