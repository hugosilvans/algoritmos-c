#include "../entrada_inteiro.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    int maior, atual;
    if (argc < 3 || !ler_inteiro(argv[1], &maior)) {
        fprintf(stderr, "Informe pelo menos dois inteiros.\n");
        return 1;
    }
    // O maior acumulado evita reservar um vetor apenas para percorrer os valores.
    for (int i = 2; i < argc; i++) {
        if (!ler_inteiro(argv[i], &atual))
            return 1;
        if (atual > maior)
            maior = atual;
    }
    printf("%d\n", maior);
    return 0;
}
