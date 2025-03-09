#include <stdio.h>

int main() {

    int num[2][2];

    num[0][0] = 1;
    num[0][1] = 2;
    num[1][0] = 3;
    num[1][1] = 4;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Posicao [%d] [%d] vale %d\n", i, j, num[i][j]);
        }
    }
    return 0;
}