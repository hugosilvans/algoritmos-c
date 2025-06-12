#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){
    if(argc < 3){
         printf("Argumento invalido");
         return 1;    
    }
 //comparar strings 
    if(strcmp(argv[1], "-maior") == 0){
        if(argc != 4){
            printf("Argumentos invalidos");
            return 1;
        }

    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
    printf("%d", maior_2n(x, y));

    } 
    
    if(strcmp(argv[1]), "-primo") ==  )
    return 0;
}
