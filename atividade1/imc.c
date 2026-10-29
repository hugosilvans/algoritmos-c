#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    float altura, peso;

    printf("CALCULADORA IMC\n");
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("\nIMC = %.2f / (%.2f)^2\n", altura, peso);

    float IMC = peso / powf(altura, 2);
    printf("Seu IMC eh: %.2f\n", IMC);

    if (IMC <= 18.5) {
        printf("Baixo peso\n");
    }

    if (IMC > 18.5 && IMC <= 24.9) {
        printf("Peso Normal\n");
    }

    if (IMC > 24.9 && IMC <= 29.9) {
        printf("Sobrepeso\n");
    }

    if (IMC > 29.9 && IMC <= 34.9) {
        printf("Obesidade I\n");
    }

    if (IMC > 34.9 && IMC <= 39.9) {
        printf("Obesidade II\n");
    }

    if (IMC > 39.9) {
        printf("Obesidade III\n");
    }

    return 0;
}