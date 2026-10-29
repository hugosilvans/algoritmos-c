#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double x, y;
} Ponto;

int main(void) {
    FILE *arquivo = fopen("dados_regressao.csv", "r");
    if (!arquivo)
        return 1;
    size_t quantidade = 0;
    double x, y;
    int leitura;
    while ((leitura = fscanf(arquivo, "%lf,%lf", &x, &y)) == 2)
        quantidade++;
    if (leitura != EOF || quantidade < 2) {
        fclose(arquivo);
        return 1;
    }
    Ponto *pontos = calloc(quantidade, sizeof *pontos);
    if (!pontos) {
        fclose(arquivo);
        return 1;
    }
    rewind(arquivo);
    double somaX = 0, somaY = 0;
    for (size_t i = 0; i < quantidade; i++) {
        if (fscanf(arquivo, "%lf,%lf", &pontos[i].x, &pontos[i].y) != 2) {
            free(pontos);
            fclose(arquivo);
            return 1;
        }
        somaX += pontos[i].x;
        somaY += pontos[i].y;
    }
    fclose(arquivo);
    double mediaX = somaX / quantidade, mediaY = somaY / quantidade;
    double numerador = 0, denominador = 0;
    // Regressão linear exige variação em x para que a divisão esteja definida.
    for (size_t i = 0; i < quantidade; i++) {
        double desvioX = pontos[i].x - mediaX;
        numerador += desvioX * (pontos[i].y - mediaY);
        denominador += desvioX * desvioX;
    }
    free(pontos);
    if (denominador == 0)
        return 1;
    double a = numerador / denominador, b = mediaY - a * mediaX;
    printf("%.2fx + %.2f\n", a, b);
    return 0;
}
