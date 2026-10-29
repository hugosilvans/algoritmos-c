#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do circulo\n");

    float pi = 3.14;
    float raio = 10;

    printf("\nDigite o valor do Raio:", raio);
    scanf("%f", &raio);

    printf("\nFormula: Area = pi (3.14) * raio^2\n");
    printf("\nA = %.2f * %.0f ^2\n", pi, raio);

    float area = pi * (raio * raio);
    printf("A = %.2f", area);

    return 0;
}