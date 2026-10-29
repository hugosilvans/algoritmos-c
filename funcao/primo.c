#include "../entrada_inteiro.h"
#include <stdio.h>
#include <string.h>

/* Dividir até n / divisor evita overflow que ocorreria com divisor * divisor. */
static int primo(int numero) {
    if (numero < 2)
        return 0;
    for (int divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int a, b;
    if (argc == 3 && strcmp(argv[1], "-primo") == 0 && ler_inteiro(argv[2], &a)) {
        printf("%d\n", primo(a));
        return 0;
    }
    if (argc == 4 && strcmp(argv[1], "-maior") == 0 && ler_inteiro(argv[2], &a) &&
        ler_inteiro(argv[3], &b)) {
        printf("%d\n", a > b ? a : b);
        return 0;
    }
    fprintf(stderr, "Uso: %s -primo inteiro | -maior inteiro inteiro\n", argv[0]);
    return 1;
}
