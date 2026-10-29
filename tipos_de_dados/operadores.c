#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    float N1, N2;

    printf("Digite o valor de N1: ");
    scanf("%f", &N1);

    printf("Digite o valor de N2: ");
    scanf("%f", &N2);

    float soma = N1 + N2;
    printf("\n%.2f + %.2f = %.2f\n", N1, N2, soma);

    float diferenca = N1 - N2;
    printf("%.2f - %.2f = %.2f\n", N1, N2, diferenca);

    float produto = N1 * N2;
    printf("%.2f * %.2f = %.2f\n", N1, N2, produto);

    float quociente = N1 / N2;
    printf("%.2f / %.2f = %.2f\n", N1, N2, quociente);

    float resultado_potenciacao = powf(N1, N2);
    printf("%.2f ^ %.2f = %.2f\n", N1, N2, resultado_potenciacao);

    float raiz_quadrada = sqrtf(N1);
    printf("%.2f ^ 1/2 = %.2f\n", N1, raiz_quadrada);

    int resto = (int)N1 % (int)N2;
    printf("%.0f %% %.0f = %d\n", N1, N2, resto);

    float quociente_inteiro = N1 / (int)N2;
    printf("%.2f // %.2f = %d\n", N1, N2, quociente_inteiro);

    N1++;
    printf("%.2f++ = %.2f\n", N1 - 1, N1);

    N1--;
    printf("%.2f-- = %.2f\n", N1 + 1, N1);

    return 0;
}