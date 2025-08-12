#include <stdio.h>
#include <string.h>

#define TAM 20

int main(int argc, char* argv[]){
    
    //declaração de strings
    char palavra1[] = "conhecimento";
    char palavra2[] = {'n', 'o', 'm', 'e', '\0'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("Digite uma frase:\n");
    //gets() substitui o scanf na hora de ler uma frase
    //fgets() é a maneira segura de ler strings
    fgets(frase1, TAM, stdin);
    printf("A frase digitada eh: %s", frase1);


    printf("Digite uma palavra:\n");

    //limpar a area de entrada
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra:\n");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    //comparar strings
    if(strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais.\n");
    } else{
        printf("As palavras sao diferentes.\n");
    }

    printf("Tamanho da palavra eh: %d \n", (strlen(palavra3) - 1));

    for(int i = 0; i < strlen(palavra3); i++){
        printf("%c\n", palavra3[i]);
    }

    for(int d = strlen(palavra3) - 1 ; d >= 0; d--){
        printf("%c\n", palavra3[d]);
    }

    //concatena palavra3 e palavra4
    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);
    return 0;
}