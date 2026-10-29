#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    float notas[] = {9.7, 8.0, 10.0, 5.6};

    for (int i = 0; i < 4; i++) {
        printf("Notas[%d] %.2f\n", i, notas[i]);
    }

    return 0;
}