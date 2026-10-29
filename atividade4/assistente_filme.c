#include <stdio.h>

int main(int argc, char *argv[]) {
    int tipo, genero, subgenero;

    do {
        printf("Ola! Sou sua assistente virtual para a escolha de filmes, como posso te ajudar?\n");

        printf("\nEscolha um tipo: \n");
        printf("1 - Filme Leve\n");
        printf("2 - Filme Intenso\n");
        scanf("\n%d", &tipo);

        if (tipo > 2 || tipo < 1) {
            printf("Opcao Invalida, tente novamente. \n");
        }

        if (tipo == 1) {
            printf("Escolha o genero: \n");
            printf("1 - Comedia\n");
            printf("2 - Animacao\n");
            scanf("\n%d", &genero);

            if (genero == 1) {
                printf("Sugestao: As branquelas\n");
            } else if (genero == 2) {
                printf("Sugestao: Toy Story\n");
            } else {
                printf("Opcao Invalida, tente novamente.\n");
            }
        }
        if (tipo == 2) {
            printf("Escolha o genero: \n");
            printf("1 - Terror\n");
            printf("2 - Acao\n");
            scanf("%d", &genero);

            if (genero == 1) {
                printf("Escolha o subgenero: \n");
                printf("1 - Terror psicologico\n");
                printf("2 - Terror sobrenatural\n");
                scanf("%d", &subgenero);

                if (subgenero == 1) {
                    printf("Sugestao: Corra!\n");
                } else if (subgenero == 2) {
                    printf("Sugestao: Invocacao do Mal\n");
                } else {
                    printf("Opcao Invalida, tente novamente.\n");
                }
            }
            if (genero == 2) {
                printf("Escolha o subgenero: \n");
                printf("1 - Super-herois\n");
                printf("2 - Aventura realista\n");
                scanf("%d", &subgenero);

                if (subgenero == 1) {
                    printf("Sugestao: Vingadores ultimato\n");
                } else if (subgenero == 2) {
                    printf("Sugestao: Mad max: Estrada furia\n");
                } else {
                    printf("Opcao Invalida, tente novamente.\n");
                }
            }
        }
        printf("Deseja escolher novo filme?\n");
        printf("0 - Sim\n1 - Nao\n");
        scanf("%d", &tipo);

    } while (tipo == 0);

    return 0;
}