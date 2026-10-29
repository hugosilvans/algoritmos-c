#include <stdio.h>

int main(int argc, char *argv[]) {

    char opcao;
    float pi = 3.14;
    float raio;

    float diagonal_maior_losango;
    float diagonal_menor_losango;

    float lado;

    float altura_retangulo;
    float base_retangulo;

    float base_maior_trapezio;
    float base_menor_trapezio;
    float altura_trapezio;

    float altura_triangulo;
    float base_triangulo;

    printf("CALCULADORAS DE AREAS\n");

    printf("\nEscolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - retangulo\n");
    printf("t - triangulo\n");
    printf("z- Trapezio\n");

    scanf("\n%c", &opcao);

    switch (opcao) {

    case 'c':
        printf("Circulo\n");
        printf("\nDigite o valor do Raio: ", raio);
        scanf("%f", &raio);

        printf("\nFormula: Area = pi (3.14) * raio^2\n");
        printf("\nA = %.2f * %.0f ^2\n", pi, raio);

        float area_circulo = pi * (raio * raio);
        printf("A = %.2f", area_circulo);
        break;

    case 'l':
        printf("Losango\n");
        printf("\nDigite o valor da Diagonal maior: ", diagonal_maior_losango);
        scanf("%f", &diagonal_maior_losango);

        printf("Digite o valor da Diagonal menor: ", diagonal_menor_losango);
        scanf("%f", &diagonal_menor_losango);

        printf("\nFormula: Area = (Diagonal maior * Diagonal menor)/ 2\n");
        printf("\nA = (%.0f * %.0f) / 2\n", diagonal_maior_losango, diagonal_menor_losango);

        float area_losango = (diagonal_maior_losango * diagonal_menor_losango) / 2;
        printf("A = %.1f", area_losango);
        break;

    case 'q':
        printf("Quadrado\n");
        printf("\nDigite o valor do Lado: ", lado);
        scanf("%f", &lado);

        printf("Formula: Area = Lado^2\n");
        printf("\nA = %.1f ^2\n", lado);

        float area_quadrado = lado * lado;
        printf("A = %.2f", area_quadrado);
        break;

    case 'r':
        printf("Retangulo\n");
        printf("\nDigite o valor da Base:", base_retangulo);
        scanf("%f", &base_retangulo);
        printf("Digite o valor do Altura:", altura_retangulo);
        scanf("%f", &altura_retangulo);

        printf("\nFormula: Area = Base * Altura\n");
        printf("\nA = %.1f * %.1f\n", base_retangulo, altura_retangulo);

        float area_retangulo = altura_retangulo * base_retangulo;
        printf("A = %.2f", area_retangulo);
        break;
    case 't':
        printf("Triangulo\n");
        printf("\nDigite o valor do Altura:", altura_triangulo);
        scanf("%f", &altura_triangulo);

        printf("Digite o valor da Base:", base_triangulo);
        scanf("%f", &base_triangulo);

        printf("\nFormula: Area = Base * Altura / 2");
        printf("\nA = %.1f * %.1f / 2\n", altura_triangulo, base_triangulo);

        float area_triangulo = (altura_triangulo * base_triangulo) / 2;
        printf("A = %.1f", area_triangulo);
        break;
    case 'z':
        printf("Trapezio\n");

        break;
    default:
        printf("Opcao invalida");
    }

    return 0;
}