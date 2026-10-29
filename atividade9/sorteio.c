#include "../entrada_inteiro.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int minimo, maximo, esperado;
    if (argc != 4 || !ler_inteiro(argv[1], &minimo) || !ler_inteiro(argv[2], &maximo) ||
        !ler_inteiro(argv[3], &esperado)) {
        fprintf(stderr, "Uso: %s minimo maximo esperado\n", argv[0]);
        return 1;
    }
    long long intervalo = (long long)maximo - minimo + 1;
    if (intervalo < 2 || intervalo > RAND_MAX || esperado < minimo || esperado > maximo)
        return 1;
    // rand é suficiente para um exercício; não serve para sorteios com segurança.
    srand((unsigned)time(NULL));
    int sorteado = minimo + (int)(rand() % intervalo);
    printf("Sorteado: %d; esperado: %d; acertou: %s\n", sorteado, esperado,
           sorteado == esperado ? "sim" : "não");
    return 0;
}
