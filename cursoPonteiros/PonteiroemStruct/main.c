#include <stdio.h>

int main(void) {

    struct Horario {
        int hora;
        int minuto;
        int segundo;
    };

    struct Horario agora, *depois;

    depois = &agora;

    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    struct Horario antes;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    getchar();
    return 0;
}