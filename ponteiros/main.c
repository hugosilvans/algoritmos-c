#include <stdio.h>

int y = 1;

void incrementaX(int *valor) {
    // O ponteiro permite alterar a variável do chamador, não uma cópia local.
    for (int contador = 1; contador < 5; contador++) {
        y++;
        *valor = 11;
    }
}

int main(void) {
    int z = 1, w = 2;
    incrementaX(&z);
    printf("y = %d\nz = %d\n", y, z);
    printf("&z = %p\n&w = %p\n", (void *)&z, (void *)&w);
    return 0;
}
