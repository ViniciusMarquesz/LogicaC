#include <stdio.h>


//Endereço de memória com parametro de entrada
void incrementar(int *valor) {

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor)); //Valor

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));

}

int main(void) {

    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", contador);

    //Passando o endereço de memoria da variavel por parametro para a função.
    incrementar(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", contador);

    return 0;
}