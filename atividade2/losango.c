#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do losango\n");

    float diagonal_maior = 10;
    float diagonal_menor = 10;

    printf("\nDigite o valor da Diagonal maior:", diagonal_maior);
    scanf("%f", &diagonal_maior);

    printf("Digite o valor da Diagonal menor:", diagonal_menor);
    scanf("%f", &diagonal_menor);

    printf("\nFormula: Area = (Diagonal maior * Diagonal menor)/ 2\n");
    printf("\nA = (%.0f * %.0f) / 2\n", diagonal_maior, diagonal_menor);

    float area = (diagonal_maior * diagonal_menor) / 2;
    printf("A = %.1f", area);

    return 0;
}