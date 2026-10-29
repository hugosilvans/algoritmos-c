#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do retangulo\n");

    float altura = 5.0;
    float base = 5.0;

    printf("\nDigite o valor da Base:", base);
    scanf("%f", &base);

    printf("Digite o valor do Altura:", altura);
    scanf("%f", &altura);

    printf("\nFormula: Area = Base * Altura\n");
    printf("\nA = %.1f * %.1f\n", base, altura);
    float area = altura * base;
    printf("A = %.2f", area);

    return 0;
}