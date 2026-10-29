#ifndef ENTRADA_INTEIRO_H
#define ENTRADA_INTEIRO_H
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

/* Retorna sucesso somente se todo o argumento representa um int válido. */
static int ler_inteiro(const char *texto, int *valor) {
    char *fim;
    errno = 0;
    long numero = strtol(texto, &fim, 10);
    if (errno || fim == texto || *fim || numero < INT_MIN || numero > INT_MAX)
        return 0;
    *valor = (int)numero;
    return 1;
}
#endif
