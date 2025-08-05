#include <stdio.h>
#include <stdlib.h>
typedef struct ponto
{
  int x;
  float y;  
} ponto;


int main (int argc, char* argv[]){

    int qtd_linhas = 0;
    int x, soma_x;
    float y, media_x, media_y, soma_y;
    Ponto *numeros;
 
    FILE *arq = fopen("dados_regrassao.csv", "r");

    if(arq == NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }

    while(fscanf(arq, "%d,%f", &x, &y) != EOF)
    {
    qtd_linhas++;                
    }

    numeros = malloc(sizeof(ponto) * qtd_linhas); //alocação de memória, manipula o local da memória

    printf("qtd_linhas = %d\n", qtd_linhas);

    if(numeros != NULL){
        int i = 0;
        fseek(arq, 0, SEEK_SET); // coloca o cursor no início
        soma_x = 0;
        soma_y = 0;
        while(fscanf(arq, "%d,%f", &x, &y) != EOF)
        {
            numeros[i].x = x;
            numeros[i].y = y;
            soma_x += x;
            soma_y += y;
            i++;
        }
        media_x = soma_x / qtd_linhas;
        media_y = soma_y / qtd_linhas;
    }

    float inclinacao_dividendo = 0;
    float inclinacao_divisor = 0;

    for(int i = 0; i < qtd_linhas; i++){
        inclinacao_dividendo += (numeros[i].x - media_x) * (numeros[i].y - media_y);
        inclinacao_divisor += (numeros[i].x - media_x) * (numeros[i].x - media_x); 
    }

    float a = inclinacao_dividendo / inclinacao_divisor;
    float b = media_y - (a*media_x);

    print("%.2fx + %.2f", a, b);

    fclose(arq);

    return 0;
}   