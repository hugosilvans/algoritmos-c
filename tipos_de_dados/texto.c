#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char *argv[]) {

    // Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("\npalavra2[4] = %c\n", palavra2[4] - 1);

    // leitura SEGURA de strings
    printf("\nDigite uma frase: "); // scanf só lê uma palavra, n é a melhor opção
    fgets(frase1, TAM, stdin);      // N é necessário o "&", pois este já é o endereço

    printf("%s\n", frase1);
    fflush(stdin);
    printf("Digite uma palavra: ");
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
    fgets(palavra4, TAM, stdin);

    if (strcmp(palavra3, palavra4) == 0) {
        printf("\nAs palavras sao iguais\n");
    } else {
        printf("\nAs palavras NAO sao iguais\n");
    }

    printf("Tamanho da palavra eh: %d\n", strlen(palavra3) - 1);

    for (int i = 0; i < strlen(palavra3); i++) {
        printf("%c\n", palavra3[i]);
    }
    // imprimir ao contrário
    for (int i = strlen(palavra3) - 1; i >= 0; i--) {
        printf("%c\n", palavra3[i]);
    }

    // concatena (junta) palavra 3 e 4

    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);

    return 0;
}