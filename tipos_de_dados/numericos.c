#include <stdio.h>

int main(int argc, char *argv[]) {
    int idade = 18;
    float altura = 1.67;
    float peso = 58.72;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("A idade eh %d\n", idade);
    printf("A altura eh %.2f\nO peso eh %.2f", altura, peso);

    float dobro_do_peso = peso * 2;
    printf("O dobro do peso eh %.2f", dobro_do_peso);
    float dobro_da_idade = idade * 2;
    printf("O dobro do idade eh %.2f", dobro_da_idade);

    return 0;
}