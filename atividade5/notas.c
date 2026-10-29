#include <stdio.h>

int main(int argc, char *argv[]) {
    int qtdalunos = 0;
    printf("Gerenciador de Notas\n");

    printf("\nInforme a quantidade de alunos: \n");
    scanf("%d", &qtdalunos);

    float notas[qtdalunos];
    float soma = 0.0;
    float maior_nota, menor_nota;
    int aluno_maior_nota = 0, aluno_menor_nota = 0, aprovados = 0;

    for (int i = 0; i < qtdalunos; i++) {
        do {
            printf("\nDigite a nota do Aluno %d: \n", i + 1);
            scanf("%f", &notas[i]);
        } while (notas[i] > 10.0 || notas[i] < 0.0);

        soma = soma + notas[i]; // somando todas as notas

        if (i == 0) {
            maior_nota = menor_nota = notas[i]; // Se for o primeiro aluno, definimos que a maior e
                                                // menor nota por enquanto são a dele.
        } else {
            if (notas[i] > maior_nota) {
                maior_nota = notas[i];
                aluno_maior_nota = i;
            }
            if (notas[i] < menor_nota) {
                menor_nota = notas[i];
                aluno_menor_nota = i;
            }
        }

        if (notas[i] >= 6.0) {
            aprovados++; // Se for maior, o contador de aprovados aumenta
        }
    }

    printf("\nNotas dos alunos:\n");

    for (int i = 0; i < qtdalunos; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    // Média da turma
    float media_geral = soma / qtdalunos;
    printf("\nMedia geral da turma: %.2f\n", media_geral);

    // Maior e menor nota
    printf("Maior nota: %.2f (Aluno %d)\n", maior_nota, aluno_maior_nota + 1);
    printf("Menor nota: %.2f (Aluno %d)\n", menor_nota, aluno_menor_nota + 1);

    // Total de aprovados
    printf("Alunos aprovados: %d\n", aprovados);

    // Consultar a nota de um aluno específico
    int k;
    printf("\nDigite o numero do aluno que deseja ver a nota (1 a %d): ", qtdalunos);
    scanf("%d", &k);

    if (k >= 1 && k <= qtdalunos) {
        printf("A nota do aluno %d eh: %.2f\n", k, notas[k - 1]);
    } else {
        printf("Opcao invalida, tente novamente.\n");
    }
    return 0;
}
