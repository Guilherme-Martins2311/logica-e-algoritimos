#include <stdio.h>

/*
    Modos de abertura de arquivo
    'r' -> para leitura
    'w' -> criar e escrever no arquivo
    'a' -> criar, se não existir, e adicionar ao final do aquivo
*/

int main(int argc, char* argv[]){

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("erro ao abrir o aquivo.");
        return 1;
    }

    fprintf(sexta, "Hello, World");

    fclose(sexta);

    return 0;
}