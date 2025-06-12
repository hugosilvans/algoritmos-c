#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if(argc != 4){
        printf("Uso: %s <número de sorteios> <mínimo> <máximo>\n", argv[0]);
        return 1;
    }
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    if(min >= max){
        printf(" O número mínimo deve ser menor que o número máximo.\n");
        return 1;
    }

    if(esperado < min || esperado > max){
        printf("O número esperado deve estar entre %d e %d.\n", min, max);
        return 1;
    }


    srand(time(NULL));
    int sorteado = (rand)
    return 0;    
}