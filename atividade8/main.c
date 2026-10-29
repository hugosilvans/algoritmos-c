#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x, y;
} Ponto;

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    Ponto A = {atof(argv[1]), atof(argv[2])};
    Ponto B = {atof(argv[3]), atof(argv[4])};

    float dx = B.x - A.x;
    float dy = B.y - A.y;
    float distancia = sqrt(dx * dx + dy * dy);

    printf("%.2f\n", distancia);
    return 0;
}