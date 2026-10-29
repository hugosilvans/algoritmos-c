#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do triangulo\n");

    float altura = 6.0;
    float base = 5.2;

    printf("\nDigite o valor do Altura:", altura);
    scanf("%f", &altura);

    printf("Digite o valor da Base:", base);
    scanf("%f", &base);

    printf("\nFormula: Area = Base * Altura / 2");
    printf("\nA = %.1f * %.1f / 2\n", altura, base);

    float area = (altura * base) / 2;

    printf("A = %.1f", area);

    return 0;
}