#include <stdio.h>
int main(int argc, char *argv[]) {

    printf("Area do trapezio\n");

    float base_maior = 5.0;
    float base_menor = 5.0;
    float altura = 5.0;

    printf("Digite o valor da Base maior:", base_maior);
    scanf("%f", &base_maior);

    printf("Digite o valor da Base menor:", base_menor);
    scanf("%f", &base_menor);

    printf("Digite o valor do Altura:", altura);
    scanf("%f", &altura);

    printf("\nFormula: Area = (Base maior + Base menor) * Altura / 2\n");
    printf("\n A = (%.1f + %.1f) * %.1f / 2\n", base_maior, base_menor, altura);

    float area = (base_maior + base_menor) * altura / 2;
    printf("\nO valor da area eh: %.1f", area);

    return 0;
}