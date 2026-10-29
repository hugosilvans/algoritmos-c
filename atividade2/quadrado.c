#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do quadrado\n");

    float lado, area;

    printf("\nDigite o valor do Lado:", lado);
    scanf("%f", &lado);

    printf("Formula: Area = Lado^2\n");
    printf("\nA = %.1f ^2\n", lado);

    area = lado * lado;
    printf("A = %.2f", area);

    return 0;
}